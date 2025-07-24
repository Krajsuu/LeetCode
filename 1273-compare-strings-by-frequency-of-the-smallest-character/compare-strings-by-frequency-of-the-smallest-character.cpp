class Solution {
public:
    int countFreq(string word){
        int amount = 0;
        char chr = 'z';
        for(auto c : word){
            if(c < chr) {
                chr = c;
                amount = 1;
            }
            else if(chr == c) {
                amount++;
            }
        }
        return amount;
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
       vector<int> answ(queries.size(),0);
       vector<int> queriesFreq;
       for(int i = 0; i < queries.size();i++){
            queriesFreq.push_back(countFreq(queries[i]));
       }
       for(int i = 0; i < words.size();i++){
            int freq = countFreq(words[i]);
            for(int j = 0; j < queriesFreq.size(); j++){
                if(queriesFreq[j] < freq){
                    answ[j]++;
                }
            }
       }
       return answ;
    }
};