class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        ans.push_back(1);
        for(int i = 1;i<=rowIndex;i++){
            long long val = (1LL * ans.back() * (rowIndex - i + 1))/i;
            ans.push_back(val);
        }
        return ans;
    }
};