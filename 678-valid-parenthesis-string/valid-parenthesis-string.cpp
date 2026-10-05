class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st;
        stack<int> balance;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
                else if(!balance.empty()){
                    balance.pop();
                }
                else{
                    return false;
                }
            }
            else{
                balance.push(i);
            }
        }
        while(!st.empty() && !balance.empty() && st.top() < balance.top()){
            st.pop();
            balance.pop();
        }
        return st.empty(); 
    }
};