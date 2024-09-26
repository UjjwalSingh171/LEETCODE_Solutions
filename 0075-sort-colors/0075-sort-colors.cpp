class Solution {
public:
    void sortColors(vector<int>& nums) {

        int red=0,white=0,blue=0;

        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i]==0)
            {
                red++;
            }
            else if(nums[i]==1)
            {
                white++;
            }
            else
            {
                blue++;
            }
        }

        int i = 0;

        while(i<nums.size())
        {
            if(red>i)
            {
                nums[i]=0;
            }
            else if(red<=i && (white+red)>i)
            {
                nums[i]=1;
            }
            else
            {
                nums[i]=2;
            }
            i++;
        }
    }
};