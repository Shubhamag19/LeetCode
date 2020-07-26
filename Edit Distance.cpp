class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size(), pre;
        vector<int> current(n+1, 0);
        for(int j=1; j<=n; j++){
            current[j] = j;
        }
        for(int i=1; i<=m; i++){
            pre = current[0];
            current[0] = i;
            for(int j=1; j<=n; j++) {
                int temp = current[j];
                if(word1[i-1] == word2[j-1])
                    current[j] = pre;
                else
                    current[j] = min(pre, min(current[j - 1], current[j])) + 1;
                pre = temp;
            }
        }
        return current[n];
    }
};
