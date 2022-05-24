class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='(' or ch=='[' or ch=='{')
            {
                st.push(ch);
                continue;
            }
            if(st.empty())
                return 0;
            else{
                if(ch=='}'){
                    char x=st.top();
                    if(x=='(' or x=='[')
                        return 0;
                    st.pop();
                }
                 if(ch==']'){
                    char x=st.top();
                    if(x=='(' or x=='{')
                        return 0;
                    st.pop();
                }
                 if(ch==')'){
                    char x=st.top();
                    if(x=='[' or x=='{')
                        return 0;
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};