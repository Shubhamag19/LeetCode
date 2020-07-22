class Solution {
public:
    int min(int a,int b){
        return a<b?a:b;
    }
    int max(int a,int b){
        return a>b?a:b;
    }
    int maxArea(vector<int>& height) {
        int len = height.size();
        int l = 0;
        int r = len-1;
        int area, maxr=0;

        while(l<r){
            area = min(height[l], height[r])*(r-l);
            maxr = max(area, maxr);
            if(height[r]>height[l]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxr;
    }
};
