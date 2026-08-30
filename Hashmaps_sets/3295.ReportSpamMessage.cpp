class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> banned;
        for(string word: bannedWords){
            banned.insert(word);
        }
        int count=0;

        for(string word1: message){

            if(banned.count(word1)){
                count++;
            }
            if (count>=2){
                return true;
            }
        }
        return false;

    }
};