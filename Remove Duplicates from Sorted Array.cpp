class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int minval = INT32_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>minval){
                minval = nums[i];
                nums[count] = minval;
                count++;
            }
        }
        return count;
    }
};
