class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        map<int,int> m;
        map<int,int>::iterator it;
        vector<bool> results;
        
        for(int i =0; i < candies.size(); ++i)
        {
            m[candies[i]] = candies[i]+extraCandies;
        }
    
        for(int i =0 ; i < candies.size(); ++i)
        {
            it = m.upper_bound(m[candies[i]]); //Check if there is a bigger key value on the map
            if(it != m.end()) // There is bigger
            {
                results.push_back(false);
            }
            else
            {
                results.push_back(true);
            }
        }
        return results;
    }
};