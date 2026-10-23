class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        int mid = (lo + hi)/2;
        while(lo <= hi){
            if(nums[mid] == target){
                return mid;
            } else if(nums[mid] > target){
                hi = mid-1;
            } else{
                lo = mid+1;
            }
            mid = (lo + hi)/2;
        }
        return -1;
    }
};
