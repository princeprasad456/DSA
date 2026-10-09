class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int cor_sum=(nums.size()*(nums.size()+1))/2;
        int giv_sum=0;
        for(int i=0;i<nums.size();i++){
            giv_sum=giv_sum+nums[i];
        }
        return cor_sum-giv_sum;
    }
};