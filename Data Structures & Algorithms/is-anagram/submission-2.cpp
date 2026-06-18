class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())
        return false;

        unordered_map<char, int> mpp;
        unordered_map<char, int> mpp2;

        for(char c : s)
        {
            mpp[c]++;
        }

        for(char c : t)
        {
            mpp2[c]++;
        }

        for(char c : t)
        {
            if(mpp.find(c) == mpp.end())
            {
                return false;
            }

            if(mpp[c] != mpp2[c])
            {
                return false;
            }


        }

        return true;

    }
};
