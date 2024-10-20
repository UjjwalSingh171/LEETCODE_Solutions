class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> result;
        
        // Sort the input array
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Traverse the array
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Set two pointers
            int left = i + 1;
            int right = n - 1;
            
            // Find two other numbers that sum up to zero with nums[i]
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    // If we found a triplet that sums up to zero
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Move the left pointer to skip duplicates
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Move the right pointer to skip duplicates
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    // Move both pointers inward
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    // If the sum is less than zero, move left to increase the sum
                    left++;
                } 
                else {
                    // If the sum is greater than zero, move right to decrease the sum
                    right--;
                }
            }
        }
        
        return result;
    }
};