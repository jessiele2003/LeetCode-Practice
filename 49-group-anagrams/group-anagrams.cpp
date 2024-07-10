class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> store_key;
        
        // loop through all the strings in the array
        // to count the occurence of each letter
        for(int i = 0; i < strs.size(); ++i) {
            string key = getKey(strs[i]);
            store_key[key].push_back(strs[i]);
        }

        vector<vector<string>> answer;
        for(auto it = store_key.begin(); it != store_key.end(); it++) {
            answer.push_back(it->second);
        }
        return answer;
    }

private:
    string getKey(string str) {
        vector<int> count(26);
        for(int i = 0; i < str.size(); ++i) {
            count[str[i] - 'a']++;
        }

        string key = "";
        for(int i = 0; i < count.size(); ++i) {
            key.append(to_string(count[i]) + '#');
        }
        return key;
    }
};