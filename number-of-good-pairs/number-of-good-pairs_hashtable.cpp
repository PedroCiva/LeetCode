//Interesting hash table solution I found
//Credits to smritipradhan545 

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
            numPairs += ((num)*(num-1))/2;
        }

        return numPairs;

    }
};
