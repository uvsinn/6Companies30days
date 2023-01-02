class Solution {
public:
    bool dfs(int n,vector<int>&vis, vector<int>&pvis, vector<int>v[])
    {
        pvis[n]=1;
        vis[n]=1;
            cout<<"hi1"<<endl;
        for(auto it:v[n])
        {
            if(!vis[it])
            {
                if(dfs(it,vis,pvis,v))
                    return true;
            }
            else
            {
                if(pvis[it])
                    return true;
            }
        }
        pvis[n]=0;
        cout<<"hi"<<endl;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int n=numCourses;
        vector<int>v[n];
        for(auto i:prerequisites)
        {
            v[i[0]].push_back(i[1]);
        }
        
        vector<int>vis(n,0);
        vector<int>pvis(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,vis,pvis,v))
                {
                    cout<<"iii";
                    return false;
                }
                    
            }
        }
        return true;
    }
};