class Solution {
public:
    int reverse(int x)
    {
        long long X = x ;
        long long y = 0 ;
        while(X>0)
        {
            y *= 10 ;
            y += X%10 ;
            X/=10;
        }
        return (int)y;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(reverse(x)==x) return true;
        else return false;
    }
};