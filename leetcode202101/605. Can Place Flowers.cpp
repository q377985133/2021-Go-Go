//https://leetcode-cn.com/problems/can-place-flowers/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(0 == n)
        {
            return true;
        }

        for (int i=0; i<flowerbed.size(); ++i)
        {
            if(1 == flowerbed[i])
            {
                ++i;
                continue;
            }

            if(i-1 >= 0 && 0 != flowerbed[i-1])
            {
                continue;
            }

            if(i+1 < flowerbed.size() && 0 != flowerbed[i+1])
            {
                continue;
            }

            flowerbed[i] = 1;
            ++i;
            --n;
            if(0 >= n)
            {
                return true;
            }
        }

        return false;
    }
};