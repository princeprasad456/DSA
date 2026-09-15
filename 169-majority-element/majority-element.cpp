class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int num;
        for(int i=0;i<n;i++){
            if(count==0){
                count++;
                num=nums[i];
            }
            else if(nums[i]==num){
                count++;
            }
            else{
                count--;
            }
        }
        return num;
    }
};