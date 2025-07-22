class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<3) return 0 ;

        vector<int> right(n,0);
        for(int i = 1 ; i<n ; i++)
        {
            right[i]=max(right[i-1],height[i-1]);
        }

        vector<int> left(n,0);
        for(int i = n-2 ; i>=0 ; i--)
        {
            left[i]=max(left[i+1],height[i+1]);
        }

        int res = 0;
        for(int i = 0 ; i<n ; i++)
        {
            int water = min(left[i],right[i])-height[i];
            if(water>0)
            res += water;
        }

        return res;
    }
};