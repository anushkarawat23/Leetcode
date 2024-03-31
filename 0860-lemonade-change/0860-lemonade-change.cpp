class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        unordered_map<int,int> freq;
        for(int i = 0 ; i < bills.size() ; i++)
        {
            if(bills[i] == 5)
            {
                freq[5]++;
            }
            else if(bills[i] == 10)
            {
                //check if 10-5=5 present or not
                freq[10]++;
                if(freq[5] == 0)
                {
                    return false;
                }
                freq[5]--;
            }
            else
            {
                freq[20]++;
                //check if 10 and 5 present in map or not
                cout<<freq[5];
                if(freq[10] == 0 || freq[5] == 0)
                {
                    return false;
                }
                freq[10]--;
                freq[5]--;
            }
        }
        return true;
    }
};