class Solution {
public:
    int arr[12]={2,3,5,7,11,13,17,19,23,27,29,31};
    int distinctPrimeFactors(vector<int>& nums) 
    {
        set<int>s;
        for(int n:nums)
        {
            for(int i:arr)
            {
                if(n%i==0)
                {
                    s.insert(i);
                    while(n%i==0)
                        n=n/i;
                }
            }
            if(n!=1)
                s.insert(n);
        }
        for(int i:s)
            cout<<i<<" ";
        return s.size();
    }
};