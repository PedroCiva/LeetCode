//Alternative solution using Hash Table

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> umap; //Initializing a Hash Table
        int numPairs = 0;

        for (int i = 0; i < nums.size(); i++) //Iterating through the vector
        {
            ++umap[nums[i]];  //Incrementing value if key is found. Aka Incrementing occurences of a number
        }

        for (auto& n : umap)
        {
            int num = n.second;
            //Alternative formula I found on LeetCode solutions: good_pairs += ((num)*(num-1))/2;
            if (num % 2 == 0)
            {
                numPairs += num;
            }
            else
            {
                --num;
                numPairs += num;
            }
        }

        return numPairs;

    }
};
