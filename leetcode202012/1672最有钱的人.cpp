class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        int cur = 0;
        for(int i=0; i<accounts.size(); ++i)
        {
            cur = 0;
            for(int j=0; j<accounts[i].size(); ++j)
            {
                cur += accounts[i][j];
            }

            if(cur > richest)
            {
                richest = cur;
            }
        }

        return richest;
    }
};