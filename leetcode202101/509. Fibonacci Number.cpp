//509. 斐波那契数
//https://leetcode-cn.com/submissions/detail/135718519/
class Solution {
public:
    int fib(int n) {
        if(n < 2)
        {
            return n;
        }
        int a = 0;
        int b = 1;
        int c = b;

        for(int i=1; i<n; ++i)
        {
            c = a + b;
            a = b;
            b = c;
        }

        return c;
    }
};