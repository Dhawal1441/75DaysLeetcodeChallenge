class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int>mapp;
        for(int i = 0;i<n;i++){
            int ans = target-nums[i];
            if(mapp.find(ans) != mapp.end()){
                return{mapp[ans],i};
            }
            mapp[nums[i]] = i;
        }

        return{-1,-1};
    }
};
