class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        int ans;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++)
        {
            if(coins>=costs[i])
            {
                ans++;
                coins=coins-costs[i];
            }
            else
                break;
                
        }
        return ans;
        
    }
};