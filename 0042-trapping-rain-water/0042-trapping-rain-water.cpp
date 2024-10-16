class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size();
        int pg[n];
        pg[0] = -1;
        int max = height[0];
        for(int i = 1 ; i<n ; i++)
        {
            pg[i]=max;
            if(height[i]>max)
            {
                max=height[i];
            }
        }


        int ng[n];
        ng[n-1] = -1;
        max = height[n-1];
        for(int i = n-2 ; i>=0 ; i--)
        {
            ng[i]=max;
            if(height[i]>max)
            {
                max=height[i];
            }
        }

        int mini[n];
        for(int i = 0 ; i<n ; i++)
        {
            mini[i]=min(pg[i],ng[i]);
        }

        int water = 0;
        for(int i = 1 ; i<n-1 ; i++)
        {
            if(mini[i]>height[i])
            {
                water += (mini[i]-height[i]);
            }
        }

        return water;
    }
};