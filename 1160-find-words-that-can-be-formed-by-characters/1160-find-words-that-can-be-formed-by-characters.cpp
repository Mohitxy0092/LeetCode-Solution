class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        vector<int>charCount(26,0);
        for(char &ch : chars) {
            charCount[ch-'a']++;
        }
        //string -> character
        for(string word : words) {
            vector<int>wordCount(26,0);
            for(char &ch :word ) {
                wordCount[ch-'a']++;
            }
            bool isOk = true;
            for(int i=0;i<26;i++) {
                if(wordCount[i]>charCount[i]) {
                    isOk=false;
                    break;
                }
            }
            if(isOk) {
                res += word.length();
            }
        }
        return res;
    }
};