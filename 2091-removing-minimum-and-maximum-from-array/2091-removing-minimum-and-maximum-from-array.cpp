class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int minIdx = 0, maxIdx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIdx]) minIdx = i;
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }

        int L = min(minIdx, maxIdx);
        int R = max(minIdx, maxIdx);

        int bothFront = R + 1;
        int bothBack = n - L;
        int fromBothSides = (L + 1) + (n - R);

        return min({bothFront, bothBack, fromBothSides});
    }
};