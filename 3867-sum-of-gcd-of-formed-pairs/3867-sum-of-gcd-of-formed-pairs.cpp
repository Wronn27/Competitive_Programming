class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size(),maxi=nums[0];
        vector<int> pregcd(n,0);

        pregcd[0]=gcd(nums[0],maxi);

        for(int i=1;i<n;i++){
            maxi=max(maxi,nums[i]);
            pregcd[i]=gcd(maxi,nums[i]);
        }

        sort(pregcd.begin(),pregcd.end());
        int i=0,j=n-1;
        long long sum=0;
        while(i<j){
            sum+=gcd(pregcd[i],pregcd[j])+0LL;
            i++;
            j--;
        }
        return sum;
    }
};