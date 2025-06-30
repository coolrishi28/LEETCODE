class Solution {
public:
    long long fact(int n, int r)
    {
        long long p = 1, k = 1;
        if (n - r < r)
        {
            r = n - r;
        }
        if (r != 0)
        {
            while (r)
            {
                p *= n;
                k *= r;
                long long m = __gcd(p, k);
                p /= m;
                k /= m;
                n--;
                r--;
            }
        }
        else
        {
            p = 1;
        }
    return p;
}
    vector<int> getRow(int rowIndex)
    {
        vector<int> rows(rowIndex+1, 1);
        for(int i = 1; i <= rowIndex; i++)
        {
            rows[i] = fact(rowIndex, i);
        }
        return rows;
    }
};
