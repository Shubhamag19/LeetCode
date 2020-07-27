class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> output(nums.size());
        int s = 0, t = nums.size()-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)
                output[s++] = 0;
            else if(nums[i]==2)
                output[t--] = 2;
        }
        while(s<=t)
            output[s++] = 1;
        for(int j=0; j<nums.size(); j++)
            nums[j] = output[j];
    }
};
