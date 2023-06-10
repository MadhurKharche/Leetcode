class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        bool flag = 0;
        for(int i=0;i<m.size();i++){
            auto l = lower_bound(m[i].begin(), m[i].end(), t);
            if(l != m[i].end() && *l == t){
                flag = 1;
                break;
            }
        }
        return flag;
    }
};