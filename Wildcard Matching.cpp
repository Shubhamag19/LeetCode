class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>> table(s.size()+1, vector<bool>(p.size()+1));
        table[0][0] = true;
        for(int i=1; i<table[0].size(); i++){
            if(p[i-1]=='*')
                table[0][i] = table[0][i-1];
        }
        for(int i=1; i<table.size(); i++){
            for(int j=1; j<table[0].size(); j++){
                if(s[i-1]==p[j-1] || p[j-1]=='?')
                    table[i][j] = table[i-1][j-1];
                else if(p[j-1]=='*'){
                    table[i][j] = table[i-1][j-1] || table[i-1][j] || table[i][j-1];
                }
            }
        }
        return table[s.size()][p.size()];
    }
};
