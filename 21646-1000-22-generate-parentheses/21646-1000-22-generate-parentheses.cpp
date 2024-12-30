class Solution {
public:
    void generator(int n,int open,int close,string output,vector<string>&str) {
        if(open+close==2*n) {
            str.push_back(output);
            return;
        }
        if(open<n) {
            generator(n,open+1,close,output+'(' , str);
        }
        if(close<open) {
            generator(n,open,close+1,output+')',str);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>str;
        string output="";
        generator(n,0,0,output,str);
        return str;
    }
};