class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = prices[0];
        int maxDeal = 0;
        for(int i = 1; i < prices.size(); i++){
            if(min > prices[i]){
                min = prices[i];
                max = 0;
            }
            if(max < prices[i]){
                max = prices[i];
            }
            if(max - min > maxDeal){
                maxDeal = max - min;
            }
        }
        if(maxDeal <= 0){
            return 0;
        } else{
            return maxDeal;
        }
    }
};
