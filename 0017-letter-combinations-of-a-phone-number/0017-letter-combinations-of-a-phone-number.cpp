class Solution {
public:
    unordered_map<char,string>hash{{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"} , {'8',"tuv"}, {'9',"wxyz"}};

   void solve(string &digits,vector<string>&ans,string &output,int i){
   
    if(i>=digits.length()) {
        if(!(output.empty())) {
        ans.push_back(output);
        }
        return;
    }
    char n = digits[i];
       for(auto ch : hash[n] ) {
        output.push_back(ch);
        solve(digits,ans,output,i+1);
        output.pop_back();
    }
   }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
         string output="";
        solve(digits,ans,output,0);
        return ans;
    }
};