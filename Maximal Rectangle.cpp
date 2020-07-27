class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        stack<int> st;
        int ans = 0;
        height.push_back(0);
        int i = 0;
        while(i<height.size()){
            if(st.empty() || height[i]>=height[st.top()]) st.push(i++);
            else{
                int temp = height[st.top()];
                st.pop();
                ans = max(ans, temp*(st.empty()?i:i-1-st.top()));
            }
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int res = 0;
        vector<int> heights(matrix[0].size(), 0);
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]!='0') ++heights[j];
                else heights[j] = 0;
            }
            res = max(res, largestRectangleArea(heights));
        }
        return res;
    }
};
