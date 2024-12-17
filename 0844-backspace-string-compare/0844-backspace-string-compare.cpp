class Solution {
public:
    bool backspaceCompare(string s, string t) {
          stack<char>st;
        stack<char>st2;
        for(auto &ch : s) {
            if(ch!='#') {
                st.push(ch);
            }
            else {
                if(!st.empty())
                st.pop();
            }
        }
          for(auto &ch : t) {
                if(ch!='#') {
                st2.push(ch);
            }
            else {
                if(!st2.empty())
                st2.pop();
            }
        }
       if(st.size()!=st2.size()) return false;
        
        while(!st.empty() ) {
            if(st.top()!=st2.top()) return false;
            
            st.pop();
            st2.pop();
        }
        return true;
    }
};