class Solution {
public:
    void next_smaller_element(vector<int>&heights,vector<int>&next_ans) {    
        stack<int>s;
        s.push(-1);
        int n= heights.size();
        for(int i=n-1;i>=0;i--) {
            while(s.top() != -1 && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            next_ans.push_back(s.top());
            s.push(i);
        }
    }
    void prev_smaller_element(vector<int>&heights,vector<int>&prev_ans) {
        stack<int>s;
        s.push(-1);
        int n= heights.size();
        for(int i=0;i<n;i++) {
            while(s.top() != -1 && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            prev_ans.push_back(s.top());
            s.push(i);
        }
    }
    
    int largestRectangleArea(vector<int>& heights) {
        vector<int>next_ans;
        vector<int>prev_ans;
        next_smaller_element(heights,next_ans);
        prev_smaller_element(heights,prev_ans);
        reverse(next_ans.begin(),next_ans.end());
        for(int i=0;i<next_ans.size();i++) {
            if(next_ans[i]== -1) {
                next_ans[i]= next_ans.size();
            }
        }
        int max_ans=INT_MIN;
        for(int i=0;i<next_ans.size();i++) {
            int widght = next_ans[i] - prev_ans[i]-1;
            int height = heights[i];
            int current_ans = widght*height;
            max_ans = max(max_ans , current_ans);
        }
        return max_ans;
    }
};