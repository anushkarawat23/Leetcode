class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        /* TLE 
        int n = temperatures.size();
        vector<int> ans;
        for(int i = 0 ; i < n-1 ; i++)
        {
            int curr = i;
            int next = i+1;
            int count = 0;
            while(next <= n-1 && temperatures[next] <= temperatures[curr])
            {
                next++;
                if(next > n-1)
                {
                    count = 0;
                    break;
                }
                count++;
            }
    
            if(next < n)
                count++;
            ans.push_back(count);
        }
        ans.push_back(0);
        return ans;
        */

        stack<int> index;
        vector<int> ans(temperatures.size(), 0);
        int n = temperatures.size();
        for(int i = 0 ; i < n ; i++)
        {
            while( !index.empty() && temperatures[index.top()] < temperatures[i] )
            {
                ans[index.top()] = i - index.top();
                index.pop();
            }
            index.push(i);
        }
        return ans;
    }
};