class Solution:
    def romanToInt(self, s: str) -> int:
        mapping = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        digits = list(map(lambda x: mapping[x], s))
        number = 0
        for i in range(len(digits)-1):
            if (digits[i] >= digits[i+1]):
                number += digits[i]
            else:
                 number -= digits[i]
        number += digits[-1]
        return number