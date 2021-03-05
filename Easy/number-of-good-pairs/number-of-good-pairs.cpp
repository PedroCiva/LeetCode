class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int numPairs = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            for (int x = nums.size()-1 ; x > i; --x) 
            {
                if (nums[x] == nums[i])
                {
                    numPairs++;
                }
               
            }
        }

        return numPairs;

    }
};