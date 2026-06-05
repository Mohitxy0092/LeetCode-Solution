class Solution {
  public:
    string lexicographicallySmallest(string &s, int k) {
            string ans = "";
    int l = s.length();

    // Adjust k based on whether the length of the string is a power of 2
    if (l & (l - 1))
        k += k;
    else
        k /= 2;

    // If k is greater than or equal to the string length, return -1
    if (k >= l)
        return "-1";

    stack<char> st;

    // Process each character in the string
    for (int i = 0; i < l; i++)
    {
        while (!st.empty() && k > 0 && st.top() > s[i])
        {
            st.pop();
            k--;
        }
        st.push(s[i]);
    }

    // If k is still greater than 0, remove remaining characters from the stack
    if (k > 0)
        while (k--)
            st.pop();

    // Build the result string from the stack
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    // Reverse the result to get the final lexicographically smallest string
    reverse(ans.begin(), ans.end());

    return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna