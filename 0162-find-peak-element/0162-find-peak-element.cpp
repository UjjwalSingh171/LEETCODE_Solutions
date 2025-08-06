class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If the current mid is less than the next element
            if (nums[mid] < nums[mid + 1]) {
                // You are in an increasing slope, move right
                low = mid + 1;
            } else {
                // You are in a decreasing slope or peak, move left
                high = mid;
            }
        }

        // low == high → peak found
        return low;
    }
};