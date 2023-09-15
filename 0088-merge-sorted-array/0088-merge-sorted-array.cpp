class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        /*
        vector<int> temp = nums1;
        int index = 0;
        for(int i = 0, j = 0 ; ; )
        {
            if( temp[i] >= nums2[j] && j < n)
            {
                nums1[index] = nums2[j];
                index++;
                j++;
            }
            if( temp[i] < nums2[j] && i < m)
            {
                nums1[index] = temp[i];
                i++;
                index++;
            }
            
        }  
        */
        for( int i = m, j = 0 ; i < nums1.size() ; i++,j++)
        {
            nums1[i] = nums2[j];
        }  
        sort(nums1.begin(),nums1.end());
    }
};