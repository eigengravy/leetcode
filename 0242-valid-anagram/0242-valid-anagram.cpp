class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> cmap;
        // unordered_map<char, int> s_map;
        // unordered_map<char, int> t_map;
        for(int i=0; i<s.size(); i++){
            cmap[s[i]]++;
            cmap[t[i]]--;
        }
        for(int i=0; i< cmap.size(); i++){
            if(cmap[i] != 0) return false;
        }
        return true;
    }
};