class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            set<int> s;
            for(int j=i;j<n;j++){
                s.insert(nums[j]);
                count=count+(s.size())*(s.size());
            }
            s={};
        }
        return count;
    }
};