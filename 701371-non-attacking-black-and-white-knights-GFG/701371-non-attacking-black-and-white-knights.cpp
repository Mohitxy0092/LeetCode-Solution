class Solution {
  public:
    int numOfWays(int n, int m) {
        int ans = (n * m - 1) * n * m;
    if (n >= 1 && m >= 2) {
        ans -= (4 * (n - 1) * (m - 2));
    }
    if (n >= 2 && m >= 1) {
        ans -= (4 * (n - 2) * (m - 1));
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna