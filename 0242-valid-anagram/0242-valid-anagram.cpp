class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;
        
        for(char it: s){
            s_map[it]++;
        }
        for(char it: t){
            t_map[it]++;
        }

        for(int i=0; i<s_map.size(); i++){
            if(s_map[i]!=t_map[i]) return false;
        }
        return true;
    }
};