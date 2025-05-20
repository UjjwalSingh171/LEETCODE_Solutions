class Solution {
public:
    int hammingWeight(int n) {
        int x = 1<<30;
        int count = 0 ;
        while(x>0)
        {
            if(n>=x)
            {
                n-=x;
                count++;
            }
            x = x>>1 ;
        }
        return count;
    }
};