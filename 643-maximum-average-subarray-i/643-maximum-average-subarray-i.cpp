class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double avg=INT_MIN;
        double sum=0;
        
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(i>=k)
            {
                sum-=nums[i-k];
                j++;
            }
            if(i-j+1==k)
            {
                avg=max(avg,sum/k);
            }
        }
        return avg;
        
    }
};