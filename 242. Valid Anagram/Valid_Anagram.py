class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        mci = {}

        for i in range(len(s)):
            mci[s[i]] = mci.get(s[i], 0) + 1
            mci[t[i]] = mci.get(t[i], 0) - 1
        
        for i in range(len(s)):
            if mci[s[i]] != 0:
                return False
        
        return True
