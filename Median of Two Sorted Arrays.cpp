class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num(nums1.size()+nums2.size());
        int i=0, j=0, k=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                num[k] = nums1[i];
                i++;
                k++;
            }
            else{
                num[k] = nums2[j];
                j++;
                k++;
            }
        }
        if(i==nums1.size()){
            while(j<nums2.size()){
                num[k] = nums2[j];
                j++;
                k++;
            }
        }
        else if(j==nums2.size()){
            while(i<nums1.size()){
                num[k] = nums1[i];
                i++;
                k++;
            }
        }
        double median;
        if(k%2!=0){
            median = num[((k+1)/2)-1];
        }
        else{
            median = (double(num[k/2])+num[(k/2)-1])/2;
        }
        return median;
    }
};
