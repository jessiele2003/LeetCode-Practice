class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // initialize a hashmap that group the anagrams together
        unordered_map<string, vector<string>> group;
        for(int i = 0; i < strs.size(); ++i) {
            string key = getKey(strs[i]);
            group[key].push_back(strs[i]);
        }

        vector<vector<string>> answer;
        for (auto it = group.begin(); it != group.end(); ++it) {
            answer.push_back(it->second);
        }
        return answer;
    }


private:
    string getKey(string str) {
        vector<int> count(26);    //use to count the letter in each string
        for(int i = 0; i < str.size(); ++i) {
            count[str[i] - 'a']++;
        }

        //make an empty key to construct the key
        string key = "";
        for(int i = 0; i < count.size(); ++i) {
            key.append(to_string(count[i] + '#'));
        }
        return key;
    }
};


/*
String: "eat"
Call getKey("eat").

Inside getKey("eat"):
Count Character Frequencies:

Initialize count vector: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0].
For e: count[4]++ → [0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0].
For a: count[0]++ → [1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0].
For t: count[19]++ → [1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0].
Generate the Key:

Construct key: "1#0#0#0#1#0#0#0#0#0#0#0#0#0#0#0#0#0#0#1#0#0#0#0#0#0#".
Return key: "1#0#0#0#1#0#0#0#0#0#0#0#0#0#0#0#0#0#0#1#0#0#0#0#0#0#".
Use key to update map group: group["1#0#0#0#1#0#0#0#0#0#0#0#0#0#0#0#0#0#0#1#0#0#0#0#0#0#"] = ["eat"].
*/