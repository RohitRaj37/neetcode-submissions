class Solution {
   public:
    bool isPalindrome(string s) {
        string x = "";
        string y = "";
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= '0' && s[i] <= '9')){
                    if(s[i]>='a' && s[i]<='z'){
                        x.push_back(s[i]-32);
                        y.push_back(s[i]-32);
                    }else{
                        x.push_back(s[i]);
                        y.push_back(s[i]);
                    }
                }
        }
        reverse(x.begin(),x.end());
        return x==y;
    }
};
