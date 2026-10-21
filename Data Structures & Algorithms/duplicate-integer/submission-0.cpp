class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> dupes;
        for(int i = 0; i < nums.size(); i++){
            dupes.emplace(nums[i]);
        }
        if(dupes.size() < nums.size()){
            return true;
        }
        return false;
    }
};