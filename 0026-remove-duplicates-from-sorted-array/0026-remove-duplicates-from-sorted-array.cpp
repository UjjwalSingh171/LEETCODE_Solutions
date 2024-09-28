class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int siz = s.size();
        nums.insert(nums.begin(),s.begin(),s.end());
        return siz;
    }
};