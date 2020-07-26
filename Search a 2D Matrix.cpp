class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m*n-1;
        while(l<=r){
            int half = (l+r)/2;
            if(matrix[half/n][half%n]==target) return true;
            else if(matrix[half/n][half%n]>target) r = half-1;
            else l = half+1;
        }
        return false;
    }
};
