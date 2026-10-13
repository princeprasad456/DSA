class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]);
        }
        long long int sum=0;
        int i=n-1;
        sort(nums.begin(),nums.end());
        for(i;i>=n/2;i--){
            sum=sum+nums[i]*nums[i];
        }
        for(i;i>=0;i--){
            sum=sum-nums[i]*nums[i];
        }
        return sum; 
    }
};