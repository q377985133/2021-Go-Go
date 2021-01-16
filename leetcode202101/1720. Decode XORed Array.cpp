//1720. 解码异或后的数组
//https://leetcode-cn.com/problems/decode-xored-array/
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int len = encoded.size();
        vector<int> ans(len + 1);
        ans[0] = first;
        for(int i=0; i<len; ++i)
        {
            ans[i+1] = ans[i] ^ encoded[i];
        }

        return ans;

    }
};