class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n = numbers.size();
       int start = 0 ; 
       int end = n-1; 

       for(int i = 0 ; i<n ; i++)
       {
        if((numbers[start]+numbers[end])==target)
        {
            return {start+1,end+1};
        }
        else if( (numbers[start]+numbers[end])<target )
        {
            start++;
        }
        else
        {
            end--;
        }
       }
       return {-1,-1};
    }
};