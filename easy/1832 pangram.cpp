class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        sentence.erase(unique(sentence.begin(),sentence.end()),sentence.end());
        if(sentence.length()==26)
            return true;
        else
            return false;
        
    }
};