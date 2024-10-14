class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n = nums.size();
        vector <int> p;
        int pos = 0 ;
        vector <int> ne;
        int neg = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            if(nums[i]>0)
            {
                p.push_back(nums[i]);
            }
            else
            {
                ne.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i = 0 ; i<n ; i++)
        {
            if(i%2!=0)
            {
                nums.push_back(ne[neg]);
                neg++;
            }
            else
            {
                nums.push_back(p[pos]);
                pos++;
            }
        }
        return nums;
    }
};