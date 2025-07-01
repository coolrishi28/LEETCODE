class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        k = 0
        flag = 0
        len_s = len(s)
        len_t = len(t)
        for i in range(len_s):
            for j in range(k, len_t):
                if s[i] == t[j]:
                    flag += 1
                    k = j + 1
                    break
        
        return flag == len_s
