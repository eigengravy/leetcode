class Solution:
    def romanToInt(self, s: str) -> int:
        mapping = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        digits = list(map(lambda x: mapping[x], s))
        digits.append(0)
        number = 0
        for curr_digit, next_digit in zip(digits[:-1],digits[1:]):
            if curr_digit >= next_digit:
                number += curr_digit
            else:
                 number -= curr_digit
        return number