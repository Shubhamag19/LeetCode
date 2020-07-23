class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==0) return 1;
        sort(nums.begin(), nums.end());
        if(nums[nums.size()-1]<1) return 1;
        int i = 0;
        while(nums[i]<=0) i++;
        int value = 1;
        for(int j=i; j<nums.size(); j++){
            if(value>1 && nums[j]==nums[j-1]) continue;
            else if(nums[j]!=value) return value;
            else value++;
        }
        return value;
    }
};
