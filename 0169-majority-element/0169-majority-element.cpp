class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = n/2;
        unordered_map<int,int> mp;
        for(int i = 0 ; i<n ; i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                mp[nums[i]]++;
            }
            else
            {
                mp[nums[i]]=1;
            }
        }
        int majelement = -1;
        for(auto it = mp.begin() ; it!= mp.end() ; ++it)
        {
            if(it->second > maj)
            {
                majelement = it->first;
            }
        }
        return majelement;
    }
};