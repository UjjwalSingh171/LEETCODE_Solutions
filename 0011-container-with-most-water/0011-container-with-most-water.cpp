class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 , right = height.size()-1 , maxx = 0 ;
        while(left<right)
        {
            int h = min(height[left],height[right]);
            int w = right-left;
            maxx = max(maxx,(h*w));

            if(height[left]<height[right])
            {
                left++;
            }
            else right--;
        }
        return maxx;
    }
};