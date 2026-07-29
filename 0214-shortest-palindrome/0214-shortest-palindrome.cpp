class Solution {
public:
    string shortestPalindrome(string s) {
        if (s.empty()) return s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        string temp = s + "#" + rev;
        int n = temp.size();
        vector<int> lps(n, 0);

        for (int i = 1; i < n; i++) {
            int j = lps[i - 1];
            while (j > 0 && temp[i] != temp[j]) {
                j = lps[j - 1];
            }
            if (temp[i] == temp[j]) {
                j++;
            }
            lps[i] = j;
        }

        int longestPalindromePrefixLen = lps.back();
        string remainingSuffix = s.substr(longestPalindromePrefixLen);
        reverse(remainingSuffix.begin(), remainingSuffix.end());

        return remainingSuffix + s;
    }
};