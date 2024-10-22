class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for (int x = 0; x < n - 3; x++) {
            if (x > 0 && nums[x] == nums[x - 1])
                continue;
            for (int i = x + 1; i < n - 2; i++) {
                if (i > x + 1 && nums[i] == nums[i - 1])
                    continue;
                long long sum;
                int j = i + 1;
                int k = n - 1;
                while (j < k) {
                    sum = (long long)nums[x] + (long long)nums[i] + (long long)nums[j] + (long long)nums[k];
                    if (sum == target) {
                        ans.push_back({nums[x], nums[i], nums[j], nums[k]});

                        while (j < k && nums[j] == nums[j + 1])
                            j++;
                        while (j < k && nums[k] == nums[k - 1])
                            k--;

                        j++;
                        k--;
                    } else if (sum > target) {
                        k--;
                    } else {
                        j++;
                    }
                }
            }
        }

        return ans;
    }
};