class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v(2*n);
        v.clear();
        for(int i = 0 ; i<n ; i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[n+i]);
        }
        return v;
    }
};