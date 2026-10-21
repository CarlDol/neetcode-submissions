class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int m = (l + r) / 2;
            if(nums[m] > nums[r]){
                l = m + 1;
            } else{
                r = m;
            }
        }
        int pivot = l;
        return binarySearch(nums, target, pivot);
    }
    int binarySearch(vector<int>& nums, int target, int pivot){
        if(target >= nums[pivot] && target <= nums[nums.size()-1]){
            int l = pivot;
            int r = nums.size() - 1;
            int m = (l + r) / 2;
            while(l <= r){
                if(nums[m] == target){
                    return m;
                } else if(target < nums[m]){
                    r = m-1;
                    m = (l + r) / 2;
                    continue;
                } else{
                    l = m+1;
                    m = (l + r) / 2;
                    continue;
                }
            }
            return -1;
        } else{
            int l = 0;
            int r = pivot-1;
            int m = (l + r) / 2;
            while(l <= r){
                if(nums[m] == target){
                    return m;
                } else if(target < nums[m]){
                    r = m-1;
                    m = (l + r) / 2;
                    continue;
                } else{
                    l = m+1;
                    m = (l + r) / 2;
                    continue;
                }
            }
            return -1;
        }
    }
};