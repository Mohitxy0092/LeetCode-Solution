class Solution {
public:
    
    void recurr(string &s , string &part){
        int found = s.find(part);
        if(found !=string :: npos) {
            string left_part = s.substr(0,found);
            string right_part = s.substr(part.length()+found ,s.size());
            s = left_part.append(right_part);
            recurr(s,part);
        }
        else {
            return;
        }
    }
    string removeOccurrences(string s, string part) {
    //     while(s.find(part) != string :: npos) {
    //         s.erase(s.find(part) ,part.length());
    //     }
    //     return s;
        
        recurr(s,part);
        return s;
    }
};