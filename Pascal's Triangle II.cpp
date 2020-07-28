class Solution {
public:
    vector<int> getRow(int A) {
        A += 1;
        vector<vector<int>> sol(A);
        vector<int> final(A);
        for (int line = 0; line < A; line++){
            long C = 1; 
            sol[line] = vector<int> (line+1);
            sol[line][0] = C;
            for (int i = 1; i <= line; i++) 
            { 
                C = C * (line - i +1) / i; 
                sol[line][i] = C;
            } 
        }
        for(int j=0; j<A; j++){
            final[j] = sol[A-1][j];
        }
        return final;
    }
};
