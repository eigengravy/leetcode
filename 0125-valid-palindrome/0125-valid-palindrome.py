class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join([c.lower() for c in list(s) if c.isalnum()])
        return s == s[-1::-1]
