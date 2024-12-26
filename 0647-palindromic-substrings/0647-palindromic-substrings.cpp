class Solution {
public:
    int ExpendIndex(string s , int i,int j) {
        int count =0;
        while(i>=0 && j<s.length() && s[i]==s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int count =0;
        for(int i=0;i<n;i++) {
            //odd case 
            int oddAns = ExpendIndex(s,i,i);
            count = count+oddAns;
            //even case
            int evenAns = ExpendIndex(s,i,i+1);
            count = count+evenAns;
        }
        return count;
    }
};