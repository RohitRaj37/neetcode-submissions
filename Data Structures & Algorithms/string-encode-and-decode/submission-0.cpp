class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";
        for (string &str : strs) {
            string len = to_string(str.size());
            len = string(4 - len.size(), '0') + len;
            ans += len;
            ans += str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int len = stoi(s.substr(i, 4));
            i += 4;
            res.push_back(s.substr(i, len));
            i += len;
        }
        return res;
    }
};