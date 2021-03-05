class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {     
        
        unordered_map<int,int> m ;
        int result = 0;
        if(mat.size() == 1)
            return std::count(mat[0].begin(),mat[0].end(),1);
        
        for(int i =0; i < mat.size();++i)
        {
            //Key = index, value = 1;
            int numCount = std::count(mat[i].begin(),mat[i].end(), 1);
        
            if( numCount == 1)
            {
                //Get only index and add to map
                auto it = find(mat[i].begin(),mat[i].end(),1);
                int index = it - mat[i].begin();
                ++m[index];
            }
            else if (numCount > 1)
            {
                for(int x =0; x < mat[i].size();++x)
                {
                    if(mat[i][x] == 1)
                    {
                        m[x]=2; //Killing this row
                    }
                }
            }
        }
            
            for(auto it : m)
            {
               if(it.second == 1)
                   result++;
            }
            
               return result; 
        }
        
        
};