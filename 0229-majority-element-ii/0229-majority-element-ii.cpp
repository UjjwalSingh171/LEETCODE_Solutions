class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int k = n/3;
        vector<int> ans;
        for(int i = 0 ; i<n ; i++)
        {
            mp[nums[i]]++;
        }
        for(const auto& pair : mp)
        {
            if(pair.second>k)
            {
                ans.push_back(pair.first);
            }
        }
        return ans;
    }    
};