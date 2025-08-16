class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        int left = 0 ;
        int right = n-1 ;
        int mid;
        while(left<right){
            mid=left+(right-left)/2;
            if(nums[mid]<nums[mid+1]) left=mid+1;
            else right=mid;
        }
        return left;
    }
};