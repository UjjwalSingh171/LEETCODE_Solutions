class Solution {
public:
    int bintodec(vector<int> comp)
    {
        int n = comp.size();
        long long count = 0;
        long long pow = 1 ;
        for(int i = n-1 ; i>=0 ; i--)
        {
            count+=comp[i]*pow;
            pow *= 2;
        }
        return (int)count;
    }
    vector<int> complement(vector<int> binary)
    {
        int n = binary.size();
        for(int i = 0 ; i<n ; i++)
        {
            binary[i] = 1 - binary[i];
        }
        return binary;
    }
    vector<int> dectobin(int num)
    {
        if(num==0) return {0};
        vector<int> binary ;
        while(num>0)
        {
            binary.push_back(num%2);
            num/=2;
        }
        reverse(binary.begin(),binary.end());
        return binary;
    }
    int findComplement(int num) {
        vector<int> binary = dectobin(num);
        vector<int> comp = complement(binary);
        int res = bintodec(comp);
        return res;
    }
};