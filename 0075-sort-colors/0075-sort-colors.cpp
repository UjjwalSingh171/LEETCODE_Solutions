class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0 , one = 0 , two = nums.size()-1 ;
        while(zero <= one and one <= two)
        {
            if(nums[one]==2)
            {
                swap(nums[one],nums[two]);
                two--;
            }
            else if(nums[one]==0)
            {
                swap(nums[one],nums[zero]);
                zero++;
                one++;
            }
            else
            {
                one++;
            }
        }
    }
};