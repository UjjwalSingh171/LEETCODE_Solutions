class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        if(x==0)
        {
            return true;
        }
        int y = x;
        vector<int> v;
        while(y>0)
        {
            v.push_back(y%10);
            y/=10;
        }
        for(int i = 0, j = v.size()-1 ; j>i ; i++ ,j--)
        {
            if(v[i]!=v[j])
            {
                return false;
            }
        }

        return true;

    }
};