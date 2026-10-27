class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int a;
        int b;
        for(string token: tokens){
            if(token == "+" || token == "-" || token == "/" || token == "*"){
                b = nums.top();
                nums.pop();
                a = nums.top();
                nums.pop();
                if(token == "+"){
                    nums.push(b + a);
                } else if(token == "-"){
                    nums.push(a - b);
                } else if(token == "*"){
                    nums.push(b * a);
                } else{
                    nums.push(a / b);
                }
            } else{
                nums.push(stoi(token));
            }
        }
        return nums.top();
    }
};
