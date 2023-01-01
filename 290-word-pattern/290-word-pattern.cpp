class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
                count++;
        }
        if(pattern.size()!=count+1)
            return false;
        map<char,int>pat;
        map<string,int>str;
        
        istringstream mystr(s);
        
        for(int i=0;i<pattern.size();i++)
        {
            string word;
            mystr>>word;
            if(pat.find(pattern[i])!=pat.end())
            {
                if(str.find(word)==str.end() || pat[pattern[i]]!=str[word])
                    return false;
            }
            else
            {
                pat.insert({pattern[i],i});
                if(str.find(word)!=str.end())
                    return false;
                str.insert({word,i});
            }
        }
        for(auto it:str)
            cout<<it.first<<it.second<<endl;
        return true;
    }
};