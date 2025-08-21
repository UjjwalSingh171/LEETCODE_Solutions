class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k>n) return -1;

        int low = *min_element(bloomDay.begin(),bloomDay.end()) ;
        int high = *max_element(bloomDay.begin(),bloomDay.end()) ;
        int ans=-1;

        while(low<=high){
            int mid = low+(high-low)/2;
            
            int bundle = 0 , flowers = 0 ;
            for(int i = 0 ; i<n ; i++){
                if(bloomDay[i]<=mid){
                    flowers++;
                    if(flowers==k){
                        bundle++;
                        flowers=0;
                    }
                }
                else{
                    flowers=0;
                }
            }
            if(bundle>=m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans ;
    }
};