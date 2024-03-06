class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> targetFreq, windowFreq;
        for (char c : s1) {
            targetFreq[c]++;
        }
        int left = 0, right = 0, minLength = INT_MAX, minLeft = 0, requiredChars = targetFreq.size();

        while (right < s2.length()) {
            char currentChar = s2[right];
            windowFreq[currentChar]++;
            if (targetFreq.find(currentChar) != targetFreq.end() && windowFreq[currentChar] == targetFreq[currentChar]) {
                requiredChars--;
            }
            while (requiredChars == 0) {
                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    minLeft = left;
                }
                char leftChar = s2[left];
                windowFreq[leftChar]--;
                if (targetFreq.find(leftChar) != targetFreq.end() && windowFreq[leftChar] < targetFreq[leftChar]) {
                    requiredChars++;
                }
                left++;
            }
            right++;
        }
        return minLength == s1.size();
    }
};