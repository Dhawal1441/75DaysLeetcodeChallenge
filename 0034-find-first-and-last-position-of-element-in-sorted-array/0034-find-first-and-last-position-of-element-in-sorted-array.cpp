class Solution {
public:
    int findFirst(vector<int>& nums, int target){
        int first = -1;
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                first = mid;
                j = mid-1;
            }
            else if(nums[mid] > target){
                j = mid-1;
            }
            else i = mid+1;
        }
        return first;
    }
    int findLast(vector<int>& nums, int target){
        int last = -1;
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                last = mid;
                i = mid+1;
            }
            else if(nums[mid] > target){
                j = mid-1;
            }
            else i = mid+1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1,-1};
        return {findFirst(nums,target),findLast(nums,target)};
    }
};