class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res = nums ;
        for(int i = 0 ,  j = 0 ,  k = 1 ; i<n ; i++)
        {
            if(res[i]>=0)
            {
                nums[j] = res[i];
                j+=2 ;
            }
            else
            {
                nums[k] = res[i];
                k+=2;
            }
        }
        return nums;
    }
};