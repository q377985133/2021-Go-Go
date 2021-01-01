class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int i=0;
        int j=0;
        int k=0;
        int len = arr.size();
        int count = 0;
        for(int i=0; i<len-2; ++i)
        {
            for(int j=i+1; j<len-1; ++j)
            {
                if(arr[i]- arr[j] > a || arr[i]-arr[j] < -a)
                {
                    continue;
                }
                for(int k=j+1; k<len; ++k)
                {
                    if(arr[j]- arr[k] > b || arr[j]-arr[k] < -b)
                    {
                        continue;
                    }
                    if(arr[i]- arr[k] > c || arr[i]-arr[k] < -c)
                    {
                        continue;
                    }

                    ++count;
                }
            }
        }

        return count;
    }
};