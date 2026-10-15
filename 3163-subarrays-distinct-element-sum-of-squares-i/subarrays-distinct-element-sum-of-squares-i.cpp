class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                s.insert(nums[j]);
                count=count+(s.size())*(s.size());
            }
            s.clear();
        }
        return count;
    }
};