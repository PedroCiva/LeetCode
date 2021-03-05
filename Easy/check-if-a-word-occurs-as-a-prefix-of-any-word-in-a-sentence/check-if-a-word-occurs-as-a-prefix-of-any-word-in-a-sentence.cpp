class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {

        int result = -1;

        //substr returns a copy of a string in range
        if (sentence.substr(0, searchWord.length()) == searchWord)
            return 1;
        
        auto wordIndex = sentence.find(" " + searchWord);
        
        if (wordIndex != std::string::npos)
        {
            result = 1;
            for(int i= 0; i < wordIndex +1; ++i )
                if (sentence[i] == ' ') 
                    result++;
        }
        return result;
    }
};