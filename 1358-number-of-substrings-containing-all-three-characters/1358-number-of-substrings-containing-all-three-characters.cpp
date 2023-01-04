class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        map<char,int>m;

        int n=s.length()-1;
        int count=0;
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            while(m['a'] && m['b'] && m['c'])
            {
                count+=1+(n-i);
                m[s[j]]--;
                j++;
                
            }
            
        }
        return count;
        
    }
    
    
};