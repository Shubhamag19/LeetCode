class Solution {
public:
    bool isValid(vector<vector<int>> &vec, int row, int col, int n){
        for(int i=0; i!=row; ++i)
            if(vec[i][col]==1) return false;
        for(int i=row-1, j=col-1; i>=0 && j>=0; --i, --j)
            if(vec[i][j]==1) return false;
        for(int i=row-1, j=col+1; i>=0 && j<n; --i, ++j)
            if(vec[i][j]==1) return false;
        return true;
    }

    int solveIt(int n, vector<vector<int>> &vec, int row, vector<int> &len){
        if(row==n){
            len.push_back(1);
        }
        for(int col=0; col<n; ++col){
            if(isValid(vec, row, col, n)){
                vec[row][col] = 1;
                solveIt(n, vec, row+1, len);
                vec[row][col] = 0;
            }
        }
        return len.size();
    }
    int totalNQueens(int n) {
        vector<vector<int>> vec(n, vector<int>(n, 0));
        vector<int> len;
        int answer = solveIt(n, vec, 0, len);
        cout<<answer<<endl;
        return answer;
    }
};
