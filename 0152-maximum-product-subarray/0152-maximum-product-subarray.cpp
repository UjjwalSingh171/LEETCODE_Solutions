class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for (int i = 1; i < n; ++i) {
        // If current number is negative, swap max and min
        if (nums[i] < 0) {
            swap(maxProd, minProd);
        }
        maxProd = max(nums[i], maxProd * nums[i]);
        minProd = min(nums[i], minProd * nums[i]);

        result = max(result, maxProd);
    }
    return result;
    }
};