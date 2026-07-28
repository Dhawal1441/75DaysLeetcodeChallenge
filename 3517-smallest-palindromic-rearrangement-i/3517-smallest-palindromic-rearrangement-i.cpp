class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char, int> count;
        string firstHalf = "";
        string middle = "";
        for (char c : s) {
            count[c]++;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            if (count[c] > 0) {
                if (count[c] % 2 != 0) {
                    middle = c;
                }
                firstHalf.append(count[c] / 2, c);
            }
        }
        string second = firstHalf;
        reverse(second.begin(), second.end());
        return firstHalf + middle + second;
    }
};