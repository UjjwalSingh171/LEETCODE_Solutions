class Solution {
public:
    vector<int> check(vector<int> nums , int n , int mid)
    {
        vector<int> res(2,0);
        int low = mid ;
        int high = mid ;
        while(low-1>=0 and nums[low-1]==nums[low]) low--;
        while(high+1<n and nums[high]==nums[high+1]) high++;
        res[0]=low;
        res[1]=high;
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0 ;
        int right = n-1 ;
        int mid ;
        while(left<=right)
        {
            mid = left + (right-left)/2 ;
            if(nums[mid]==target)
            {
                return check(nums,n,mid);
            }
            else if(nums[mid]>target) right = mid-1 ;
            else left = mid+1 ;
        }
        return {-1,-1} ;
    }
};