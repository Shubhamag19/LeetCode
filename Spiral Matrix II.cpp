class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> r(n);
        for(int t=0; t<n; t++){
            r[t] = vector<int> (n);
        }
        int top=0, left=0, bottom=n-1, right=n-1;
        int dir = 0;
        int value = 1;
        while(top<=bottom && left<=right){
            if(dir==0){
                for(int i=left; i<=right; i++){
                    r[top][i] = value;
                    value++;
                }
                top++;
                dir++;
            }
            else if(dir==1){
                for(int i=top; i<=bottom; i++){
                    r[i][right] = value;
                    value++;
                }
                right--;
                dir++;
            }
            else if(dir==2){
                for(int i=right; i>=left; i--){
                    r[bottom][i] = value;
                    value++;
                }
                bottom--;
                dir++;
            }
            else if(dir==3){
                for(int i=bottom; i>=top; i--){
                    r[i][left] = value;
                    value++;
                }
                left++;
                dir = 0;
            }
        }
        return r;
        
    }
};
