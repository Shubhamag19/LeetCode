class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        for(int i=0; i<pow(2,nums.size()); i++){
            vector<int> sub;
            for(int j=0; j<nums.size(); j++){
                if(i>>j & 1) sub.push_back(nums[j]);
            }
            subs.push_back(sub);
        }
        return subs;
    }
};
