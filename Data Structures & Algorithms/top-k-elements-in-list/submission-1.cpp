class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        for(int number: nums){
            frequency[number]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto [num, freq]: frequency){
            bucket[freq].push_back(num);
        }
        vector<int> answer;
        for(int i = bucket.size()-1; i >= 0 && answer.size() < k; i--){
            for(int num: bucket[i]){
                answer.push_back(num);
                if(answer.size() == k){
                    break;
                }
            }
        }
        return answer;
    }
};
