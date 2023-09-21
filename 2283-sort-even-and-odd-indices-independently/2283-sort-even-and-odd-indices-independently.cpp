class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        vector<int> even,odd,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(i % 2 != 0)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
       
        //cout<<even.size();
        sort(odd.begin(),odd.end());
        reverse(odd.begin() , odd.end());
        sort(even.begin(),even.end());
        int i ;
        for(i=0 ;i < even.size() && i < odd.size() ; i++)
        {
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        if( i < even.size() )
            ans.push_back( even[i] );
        if( i < odd.size() )
            ans.push_back( odd[i] );
        return ans;
    }
};