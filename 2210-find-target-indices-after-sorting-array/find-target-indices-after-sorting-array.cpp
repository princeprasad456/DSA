class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int lower=0;
        int count=0;
        int last=101;
        for(auto it : mpp){
            if(it.first>target){
                break;
            }
            else{
                count=count+it.second;
                lower=count-it.second;
            }
            last=it.first;
        }
        if(last!=target){
            return {};
        }
        for(int i=lower;i<count;i++){
            ans.push_back(i);
        }
        return ans;
    }
};