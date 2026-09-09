class Solution {
public:
    string maskPII(string s) {
        int at = s.find('@');
        if (at != string::npos) {
            for (char &c : s)
                c = tolower(c);
            return s.substr(0, 1) + "*****" + s.substr(at - 1);
        }
        // Phone
        string num;
        for (char c : s)
            if (isdigit(c))
                num += c;
        int n = num.size();
        string ans = "***-***-" + num.substr(n - 4);
        if (n > 10)
            ans = "+" + string(n - 10, '*') + "-" + ans;
        return ans;
    }
};