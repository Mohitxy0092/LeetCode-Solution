class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int i=0;
        int j=0;
        int size_of_string = s.length();
        int size_of_spaces=spaces.size();
        while(i<size_of_string) {
            if(j<size_of_spaces && i==spaces[j]) {
                j++;
                ans+=" ";
            }
            ans+=s[i];
            i++;
        }
        return ans;
    }
};