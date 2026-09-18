class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=1;
        int n=nums.size();
        vector<int> res(n,0);
        for(int k=0;k<n;k++){
            if(nums[k]<0){
                res[j]=nums[k];
                j=j+2;
            }
            else{
                res[i]=nums[k];
                i=i+2;
            }
        }
        return res;
    }
};