class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> output;
        int s = nums.size();
        if(k>s) k = k-s;
        if(k<s){
            for(int i=0; i<s; i++){
                if(s-k+i<s) output.push_back(nums[s-k+i]);
                else output.push_back(nums[i-k]);
            }
            for(int k=0; k<s; k++)
                nums[k] = output[k];
        }
    }
};
