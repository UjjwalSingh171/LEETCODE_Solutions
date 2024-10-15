class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int count = 0 ;
        int csum = 0;
        for(int i = 0 ; i<n ; i++)
        {
            csum += nums[i];
            int remove = csum - k ;
            if(mp.find(remove)!=mp.end())
            {
                count += mp[remove];
            }
            mp[csum]++;
        }
        return count;
    }
};