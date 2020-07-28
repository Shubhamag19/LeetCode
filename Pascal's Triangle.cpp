class Solution {
public:
    vector<vector<int>> generate(int A) {
        vector<vector<int>> sol(A);
        for (int line = 0; line < A; line++){
            int C = 1; 
            sol[line] = vector<int> (line+1);
            sol[line][0] = C;
            for (int i = 1; i <= line; i++) 
            { 
                C = C * (line - i +1) / i; 
                sol[line][i] = C;
            } 
        }
        return sol;
    }
};
