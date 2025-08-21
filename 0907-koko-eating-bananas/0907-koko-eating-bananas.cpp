class Solution {
public:
    long long counter(vector<int>& piles,int mid){
        long long hours = 0 ;
        for(int bananas : piles){
            hours+=(bananas+mid-1)/mid;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long hours = counter(piles,mid);
            if(hours<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};