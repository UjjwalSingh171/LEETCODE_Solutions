class Solution {
public:
    int digsum( int num )
    {
        int sum = 0 ;
        while(num>0)
        {
            sum += num%10 ;
            num /= 10 ; 
        }
        return sum;
    }
    int addDigits(int num) {
        while(num>=10)
        {
            num = digsum(num);
        }
        return num;
    }
};