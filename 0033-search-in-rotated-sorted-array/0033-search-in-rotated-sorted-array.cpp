class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
            else if(i==nums.size()-1)
            {
                return -1;
            }
        }
        return -1;
    }
};