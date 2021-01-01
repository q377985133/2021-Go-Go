class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_1 = 0;
        int max_2 = 0;
        int tmp = 0;
        for(auto val:nums)
        {
            if(val > max_2)
            {
                max_2 = val;
                if(max_2 > max_1)
                {
                    tmp = max_1;
                    max_1 = max_2;
                    max_2 = tmp;
                }
            }
        }

        return (max_2-1) * (max_1-1);
    }
};