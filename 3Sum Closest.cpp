class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sum=INT32_MAX, curr;
        if(target<0){
            sum += target;
        }
        for(int i=0; i<=nums.size()-3; i++){
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                curr = nums[i]+nums[j]+nums[k];
                if(abs(target-curr)<abs(target-sum)){
                    sum = curr;
                }
                if(curr>target){
                    k--;
                }
                else if(curr<target){
                    j++;
                }
                else{
                    break;
                }
            }
        }
        return sum;        
    }
};
