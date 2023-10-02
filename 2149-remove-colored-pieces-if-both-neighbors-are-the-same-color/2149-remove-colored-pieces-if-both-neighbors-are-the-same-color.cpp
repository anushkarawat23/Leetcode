class Solution {
public:
    bool winnerOfGame(string colors) 
    {
        int alice = 0, bob = 0;
        int n = colors.size();
        if( n <= 2 )
            return false;
        for(int i = 0 ; i < n - 2 ; i++)
        {
            if(colors[i] == colors[i+1] && colors[i] == colors[i+2])
            {
                if(colors[i] == 'A')
                    alice++;
                else
                    bob++;
            }
        }

        return (alice - bob >= 1);
         
        
        
    }
};