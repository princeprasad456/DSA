class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        int count2=0;
        int ele1,ele2;
        for(int i=0;i<n;i++){
            if(count1==0 && ele2!=nums[i]){
                ele1=nums[i];
                count1=1;
            }
            else if(count2==0 && ele1!=nums[i]){
                ele2=nums[i];
                count2=1;
            }
            else if(nums[i]==ele1){
                count1++;
            }
            else if(nums[i]==ele2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int> v;
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1){
                count1++;
            }
            if(nums[i]==ele2){
                count2++;
            }
        }
        if(count1>n/3){
            v.push_back(ele1);
        }
        if(count2>n/3 && ele2!=ele1){
            v.push_back(ele2);
        }
        return v;
    }
};