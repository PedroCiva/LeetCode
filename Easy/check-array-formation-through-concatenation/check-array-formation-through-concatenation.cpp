class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, int> map;
        bool canForm = true;
        for (int i = 0; i < pieces.size(); ++i)
        {
            map.emplace(pieces[i][0],i); // Key: first element array, value: index
        }

        for (int i = 0; i < arr.size(); ++i)
        {
            if (map.count(arr[i]) > 0) // If we find the current num in pieces
            {
                //Figure out index in pieces
                int outerIndex = map[arr[i]]; // Grab value which is the index

                 //If there are more values
                if (pieces[outerIndex].size() > 1)
                {

                    int innerIndex = 1;
                    // check if the next value on pieces current array matches our next value on arr
                    for (int x = i + 1; x < arr.size(); ++x)
                    {
                        if (innerIndex < pieces[outerIndex].size()) // Make sure we are on boudaries
                        {
                            if (arr[x] == pieces[outerIndex][innerIndex])
                            {
                                innerIndex++;
                                i = x;
                            }
                            else
                            {
                                canForm = false;
                            }
                        }
                    }
                }
            }
            else
            {
                canForm = false;
            }     
        }
        return canForm;
    }
};