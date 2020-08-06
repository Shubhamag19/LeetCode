class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mm;
        for(int i=0; i<nums.size(); i++){
            mm[nums[i]]++;
        }
        int n = nums.size()/2;
        for(int i=0; i<nums.size(); i++){
            if(mm[nums[i]]>n) return nums[i];
        }
        return -1;
    }
};
