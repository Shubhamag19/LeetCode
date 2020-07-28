class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int res;
        vector<int> temp;
        for(int i=0; i<triangle[triangle.size()-1].size(); i++){
            temp.push_back(triangle[triangle.size()-1][i]);
        }
        for(int i=triangle.size()-2; i>=0; i--){
            for(int j=0; j<triangle[i].size(); j++){
                temp[j] = min(temp[j], temp[j+1]) + triangle[i][j];
            }
        }
        return temp[0];
    }
};
