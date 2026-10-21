class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string str: strs){
            encoded = to_string(str.size()) + "#" + str + encoded; 
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> r_decoded;
        string build;
        int skip;
        for(int i = 0; i < s.size(); i++){
            build += s[i];
            if(s[i] == '#'){
                skip = stoi(build);
                r_decoded.push_back(s.substr(i+1, skip));
                build = "";
                i += skip;
            }
        }
        vector<string> decoded;
        for(int i = r_decoded.size()-1; i >= 0; i--){
            decoded.push_back(r_decoded[i]);
        }
        return decoded;
    }
};
