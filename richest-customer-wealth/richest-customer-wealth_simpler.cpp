//More straight forward solution
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int size = accounts.size();
        int currentBiggest = 0;
        int biggest = 0;
        
        for (int i = 0; i < accounts.size(); ++i)
        {
            for (int x = 0; x < accounts[i].size(); ++x)
            {
                currentBiggest += accounts[i][x];
            }
            if (currentBiggest > biggest)
            {
                biggest = currentBiggest;
            }
            currentBiggest = 0;
        }
        return biggest;
    }
};
