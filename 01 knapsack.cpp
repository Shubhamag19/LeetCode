int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>> table (n, vector<int>(1+w, 0));

	for(int i=0; i<n; i++){
		for(int j=1; j<=w; j++){
			if(i>0){
				if(j<weights[i]){
					table[i][j] = table[i-1][j];
				} else {
					table[i][j] = max(values[i]+table[i-1][j-weights[i]], table[i-1][j]);
				}
			} else {
				if(j<weights[i]){
					table[i][j] = 0;
				} else {
					table[i][j] = values[i];
				}
			}
		}
	}
	return table[n-1][w];
}
