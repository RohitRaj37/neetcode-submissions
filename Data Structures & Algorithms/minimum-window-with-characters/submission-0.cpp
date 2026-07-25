class Solution {
   public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        map<char, int> tt;
        for (int i = 0; i < m; i++) {
            tt[t[i]]++;
        }
        map<char, int> ss;
        int cnt = 0;
        int need = tt.size();
        int i = 0;
        int start = -1;
        int len = INT_MAX;
        for (int j = 0; j < n; j++) {
            ss[s[j]]++;
            if (tt.count(s[j]) && ss[s[j]] == tt[s[j]]) cnt++;
            while (cnt == need) {
                if (j - i + 1 < len) {
                    len = j - i + 1;
                    start = i;
                }
                ss[s[i]]--;
                if (tt.count(s[i]) && ss[s[i]] < tt[s[i]]) cnt--;
                i++;
            }
        }
        if (start == -1) return "";
        return s.substr(start, len);
    }
};