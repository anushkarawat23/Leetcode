class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        /* MY APPROACH ( WRONG FOR {2,4,1})
        int min = INT_MAX;
        int index;
        int max = 0;
        for(int i = 0 ; i < prices.size() ; i++)
        {
            if(prices[i] < min)
            {
                min = prices[i];
                index = i;
            }
        }
        for( int j = index+1 ; j < prices.size() ; j++)
        {
            if(prices[j] > max)
            {
                max = prices[j];

            }
        }
        if((max - min) < 0)
            return 0;
        else
            return (max - min);

    }
    */

    //optimized solution 

    int minP = INT_MAX;
    int maxP = 0;
    for(int i = 0 ; i < prices.size() ; i++)
    {
        minP = min( minP, prices[i] );
        maxP = max( maxP, prices[i] - minP );
    }
    return maxP;
    
    }
};