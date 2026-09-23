class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int sum=0;
        for(int val:nums){
            sum+=val;
        }
        int target=sum-x;
        if(target<0){
            return -1;
        }else if(target==0){
            return n;
        }
        int maxLen=-1;
        int i=0;
        int cur=0;
        for(int j=0;j<n;j++){
            cur+=nums[j];
            while(cur>target&&i<=j){
                cur-=nums[i];
                i++;
            }
            if(cur==target){
                int len=j-i+1;
                if(len>maxLen){
                    maxLen=len;
                }
            }
        }
        if(maxLen==-1){
            return -1;
        }
        else{
            return n-maxLen;
        }
    }
};