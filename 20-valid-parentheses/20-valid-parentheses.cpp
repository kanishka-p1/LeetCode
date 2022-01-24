class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 0 || s.length() == 1){
            return false;
        }
        
        stack<char> st;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(st.empty()){
                    return false;
                }
                
                char top = st.top();
                st.pop();
                
                if((top == '(' && s[i] != ')') || (top == '{' && s[i] != '}') || (top == '[' && s[i] != ']')){
                    return false;
                }
            }
        }
        return st.empty();
    }
};