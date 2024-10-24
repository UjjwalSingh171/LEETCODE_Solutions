class Solution 
{
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        int n = arr.size();
        vector<int> allxor(n);
        vector<int> res;
        allxor[0] = arr[0];
        for (int i = 1; i < n; i++) {
            allxor[i] = allxor[i - 1] ^ arr[i];
        }
        for (auto& query : queries) {
            int left = query[0];
            int right = query[1];
            if (left == 0) {
                res.push_back(allxor[right]);
            } else {
                res.push_back(allxor[right] ^ allxor[left - 1]);
            }
        }
        return res;
    }
};