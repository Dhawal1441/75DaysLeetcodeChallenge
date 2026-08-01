class Solution {
public:
    int solve(vector<int>& nums, int i, int j) {
        // Base Case: jab ek hi element bacha ho
        if (i == j) return nums[i];

        // Option 1: Pick start element
        int pickLeft = nums[i] - solve(nums, i + 1, j);

        // Option 2: Pick end element
        int pickRight = nums[j] - solve(nums, i, j - 1);

        // Best outcome choose karo
        return max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1) >= 0;
    }
};