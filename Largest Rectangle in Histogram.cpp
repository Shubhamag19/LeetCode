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
};
