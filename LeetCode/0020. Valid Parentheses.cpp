class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i : s) {
            if(i == '(' || i == '{' || i == '[') {
                st.push(i);
            }
            else {
                if(st.empty()) return false;
                char ch = st.top();
                st.pop();
                if(i == ')') {
                    if(ch != '(') return false;
                }
                else if(i == '}') {
                    if(ch != '{') return false;
                }
                else if(i == ']') {
                    if(ch != '[') return false;
                }
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
