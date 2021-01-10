//228. Summary Ranges
//https://leetcode-cn.com/problems/summary-ranges/
class Solution {
public:

    string check_and_build(int first, int last)
    {
        if(last == first)
        {
            return to_string(last);
        }
        else
        {
            return (to_string(first) + "->" + to_string(last));
        }
    }

    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> ret_str;
        if(0 == nums.size())
        {
            return ret_str;
        }

        string str;
        int first = nums[0];
        int last = nums[0];

        for(int i=0; i<nums.size()-1; ++i)
        {
            if(nums[i + 1] == last + 1)
            {
                last = nums[i + 1];
            }
            else
            {
                ret_str.push_back(check_and_build(first, last));

                first = nums[i+1];
                last = nums[i+1];
            }
        }

        ret_str.push_back(check_and_build(first, last));

        return ret_str;
    }
};