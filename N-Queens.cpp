class Solution {
    bool isValid(vector<string> &vec, int row, int col, int n){
        for(int i=0; i!=row; ++i)
            if(vec[i][col]=='Q') return false;
        for(int i=row-1, j=col-1; i>=0 && j>=0; --i, --j)
            if(vec[i][j]=='Q') return false;
        for(int i=row-1, j=col+1; i>=0 && j<n; --i, ++j)
            if(vec[i][j]=='Q') return false;
        return true;
    }

    void solveIt(vector<vector<string>> &res, vector<string> &vec, int row, int n){
        if(row==n){
            res.push_back(vec);
            return;
        }
        for(int col=0; col<n; ++col){
            if(isValid(vec, row, col, n)){
                vec[row][col] = 'Q';
                solveIt(res, vec, row+1, n);
                vec[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> vec(n, string(n, '.'));
        solveIt(res, vec, 0, n);
        return res;
    }
};
