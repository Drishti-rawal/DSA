class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        st.push('S');
        if(s == "")
            return true;
        else{
            while(s[i]!='\0')
            {
                if(s[i]=='(' ||  s[i] == '{' || s[i]=='[')
                    st.push(s[i]);
                
                else{
                    char p=st.top();
                    if((s[i]==')'&& p=='(') || 
                       (s[i]=='}'&& p=='{') || 
                       (s[i]==']'&& p=='['))
                    {
                        st.pop();
                    }
                    else
                        return false;
                }
            i++;
        }
       
        if(st.top()=='S')
            return true;
        else
            return false;
    }
    }
};