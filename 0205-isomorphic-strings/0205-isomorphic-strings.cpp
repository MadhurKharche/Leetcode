class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map;
        unordered_set<char> set;
        
        for(int i=0; i<s.length(); i++){
            if(map.count(s[i]))
                continue;
            else if(set.count(t[i])){
                return false;
            }
            else{
                map[s[i]] = t[i];
                set.insert(t[i]);
            }
                
        }
        
        for(int i=0; i<s.length(); i++){
            s[i] = map[s[i]];
        }
        
        return s==t;
    }
};