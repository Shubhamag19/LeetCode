class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        if(target<nums[start]) return 0;
        if(target>nums[end]) return nums.size();

        while(start<=end){
            int mid = (start+end)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else end = mid-1;
        }
        return start;
    }
};
