class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int pairs=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                pairs++;
            }
        }
        if(s[n-1]==s[0]){
            pairs++;
        }
        if(k==pairs){
            return n-pairs;
        }
        if(k==pairs-1){
            return pairs;
        }
        return 0;
    }
};