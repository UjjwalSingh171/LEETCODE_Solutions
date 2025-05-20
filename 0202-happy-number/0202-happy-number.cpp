class Solution {
public:

    unordered_set<int> visited;

    vector<int> countdigits(int n)
    {
        vector<int> digits;
        while(n>0)
        {
            digits.push_back(n%10);
            n/=10;
        }
        return digits;
    }

    bool square( int n )
    {
        if(n==1) return true;
        if(visited.find(n) != visited.end()) return false ;
        visited.insert(n);
        
        vector<int> digits = countdigits(n);
        int sum = 0 ;
        for(int i : digits)
        {
            sum += i*i;
        }

        return square(sum);
    }

    bool isHappy(int n) {
        return square(n);
    }
};