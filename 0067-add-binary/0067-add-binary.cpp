class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0 ;

        while(i>=0 or j>=0 or carry>0)
        {
            int ai = (i>=0)? a[i]-'0' : 0 ;
            int bj = (j>=0)? b[j]-'0' : 0 ;

            int sum = ai + bj + carry ;
            carry = sum/2 ;
            char ch = (sum%2) + '0';
            s.push_back(ch) ;
            i--;
            j--;
        }
        reverse(s.begin(), s.end());
        return s ;
    }
};