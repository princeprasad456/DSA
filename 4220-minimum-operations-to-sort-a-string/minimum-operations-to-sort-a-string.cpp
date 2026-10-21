#include<string>

class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        bool isSorted=true;
        for(int i=1;i<n;i++){
            if(s[i]<s[i-1]){
                isSorted=false;
                break;
            }
        }
        if(isSorted==true){
            return 0;
        }
        if(n==2){
            return -1;
        }
        char mini=*std::min_element(s.begin(),s.end());
        char maxi=*std::max_element(s.begin(),s.end());
        if(s[0]==mini || s[n-1]==maxi){
            return 1;
        }
        for(int i=1;i<n-1;i++){
            if(s[i]==mini || s[i]==maxi){
                return 2;
            }
        }
        return 3;
    }
};