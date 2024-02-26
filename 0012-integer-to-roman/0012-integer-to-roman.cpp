class Solution {
public:
    string intToRoman(int num) 
    {
        vector<int> numbers = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> roman = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string ans = "";
        for(int i = 0 ; i < 13 ; i++)
        {
            while(num >= numbers[i])
            {
                ans.append(roman[i]);
                num -= numbers[i];
            }
        }

        return ans;

        

        

    }
};