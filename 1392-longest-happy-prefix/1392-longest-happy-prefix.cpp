class Solution {
public:/*
    string longestPrefix(string s) 
    {
        int i=0;
        int j=s.length()-1;
        string s1,s2;
        string ans="";
        while(i<s.length()-1 && j>0)
        {
            s1+=s[i];
            cout<<"hi";
            string str;
            str+=s[j];
            s2.insert(0,str);
            
            if(s1.length()!=0 && s1==s2)
                ans=s1;
            
            i++;
            j--;
        }
        return ans;
    }*/
    
    string longestPrefix(string s) 
    {
        int n=s.length();
        vector<int>v(n,0);
        
        int i=1;
        int j=0;
        
        while(i!=n)
        {
            if(s[j]==s[i])
            {
                v[i]=j+1;
                i++;
                j++;
            }
            else
            {
                if(j==0)
                {    
                    v[i]=0;
                    i++;
                }
                else
                    j=v[j-1];
            }
        }
        int temp=0;
        string str="";
        
        while(temp!=v[n-1])
        {
            str+=s[temp];
            temp++;
        }
        
        return str;
    }
};