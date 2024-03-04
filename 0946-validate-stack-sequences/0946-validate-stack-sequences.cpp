class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        //jab tak popped ka pehla element nhi milta, tab tk push karo

        stack<int> st;
        int j = 0;
        for(int i = 0 ; i < pushed.size() ; i++)
        {
            st.push(pushed[i]);
            while( !st.empty() && st.top() == popped[j])
            {
                //st.push(pushed[i]);
                st.pop();
                j++;
            }      
        }
        cout << j;
        while(j < popped.size())
        {
            if(st.top() != popped[j])
                return false;
            else
            {   
                st.pop();
                j++;
            }
        }
        return true;
    }
};