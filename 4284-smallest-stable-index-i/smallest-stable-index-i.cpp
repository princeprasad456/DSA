class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int preffix=INT_MIN;
            int suffix=INT_MAX;
            for(int j=0;j<=i;j++){
                preffix=max(preffix,nums[j]);
            }
            for(int j=i;j<n;j++){
                suffix=min(suffix,nums[j]);
            }
            if(preffix-suffix<=k){
                return i;
            }
        }
        return -1;
    }
};