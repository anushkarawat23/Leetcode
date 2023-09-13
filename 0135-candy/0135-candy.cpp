/*

class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int total = 0;
        int n = ratings.size();
        //initialised with 1 coz every child gets atleast 1 candy
        vector<int> ans(n,1); 
        for(int i = 0; i < ratings.size()-1 ; i++)
        {
            
                if( ratings[i] > ratings[i+1] )
                {
                    if( ans[i] <= ans[i+1] )
                        ans[i]++;
                }
                else if( ratings[i] == ratings[i+1])
                {
                    continue;
                }
                else 
                {
                    ans[i+1]++;
                }
            
        }
        for(int i = 0; i < ans.size()-1 ; i++)
        {
            if( ans[i] == ans[i+1])
            {
                total++;
            }
        }
        for(int i = 0; i < ans.size() ; i++)
        {
            total += ans[i];
        }
        return total;
    }
    
};  */

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int>left(n, 1), right(n, 1);
        
        //traverse left to right and compare curr value with left side value
        for(int i = 1; i < n; i++)
            if(ratings[i] > ratings[i-1]) left[i] = left[i-1]+1;
              
         //traverse right to left and compare curr value with right side value
        for(int i = n-2; i >= 0; i--)
            if(ratings[i] > ratings[i+1]) right[i] = right[i+1]+1;
        
        int ans = 0;
        for(int i = 0; i < n; i++)
            ans += max(left[i], right[i]);
        
        return ans;            
    }
};