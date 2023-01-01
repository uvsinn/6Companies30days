class Solution {
public:
    /*
    bool isRectangleCover(vector<vector<int>>& rectangles) 
    {
        vector<int>ans;
        int x=rectangles[0][0];
        int y=rectangles[0][1];
        
        int a=rectangles[0][2];
        int b=rectangles[0][3];
        int area=(a-x)*(b-y);
        for(int i=1;i<rectangles.size();i++)
        {
            if(rectangles[i][0]<=x && rectangles[i][1]<=y)
            {    
                x=rectangles[i][0];
                y=rectangles[i][1];
            }
            if(rectangles[i][2]>=a && rectangles[i][3]>=b)
            {
                a=rectangles[i][2];
                b=rectangles[i][3];
            } 
            area+=(rectangles[i][2]-rectangles[i][0])*(rectangles[i][3]-rectangles[i][1]);
        }
        ans.push_back(x);
        ans.push_back(y);
        ans.push_back(a);
        ans.push_back(b);
        
        int calc=(a-x)*(b-y);
        cout<<calc;
        cout<<area;
        return calc==area;
    }*/
    
    bool isRectangleCover(vector<vector<int>>& rectangles) 
    {
        map<pair<int,int>,int>m;
        
        for(auto r:rectangles)
        {
            m[{r[0],r[1]}]++;
            m[{r[2],r[3]}]++;
            m[{r[0],r[3]}]--;
            m[{r[2],r[1]}]--;
        }
        int count=0;
        for(auto& c:m)
        {    
            count+=abs(c.second);
        }
        return count==4;
    }
};