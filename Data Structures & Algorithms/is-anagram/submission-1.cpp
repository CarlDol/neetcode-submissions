class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> s2;
        std::map<char, int> t2;
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            s2[s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            t2[t[i]]++;
        }
        for(auto& [key, value]: s2){
            if(!t2.contains(key)){
                return false;
            }
            if(t2[key] != value){
                return false;
            }
        }
        return true;
    }
};
