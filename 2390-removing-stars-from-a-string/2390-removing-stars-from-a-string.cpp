class Solution {
public:
    void reverse(string &res) {
        int i=0;
        int j=res.size()-1;
        while(i<j) {
            swap(res[i],res[j]);
            i++;
            j--;
        }
    }
    string removeStars(string s) {
        stack<char>st;
        for(auto ch : s) {
            if(ch=='*' && !st.empty()) {
                st.pop();
            }
            else {
                st.push(ch);
            }
        }
        string res="";
        while(!st.empty()) {
            res+=st.top();
            st.pop();
    }
        reverse(res);
        return res;
    }
    };