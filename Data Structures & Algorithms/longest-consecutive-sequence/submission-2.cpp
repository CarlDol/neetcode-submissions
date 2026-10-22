class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sequence = 1;
        int max_sequence = 0;
        if(nums.size() == 0){
            return 0;
        } else if(nums.size() == 1){
            return 1;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]-1){
                sequence++;
            }else if(nums[i-1] == nums[i]){
                continue;
            } else {
                if(max_sequence < sequence){
                    max_sequence = sequence;
                }
                sequence = 1;
            }
        }
        if(sequence > max_sequence){
            max_sequence = sequence;
        }
        return max_sequence;
    }
};
