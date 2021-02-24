class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        //Assuming each customer has the same number of accounts
        int numAccounts = accounts[0].size();
        vector<int> wealths(accounts.size()*numAccounts); // Turn it into 1d array


        /*for (int i = 0; i < accounts.size(); ++i)
        {
            for (int x = 0; x < accounts[i].size(); ++x)
            {
                wealths.push_back(accounts[i][x]);
            }
        }*/

        vector<int>::iterator it = wealths.begin();
        //Use std::copy instead?
        for (int i = 0; i < accounts.size(); ++i)
        {
            if (i == 0)
            {
                std::copy(accounts[i].begin(), accounts[i].end(), it);
                it = wealths.begin() + numAccounts;
            }
            else
            {
                it = wealths.begin() + numAccounts * i;
                std::copy(accounts[i].begin(), accounts[i].end(), it);
            }
        }
        

        int count = 1;
        int currentBiggest = wealths[0];
        int biggest = 0;
        if (numAccounts > 1)
        {
            for (int i = 1; i < wealths.size(); ++i)
            {
                currentBiggest += wealths[i];
                count++;
                if (count == numAccounts) // Check every numAccount times
                {
                    if (currentBiggest >= biggest)
                    {
                        biggest = currentBiggest;
                    }
                    //Reset count and currentBiggest
                    currentBiggest = 0;
                    count = 0;
                }
            }
            return biggest;
        }
        else
        {
            for (int i = 1; i < wealths.size(); ++i)
            {
                if(wealths[i] > currentBiggest)
                    currentBiggest = wealths[i];
            }
            return currentBiggest;
        }
      
        return 0;
    }
};