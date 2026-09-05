class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int s = nums.size();
        if(s == 0) return -1;
        vector<int>SuffixMin(s);
        SuffixMin[s-1] = nums[s-1];
        for(int i = s-2;i>=0;i--){
            SuffixMin[i] = min(nums[i],SuffixMin[i+1]);
        }
        int PreffixMax = nums[0];
        for(int i = 0;i<s;i++){
            PreffixMax = max(PreffixMax,nums[i]);
            int score = PreffixMax - SuffixMin[i];
            if(score <= k) return i;
        }
        return -1;
    }
};