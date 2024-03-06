class Solution {
public:

    int longestSubstring(string s, int k) {
        int maxLen = 0;

        unordered_set<char> count;
        for (auto it : s) {
            count.insert(it);
        }
        int unique = count.size();
        std::cout << "unique " << unique << std::endl;
        for (int i = 1; i <= unique; i++) {
            int start = 0, end = 0;
            int count_unique = 0, count_k = 0;
            unordered_map<char, int> mp;
            while (end < s.size()) {
                if (count_unique <= i) {
                    if (mp.count(s[end]) == 0 || mp[s[end]] == 0) {
                        count_unique++;
                    }
                    mp[s[end]]++;
                    if (mp[s[end]] == k) {
                        count_k++;
                    }
                    end++;
                } else {
                    if (mp[s[start]] == k) {
                        count_k--;
                    }
                    mp[s[start]]--;
                    if (mp.count(s[start]) == 0 || mp[s[start]] == 0) {
                        count_unique--;
                    }
                    start++;
                }

                if (count_unique == i && count_k == i) {
                    maxLen = max(maxLen, end - start);
                }
            }
        }
        return maxLen;
    }
};