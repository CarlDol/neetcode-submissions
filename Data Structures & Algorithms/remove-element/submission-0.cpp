class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> answer;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                count++;
                continue;
            } else {
                answer.push_back(nums[i]);
            }
        }
        for(int i = 0; i < count; i++){
            answer.push_back(-67);
        }
        count = nums.size() - count;
        nums = answer;
        return count;
    }
};