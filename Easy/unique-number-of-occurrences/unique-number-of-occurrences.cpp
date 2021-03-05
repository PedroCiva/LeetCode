class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        vector<int> ocurrences;

        //Add number and num of occurences
        for (int i = 0; i < arr.size(); ++i)
        {
            ++m[arr[i]];
        }


        for (auto it = m.begin(); it != m.end(); it++)
        {
            ocurrences.push_back(it->second);
            if(std::count(ocurrences.begin(),ocurrences.end(),it->second)>1)
               return false;
        }
        return true;
    }
};