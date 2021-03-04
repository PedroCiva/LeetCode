class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        //Count indexes (space) between the 2 numbers, largest wins
        vector<char> v; //vector to store repeated letters
        bool containsLargest = false;
        for (auto l : s)
        {
            if (std::count(s.begin(), s.end(), l) > 1)
            {
                if (find(v.begin(), v.end(), l) == v.end()) // If not yet on our vec
                {
                    v.push_back(l);
                    containsLargest = true;
                }
            }
        }
        if (!containsLargest)
            return -1;

        int largest = 0;
        for (int i = 0; i < v.size(); ++i)
        {
            auto it = find(s.begin(), s.end(), v[i]);
            int firstIndex = it - s.begin();
            auto it2 = find(s.rbegin(), s.rend(), v[i]);
            int secondIndex = distance(s.begin(), it2.base()) - 1;
            int currentLargest = secondIndex - firstIndex;
            if (currentLargest > largest)
                largest = currentLargest-1;

        }
        return largest;


    }
};