class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int numStones = 0;
        for(int i =0; i < jewels.length();++i)
        {
           numStones+= std::count(stones.begin(),stones.end(),jewels[i]);
        }
        
        return numStones;
        
    }
};