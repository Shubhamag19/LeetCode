class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(string s: strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }
        vector<vector<string>> res;
        for(auto itr: mp){
            res.push_back(itr.second);
        }
        return res;
    }
};
