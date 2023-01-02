class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) 
    {
        sort(numsDivide.begin(),numsDivide.end());
        int lcm=numsDivide[0];
        for(int i = 1;i < numsDivide.size();i++)
        {
            lcm = __gcd(lcm,numsDivide[i]);
        }
        
        sort(nums.begin(),nums.end());
        cout<<lcm;
        for(int i=0;i<nums.size();i++)
        {
            if(lcm%nums[i]==0)
                return i;
        }
        return -1;
    }
};