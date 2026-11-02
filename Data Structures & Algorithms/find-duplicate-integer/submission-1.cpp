class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int, int> dupes;
        // for(int i = 0; i < nums.size(); i++){
        //     dupes[nums[i]]++;
        // }
        // for(auto& [key, value]: dupes){
        //     if(value > 1){
        //         return key;
        //     }
        // }
        set<int> num;
        for(int i = 0; i < nums.size(); i++){
            if (num.count(nums[i]) == 1){
                return nums[i];
            }
            num.emplace(nums[i]);
        }
    }
};
