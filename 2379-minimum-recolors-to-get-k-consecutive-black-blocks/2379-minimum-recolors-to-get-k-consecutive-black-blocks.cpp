class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int count1=INT_MAX;
        int count2=INT_MIN;
        int j=0;
        
        int wc=0;
        int bc=0;
        for(int i=0;i<blocks.size();i++)
        {
            if(blocks[i]=='W')
                wc++;
            if(blocks[i]=='B')
                bc++;
            if(i>=k)
            {
                if(blocks[j]=='W')
                    wc--;
                if(blocks[j]=='B')
                    bc--;
                
                j++;
            }
            if(i-j+1==k)
            {
                count1=min(count1,wc);
                count2=max(count2,bc);
            }
        }
        cout<<count2;
        if(count2>=k)
            return 0;
        return count1;
    }
};