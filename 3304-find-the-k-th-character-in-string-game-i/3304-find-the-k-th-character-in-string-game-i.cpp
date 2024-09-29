class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while(word.length()<k) {
            string nextGen ="";
            for(char ch : word) {
                nextGen += (ch == 'z') ? 'a' : ch + 1;
                
            }
            word+=nextGen;
        }
        return word[k-1];
    }
};