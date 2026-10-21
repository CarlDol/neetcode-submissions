class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int full_prod = nums[0];
        int e_full_prod = nums[0];
        vector<int> zeroes;
        if(nums[0] == 0){
            e_full_prod = 1;
            zeroes.push_back(0);
        }
        int negatives = 0;
        if(nums[0] < 0){
            negatives++;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == 0){
                zeroes.push_back(i);
                full_prod = 0;
                continue;
            }
            if(nums[i] < 0){
                negatives++;
            }
            e_full_prod = e_full_prod * nums[i];
        }
        if(e_full_prod > 0 && negatives % 2 == 1){
            e_full_prod = -1 * e_full_prod;
        }
        if(zeroes.size() > 1){
            vector<int> stuff(nums.size(), 0);
            return stuff;
        }
        vector<int> answer(nums.size());
        if(zeroes.size() == 1){
            vector<int> stuff(nums.size(), 0);
            stuff[zeroes[0]] = e_full_prod;
            return stuff;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                continue;
            }
            answer[i] = e_full_prod / nums[i];
        }
        return answer;
        
    }
};
