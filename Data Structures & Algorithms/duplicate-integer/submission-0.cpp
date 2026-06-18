class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> mpp;
        // value, frequency

        for(int el : nums)
        {
            if(mpp.find(el) != mpp.end())
            {
                return true;
            }
            
            mpp[el]++;
        }

        return false;
        
    }
};