class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int lsum = nums[0];
        if(nums.size()==1) return sum;
        int i = 1;
        while(i<nums.size()){
            if(nums[i]>sum+nums[i])
                sum = nums[i++];
            else sum += nums[i++];
            if(sum>lsum) lsum = sum;
        }
        return lsum;
    }
};
