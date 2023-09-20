class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        /*
        // GOING OUT OF RANGE WHEN CONVERTING IT TO INTEGER
        unsigned long long int num = 0;
        vector<int> ans;
        reverse(digits.begin() , digits.end());
        for(int i = digits.size()-1 ; i >= 0 ; i--)
        {
            num = (num * 10) + digits[i];
        }
        num++;
        while( num > 0 )
        {
            int rem = num % 10;
            ans.push_back(rem);
            num = num / 10;
        }
        reverse(ans.begin() , ans.end());
        return ans;
*/
        // Time Complexity: O(N)   Space Complexity: O(N)

        vector<int> ans;
        int i = digits.size() - 1;
        //if the digit is not 9 then we can just increment it
        if( digits[i] != 9 )
            digits[i]++;

        else   //if the digit is 9         // 999  -> 1000    //7899 -> 7900    //79 -> 80
        {
            while( digits[i] == 9 && i > 0)
            {
                digits[i] = 0;
                i--;
            }
            if( i == 0 && digits[i] == 9)  //to check for numbers like 99, 999, 9
            {
                ans.push_back(1);
                digits[i] = 0;
                for(int i = 0 ; i < digits.size() ; i++)
                    ans.push_back(digits[i]);
                return ans;
            }
            digits[i]++;
        }
        return digits;
    }
};