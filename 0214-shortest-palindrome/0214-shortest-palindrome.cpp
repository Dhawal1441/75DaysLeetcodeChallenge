class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;
        string rev = s;
        reverse(rev.begin(), rev.end());
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (rev[i] == s[j]) {
                j++;
            }
        }
        if(j == n ) return s;
        string suffix = s.substr(j);
        string prefix = suffix;
        reverse(prefix.begin(), prefix.end());
        return prefix + shortestPalindrome(s.substr(0, j)) + suffix;
    }
};