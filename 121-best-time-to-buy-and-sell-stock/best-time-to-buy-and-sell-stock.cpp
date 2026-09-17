class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        int i=1;
        int j=0;
        int maxi=0;
        while(i!=prices.size()){
            if(prices[i]>prices[j]){
                maxi=max(maxi,prices[i]-prices[j]);
                i++;
            }
            else{
                j=i;
                i++;
            }
        }
        return maxi;
    }
};