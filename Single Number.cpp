class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int output = nums[0];
        for(int i=1; i<nums.size(); i++){
            output ^= nums[i];
        }
        return output;
    }
};
