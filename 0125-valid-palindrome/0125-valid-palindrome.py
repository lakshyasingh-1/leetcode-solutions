class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        result = ""

        for ch in s:
            if ch.isalnum():
                result += ch

        if result == result[::-1]:
            return True
        else:
            return False