class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> memo(cost.size(), -1);
        return min(traversal(cost, 0, memo), traversal(cost, 1, memo));
    }
    int traversal(vector<int>& cost, int index, vector<int>& memo){
        if(index >= cost.size()){
            return 0;
        } 
        if(memo[index] != -1){
            return memo[index];
        }
        memo[index] = cost[index] + min(traversal(cost, index+1, memo),
        traversal(cost, index+2, memo));
        return memo[index];
    }
};
