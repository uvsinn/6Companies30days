class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        bool ch1=true;
        bool ch2=true;
        bool ch3=true;
        for(int i=0;i<word.length();i++)
        {
            if(islower(word[i]))
            {
                ch1=ch1 & false;
                
            }
            if(isupper(word[i]))
            {
                ch2=ch2 & false;
            }
            if(isupper(word[0]))
            {
                if(i!=0 && isupper(word[i]))
                    ch3=ch3 & false;
            }
            if(!isupper(word[0]))
                ch3=false;
            
        }
        return ch1 || ch2 || ch3;
    }
};