class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int i, j, k = 0, flag = 0;
        int len_s = s.length();
        int len_t = t.length();
        for(i = 0; i < len_s; i++)
        {
            for(j = k; j < len_t; j++)
            {
                if(s[i] == t[j])
                {
                    flag++;
                    k = j + 1;
                    break;
                }
            }
        }
        return flag == len_s;
    }
};
