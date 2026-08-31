class Solution {
public:
    int func(vector<int> &nums,int low,int high,int target){
        int mid=(low+high)/2;
        if(high<low){
            return -1;
        }
        if(target>nums[high]){
            return -1;
        }
        if(target==nums[mid]){
            return mid;
        }
        if(target<nums[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        return func(nums,low,high,target);
    }

    int search(vector<int>& nums, int target) {
        return func(nums,0,nums.size()-1,target);
    }
};