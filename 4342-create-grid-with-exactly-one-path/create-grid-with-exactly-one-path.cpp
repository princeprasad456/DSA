class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string add="";
        string first="";
        for(int i=0;i<n;i++){
            add=add+"#";
            first=first+".";
        }
        for(int i=0;i<m;i++){
            ans.push_back(add);
        }
        ans[0]=first;
        for(int i=1;i<m;i++){
            ans[i][n-1]='.';
        }
        return ans;
    }
};