class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //sort the string from left to right to compare
        sort(strs.begin(), strs.end());
        int length = strs.size();
        string first = strs[0];
        string last = strs[length -1 ];
        string result = "";

        //for loop to iterate through each characters
        for(int i = 0; i < first.size(); ++i) {
            if(first[i] == last[i]) {
                result += first[i];
            }
            else
                break;
        }
        return result;
    }
};


/*
flower  flow    flight
eflorw  flow    fghilt  ->after sorted
*/
