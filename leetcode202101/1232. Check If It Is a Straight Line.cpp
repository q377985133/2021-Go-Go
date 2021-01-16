//1232. 缀点成线
//https://leetcode-cn.com/problems/check-if-it-is-a-straight-line/
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int p_num = coordinates.size();
        if(p_num <= 2)
        {
            return true;
        }
        /*
            一般式 ax + by + c = 0 的三个参数:
            a=y2-y1
            b=x1-x2
            c=-ax1-by1
        */
        int a = coordinates[1][1] - coordinates[0][1];
        int b = coordinates[0][0] - coordinates[1][0];
        int c = (-a * coordinates[0][0]) - (b * coordinates[0][1]);

        for(int i=2; i<p_num; ++i)
        {
            if(-c != (a * coordinates[i][0]) + (b * coordinates[i][1] ))
            {
                return false;
            }
        }

        return true;
    }
};