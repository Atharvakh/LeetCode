class Solution:
    def ispalindrome(s):
        return s == s[::-1]

    def longestPalindrome(self, s: str) -> str:
        ans=""
        n = len(s)
        for i in range(n):
            for j in range(i+1,n+1):
                newstr = s[i:j]
                if Solution.ispalindrome(newstr) and len(newstr)>len(ans):
                    ans = newstr
        return ans