class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left = 0 ; 
        int right = n-1 ;
        int mid;
        while(left<right){
            mid = left+(right-left)/2;
            while(mid%2==1) mid--;
            if(nums[mid]==nums[mid+1]) left=mid+2;
            else right=mid;
        }
        return nums[left];
    }
};