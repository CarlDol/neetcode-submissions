class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> ordered;
        for(string s: strs){
            string sorts = s;
            sort(sorts.begin(), sorts.end());
            ordered[sorts].push_back(s);
        }
        vector<vector<string>> answer;
        for(auto pair: ordered){
            answer.push_back(pair.second);
        }
        return answer;
    }
};
