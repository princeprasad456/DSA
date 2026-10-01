class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        map<string,vector<string>> mpp;
        for(int i=0;i<strs.size();i++){
            string copy=strs[i];
            sort(copy.begin(),copy.end());
            mpp[copy].push_back(strs[i]);
        }
        for(auto& pair: mpp){
            answer.push_back(pair.second); 
        }
        return answer;
    }
};