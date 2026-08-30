class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        int imini;
        int imaxi;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini){
                imini=i;
            }
            if(nums[i]==maxi){
                imaxi=i;
            }
        }
        int left=min(imini,imaxi);
        int right=max(imini,imaxi);
        int o1=right+1;
        int o2=nums.size()-left;
        int o3=(left+1)+(nums.size()-right);
        return min({o1,o2,o3});
    }
};