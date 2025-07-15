class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1,0);
        vector<int> res(2,0);
        for(int i = 0 ; i < n ; i++)
        {
            freq[nums[i]]++;
        }
        for(int i = 1 ; i <= n ; i++)
        {
            if(freq[i]==0) res[1]=i;
            else if(freq[i]==2) res[0]=i;
        }
        return res;
    }
};