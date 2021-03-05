class Solution {
public:
    string modifyString(string s) {
        srand(time(NULL));
        char randChar = 97 + rand() % 26; // rand between 97 and 122
        cout << "RandChar is :" << randChar << endl;

        for (int i=0; i < s.size(); i ++)
        {
            if (s[i] == '?')
            {
                s[i] = randChar;
                if (i != 0) { // If not first letter
                    while (s[i - 1] == s[i] || s[i+1] == s[i])
                    {
                        randChar = 97 + rand() % 26;
                        s[i] = randChar;
                    }
                }
            }                   
        }
        return s;
    }
};