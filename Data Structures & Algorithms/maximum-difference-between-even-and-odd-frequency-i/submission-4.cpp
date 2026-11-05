class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for(char letter: s){
            freq[letter]++;
        }
        int maxEven = 0;
        int maxOdd = 0;
        int minEven = 0;
        int minOdd = 0;
        for(auto [key, value]: freq){
            if(minEven != 0 && minOdd != 0){
                break;
            }
            if(value % 2 == 0){
                minEven = value;
            } else {
                minOdd = value;
            }
        }
        for(auto [key,value]: freq){
            if(value % 2 == 0 && value > maxEven){
                maxEven = value;
            }
            if(value % 2 == 1 && value > maxOdd){
                maxOdd = value;
            }
            if(value % 2 == 0 && value < minEven){
                minEven = value;
            }
            if(value % 2 == 1 && value < minOdd){
                minOdd = value;
            }
        }
        return maxOdd - minEven;
    }
};