class Solution {
public:
    bool isHappy(int n) {
        vector<int> seen;
        int num = n;
        vector<int> components;
        while(find(seen.begin(), seen.end(), num) == seen.end()){
            seen.push_back(num);
            if(num == 1){
                return true;
            }
            components = calculator(num);
            num = 0;
            for(int digit: components){
                num = num + (digit * digit);
            }
        }
        return false;
    }
    vector<int> calculator(int num){
        vector<int> nums;
        if(num == 0){
            nums.push_back(0);
        }
        while(num > 0){
            nums.push_back(num%10);
            num = num/10;
        }
        return nums;
    }
};
