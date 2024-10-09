class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int elmt = nums[0];
        for(int i = 1 ; i<n ; i++)
        {
            int cur = nums[i];
            if(elmt == cur)
            {
                count++;
            }
            else if(elmt != cur && count>0)
            {
                count--;
            }
            else{
                elmt = cur ;
                count++;
            }
        }
        return elmt;
    }
};