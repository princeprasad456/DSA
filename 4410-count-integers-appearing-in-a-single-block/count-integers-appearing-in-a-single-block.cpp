class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            if(v.empty() || v.back()!=x){
                v.push_back(x);
            }
        }
        vector<int> hash(101,0);
        for(int i=0;i<v.size();i++){
            hash[v[i]]++;
        }
        int count=0;
        for (int i=0;i<hash.size();i++){
            if(hash[i]==1){
                count++;
            }
        }
        return count;
    }
};