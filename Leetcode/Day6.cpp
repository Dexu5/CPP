class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        // Sort all the elements in vector string. 
        for(int i=0 ; i < strs.size() ; ++i){
            string s2 = strs[i];
            sort(s2.begin(), s2.end());
            //cout << s2[i] << endl;
            m[s2].push_back(strs[i]);
        }

        vector<vector<string>> v;
        for(auto pp : m){
            //cout << pp.second << endl;
            v.push_back(pp.second);
        }

        return v;
    }
};
