class Solution:
    def isPalindrome(self, s: str) -> bool:
        lets=[i.lower() for i in s if i.isalnum()]
        snew=''.join(lets)
        print(snew[::-1])
        return snew==snew[::-1]

        