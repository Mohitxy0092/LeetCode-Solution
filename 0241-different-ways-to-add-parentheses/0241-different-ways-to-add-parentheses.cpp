class Solution {
public:
    vector<int> solve(string s) {
        vector<int>v;
        for(int i=0;i<s.length();i++) {
            if(s[i] =='-' || s[i] == '+' || s[i]=='*') {
                vector<int>lres =solve(s.substr(0,i));
                  vector<int>rres =solve(s.substr(i+1));
                for(int &x : lres ) {
                    for(int &y : rres) {
                        if(s[i] =='+') {
                            v.push_back(x+y);
                        } else if(s[i]=='-') {
                            v.push_back(x-y);
                        }else {
                            v.push_back(x*y);
                        }
                    }
                }
            }
        }
        if(v.empty()) {
            v.push_back(stoi(s));
        }
        return v;
    }
    vector<int> diffWaysToCompute(string s) {
        return solve(s);
    }
};