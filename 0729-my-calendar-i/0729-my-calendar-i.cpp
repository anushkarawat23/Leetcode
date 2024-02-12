class MyCalendar {
    private: map<int,int> maps;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) 
    {
        maps[start]++;
        maps[end]--;
        int sum = 0;
        for(auto it = maps.begin() ; it != maps.end() ; it++)
        {
            sum += it -> second;
            if(sum > 1)
            {
                maps[start]--;
                maps[end]++;
                return false; 
            }
                
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */