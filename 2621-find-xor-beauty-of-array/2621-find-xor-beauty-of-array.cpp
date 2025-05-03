class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int n = nums.size();
        int result = 0 ;
        for(int i = 0 ; i<n ; i++ )
        {
            result ^= nums[i];
        }
        return result;
    }
};