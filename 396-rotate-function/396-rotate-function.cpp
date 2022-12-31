class Solution {
public:
    int maxRotateFunction(vector<int>& nums)
    {
        int n=nums.size();
        int j=0,sum=0;
        
        vector<int>v(n,0);
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            v[0]+=j*nums[i];
            j++;  
        }
        int res=v[0];
        for(int i=1;i<v.size();i++)
        {
            v[i]=v[i-1]+sum-n*nums[n-i];
            res=max(res,v[i]);
        }
        return res;
    }
};