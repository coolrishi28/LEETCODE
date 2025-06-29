import sys
class Solution:
    def reverse(self, x: int) -> int:
        n = x
        r = 0
        c = 1
        if n < 0:
            n *= -1
            c = -1
        while(n>0):
            a  = n % 10
            r = r*10 + a
            n //= 10
        if (r < -2**31 or r > 2**31 - 1):
            return 0
        #print(2**31)
        return r*c
