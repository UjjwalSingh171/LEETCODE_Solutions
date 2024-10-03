class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  // Step 1: Sort the array
    
    long long sum = 0;  // This will store the sum of the current window
    int left = 0, maxFreq = 0;
    
    // Step 2: Sliding window
    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];  // Add the current element to the sum
        
        // Step 3: While the cost to make all elements equal to nums[right] exceeds k, shrink the window
        while ((long long)(right - left + 1) * nums[right] - sum > k) {
            sum -= nums[left];  // Remove the leftmost element from the sum
            left++;  // Move the left pointer to shrink the window
        }
        
        // Step 4: Update the maximum frequency
        maxFreq = max(maxFreq, right - left + 1);
    }
    
    return maxFreq;
    }
};