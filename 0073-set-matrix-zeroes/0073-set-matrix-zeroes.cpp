class Solution {
public:

    void func(vector<vector<int>>& matrix, int row, int col)
    {
        for(int j = 0 ; j < matrix[row].size() ; j++)
        {
            matrix[row][j] = 0;
        }
        for(int i = 0; i < matrix.size() ; i++)
        {
            matrix[i][col] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) 
    {
        map<pair<int,int>,int> maps;
        for(int i = 0; i < matrix.size() ; i++)
        {
            for(int j = 0 ; j < matrix[i].size() ; j++)
            {
                maps[make_pair(i,j)] = matrix[i][j];
            }
        }
        int row,col;
        //int count = 0;
        for(auto it : maps)
        {
            if(it.second == 0)
            {
                row = it.first.first;
                col = it.first.second;
                func(matrix,row,col);
            }
        }

    }
};