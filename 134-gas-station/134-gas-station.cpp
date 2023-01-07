class Solution {
public:
    
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int curr=0;
        int cos=0;
        int idx=0;
        int rem=0;
        for(int i=0;i<gas.size();i++)
        {
            curr+=gas[i];
            cos+=cost[i];
            
            rem+=gas[i]-cost[i];
            cout<<rem<<" ";
            if(rem<0)
            {
                idx=i+1;
                rem=0;
            }
        }
        if(rem>=0 && curr>=cos)
            return idx;
        else
            return -1;
    }
};