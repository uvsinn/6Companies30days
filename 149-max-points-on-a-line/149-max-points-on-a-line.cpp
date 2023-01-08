class Solution {
public:
    /*
    int maxPoints(vector<vector<int>>& points) 
    {
        int res=0;
        if(points.size()==1)
            return 1;
        for(int i=0;i<points.size()-1;i++)
        {
            float m=0.0000;
            float c=0.0000;
            for(int j=i+1;j<points.size();j++)
            {
                int ans=0;
                if(points[j][0]-points[i][0]==0)
                {
                    m=0;
                    c=points[j][0];
                    
                    for(int k=0;k<points.size();k++)
                    {
                        if(points[k][0]==m*points[k][0]+c)
                            ans++;
                    }
                }
                else if(points[j][1]-points[i][1]==0)
                {
                    m=0;
                    c=points[j][1];
                    
                    for(int k=0;k<points.size();k++)
                    {
                        if(points[k][1]==m*points[k][1]+c)
                            ans++;
                    }
                }
                else
                {
                    
                    m=double(points[j][1]-points[i][1])/double(points[j][0]-points[i][0]);
                
                    c=points[i][1]-(m*points[i][0]);                    
                    for(int k=0;k<points.size();k++)
                    {
                        if(points[k][1]==m*points[k][0]+c)
                            ans++;
                    }
                    
                }
                res=max(res,ans);
            }
        }
        return res;
        */
    
    
        int maxPoints(vector<vector<int>>& points) 
        {
            if(points.size()==1)
                return 1;
            int ans=INT_MIN;
            for(int i=0;i<points.size()-1;i++)
            {
                map<double,int>m;
                for(int j=i+1;j<points.size();j++)
                {
                    if(points[j][0]-points[i][0]==0)
                        m[INT_MAX]++;
                    else
                    {
                        double x=double(points[j][1]-points[i][1])/double(points[j][0]-points[i][0]);
                        m[x]++;
                    }
                }
                for(auto k:m)
                {
                    
                    ans=max(ans,k.second+1);
                }
            }
            return ans;
        }
};