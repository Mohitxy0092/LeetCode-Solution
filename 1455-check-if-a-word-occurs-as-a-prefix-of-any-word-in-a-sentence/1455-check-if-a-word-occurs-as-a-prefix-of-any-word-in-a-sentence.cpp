class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream stream(sentence);
        string word;
        int idx=1;
        while(stream >> word) {
            if(word.find(searchWord)==0) {
                return idx;
            }
            
            idx++;
        }
        return -1;
    }
};