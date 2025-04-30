class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n+1,0);

        for(int num : nums)
        {
            count[num]++;
        }

        int dup = -1;
        int mis = -1;
        for(int i = 1 ; i<=n ; i++)
        {
            if(count[i]==2) dup=i;
            if(count[i]==0) mis=i;
        }

        return {dup,mis};
    }
};