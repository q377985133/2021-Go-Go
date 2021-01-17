// 1662. 检查两个字符串数组是否相等
// https://leetcode-cn.com/problems/check-if-two-string-arrays-are-equivalent/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1,w2;
        for(auto w : word1)
        {
            w1 += w;
        }
        for(auto w : word2)
        {
            w2 += w;
        }
        
        // if(w1.size() != w2.size())
        // {
        //     return false;
        // }

        // for(int i = 0; i<w1.size(); ++i)
        // {
        //     if(w1[i] != w2[i])
        //     {
        //         return false;
        //     }
        // }

        return w1 == w2;
    }
};