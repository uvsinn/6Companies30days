class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        map<int,int>m;
        for(int i=0;i<tasks.size();i++)
        {
            if(m.find(tasks[i])!=m.end())
            {
                m[tasks[i]]++;
            }
            else
                m.insert({tasks[i],1});
        }
        int count=0;
        for(auto it:m)
        {
            if(it.second%3==0)
            {
                count+=it.second/3;
            }
            else if(it.second%3==1)
            {
                if(it.second==1)
                    return -1;
                count+=2;
                it.second-=4;
                count+=it.second/3;
            }
            else if(it.second%3==2)
            {
                count+=1;
                it.second-=2;
                count+=it.second/3;
            }
        }
        return count;
        
    }
};