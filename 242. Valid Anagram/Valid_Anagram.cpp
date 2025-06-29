class Solution {
public:
    bool isAnagram(string s, string t) {
        int i, ssize = s.size(), tsize = t.size();
        map<char,int>mci;
        if(ssize != tsize)
        {
            return false;
        }
        for(i = 0; i < ssize; i++)
        {
            mci[s[i]]++;
            mci[t[i]]--;
        }
        for(i = 0; i < ssize; i++)
        {
            if(mci[s[i]] != 0)
            {
                return false;
            }
        }
        return true;
    }
};
