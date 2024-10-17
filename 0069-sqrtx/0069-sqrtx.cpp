class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
        {
            return x;
        }
        for(int i = 0 ; i<=x/2 ; i++)
        {
            long long m = static_cast<long long>(i)*i;
            if(m == x)
            {
                return i;
            }
            else if(m>x)
            {
                return i-1;
            }
        }
        return x/2;
    }
};