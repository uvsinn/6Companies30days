class Solution {
public:
    string getHint(string secret, string guess) 
    {
        int count1=0;
        vector<int>v1(10,0);
        vector<int>v2(10,0);
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
               count1++;
            else
            {
                int l=secret[i]-'0';
                v1[l]++;
                int m=guess[i]-'0';
                v2[m]++;
            }  
        }
       int count2=0;
       for(int i=0;i<v1.size();i++)
       {
           count2+=min(v1[i],v2[i]);
       }
        
        string s1=to_string(count1);
        string s2=to_string(count2);
        
        string ans=s1+"A"+s2+"B";
        
        return ans;
    }
};