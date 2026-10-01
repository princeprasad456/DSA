class Solution {
public:
    bool isValid(string s) {
        map<char,char> bracket={{')','('},{'}','{'},{']','['}};
        stack<char> stack;
        for(char it:s){
            if(bracket.count(it)){
                char top;
                if(!stack.empty()){
                    top=stack.top();
                }else{
                    top='#';
                }
                if(!stack.empty()){
                    stack.pop();
                }
                if(bracket[it]!=top){
                    return false;
                }
            }
            else{
                stack.push(it);
            }
        }
        return stack.empty();
    }
};