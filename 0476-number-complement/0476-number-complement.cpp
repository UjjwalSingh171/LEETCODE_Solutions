class Solution {
public:
    int binTodec(string n)
    {
        long long x = 0 ;
        long long pow = 1 ;
        for(int i = n.size()-1 ; i>=0 ; i--)
        {
            int bit = n[i]-'0';
            x += bit*pow ;
            pow *= 2;
        }
        return x;
    }
    string compi(string n)
    {
        string s = "";
        for(char c : n)
        {
            if(c=='0') s.push_back('1');
            else s.push_back('0');
        }
        return s ;
    }
    string decTobin(int n)
    {
        if(n==0) return "0";
        string res = "";
        while(n>0)
        {
            res += char((n%2)+'0');
            n /= 2 ;
        }
        reverse(res.begin(), res.end());
        return res ;
    }
    int findComplement(int num) {
        string n1 = decTobin(num);
        string n2 = compi(n1);
        int n3 = binTodec(n2);
        return n3;
    }
};