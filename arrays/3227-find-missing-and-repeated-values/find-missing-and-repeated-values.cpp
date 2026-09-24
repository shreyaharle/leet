class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map <int,int> mp;
        int n = grid.size();
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid.size();j++){
                mp[grid[i][j]]++;
            }
        }
        int r = 0;
        int m = 0;

        for (int i=1;i<=n*n;i++){
            if (mp[i]==2){
                r = i;
            }
            else if (mp[i]==0){
                m = i;
            
            }
        }
        return {r,m};
    }
};