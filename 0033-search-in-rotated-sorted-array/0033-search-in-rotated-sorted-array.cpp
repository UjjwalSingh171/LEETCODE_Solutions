class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0) return -1;
        if(n==1){
            if(nums[0]==target) return 0;
            else return -1 ;
        }
        // for pivot
        int p = 0 ;
        for(int i = 1 ; i<n ; i++){
            if(nums[i-1]>nums[i]) p = i ;
        }
        // binary search
        if(nums[p]<=target and target<=nums[n-1]){
            int left = p;
            int right = n-1;
            while(left<=right){
                int mid = left + (right-left)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) right = mid-1;
                else left = mid+1;
            }
        }
        else{
            int left = 0;
            int right = p-1;
            while(left<=right){
                int mid = left + (right-left)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) right = mid-1;
                else left = mid+1;
            }
        }
        return -1;
    }
};