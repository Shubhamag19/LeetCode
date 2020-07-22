class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> r;
        int count = 0;
        int po = 0;
        if(nums.empty())
            return {};
        for(int t=0; t<nums.size(); t++){
            if(nums[t]==0){
                count++;
            }
            if(count==3){
                r.push_back({0,0,0});
                break;
            }
        }
        for(int t=0; t<nums.size(); t++){
            if(nums[t]>0){
                po++;
            }
            if(po==3){
                break;
            }
        }
        if(po>=1){
            for(int i=0; nums[i]<0; i++){
            if(i!=0 && nums[i]==nums[i-1])
                continue;
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    r.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                    k--;
                else
                    j++;
            }
        }
        }  

        return r;        
        }
};
