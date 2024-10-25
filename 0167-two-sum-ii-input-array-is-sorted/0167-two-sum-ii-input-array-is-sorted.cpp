class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       // vector<int>ans;
        int s=0;
        int e=numbers.size()-1;
        while(s<e) {
            int csum=numbers[s]+numbers[e];
            if(csum==target) {
                // ans.push_back(s+1);
                // ans.push_back(e+1);
                return {s+1,e+1};
            }
            else if(csum<target) {
                s++;
            }
            else{
                e--;
            }
        }
        return {};
    }
};