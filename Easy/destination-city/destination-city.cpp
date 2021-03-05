class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        //A dest city is a city which is on index 1 but never on index 0
        //Store all of the cities
        //The only city which is not on index 1 is our dest city
        vector<string> firstCity;
        vector<string> secondCity;
        string destCity;
        for(int i =0; i < paths.size();++i)
        {
            firstCity.push_back(paths[i][0]);
            secondCity.push_back(paths[i][1]);
        }
        
        for(int i =0; i < secondCity.size();++i)
        {
            if( std::count(firstCity.begin(),firstCity.end(),secondCity[i]) == 0 )
            {
                return secondCity[i];       
            }
        }
        return destCity;
    }
};