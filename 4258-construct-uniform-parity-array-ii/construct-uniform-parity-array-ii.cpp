class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallest=nums1[0];
        for(int i=0;i<nums1.size();i++){
            smallest=min(smallest,nums1[i]);
        }
        if(smallest%2!=0){
            return true;
        }
        else{
            for(int i=0;i<nums1.size();i++){
                if(nums1[i]%2!=0){
                    return false;
                }
            }
            return true;
        }
    }
};