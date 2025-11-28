class Solution {
    public int maxProduct(int[] nums) {
        long maxp = nums[0];
        long minp = nums[0];
        long res = nums[0];

        for(int i = 1 ; i<nums.length ; i++){
            int x = nums[i];

            if(x<0){
                long temp = maxp;
                maxp=minp;
                minp=temp;
            }

            maxp = Math.max(x,maxp*x);
            minp = Math.min(x,minp*x);

            res = Math.max(maxp,res);
        }
        return (int)res;
    }
}