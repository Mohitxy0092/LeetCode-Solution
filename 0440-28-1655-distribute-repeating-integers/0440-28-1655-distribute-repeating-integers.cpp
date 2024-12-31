class Solution {
public:
    // C --> ITH CUSTOMER
    bool solver(vector<int>&counts,vector<int>&quantity,int c) {
        if(c==quantity.size()) return true;

        for(int i=0;i<counts.size();++i) {
            if(counts[i]>=quantity[c]) {
                counts[i]-=quantity[c];
                if(solver(counts,quantity,c+1)) {
                    return true;
                }
                counts[i]+=quantity[c];
            }
        }
        return false;
    }
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int,int>countMap;
        for(auto n : nums) 
        countMap[n]++;
        vector<int>counts;
        for(auto it : countMap) {
            counts.push_back(it.second);
        }
        sort(begin(quantity),end(quantity),greater<int>());
        return solver(counts,quantity,0);
    }
};