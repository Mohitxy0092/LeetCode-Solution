class Solution {
public:
vector<int> majorityElement(vector<int>& nums) {
    vector<int> v;
    int n = nums.size();
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++) {
        hash[nums[i]]++;
    }
    for (const auto& ch : hash) {
        if (ch.second > n / 3) {
            v.push_back(ch.first);
        }
    }

    return v;
}

};