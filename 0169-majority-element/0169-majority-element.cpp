class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem = 0;
        int count = 0;
        for (const int num : nums) {
            if (count == 0) {
                elem = num;
            } 
            if (elem == num) {
                count++;
            } else {
                count--;
            }
        }
        return elem;
    }
};