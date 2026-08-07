class Solution {
   public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
            else{
                if(st.empty()==true)return false;
                char x = st.top() ;
                if(x=='(' && s[i]==')')st.pop();
                else if(x=='{' && s[i]=='}')st.pop();
                else if(x=='[' && s[i]==']')st.pop();
                else st.push(s[i]);
            } 
        }
        if(st.empty()==true)return true;
        return false;
    }
};
