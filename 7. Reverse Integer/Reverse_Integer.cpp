class Solution {
public:
    int reverse(int n) 
    {
        int max = INT_MAX, min = INT_MIN;
        long long r = 0;
        long long int x = n;
        int s = 1;
        if(x < 0)
        {
            s = -1;
            x = -x;
        }
        while(x > 0)
        {
            int d = x % 10;
            r = r * 10 + d;
            x /= 10;
        }
        r *= s;
        if(r < min or r > max)
        {
            return 0;
        }
        return r;
    }
};
