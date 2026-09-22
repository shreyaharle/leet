class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> count;
        for (int num:nums){
            count[num]++;
        }
        //map to pair
        vector <pair<int,int>> arr;
        for (auto p:count){
            arr.push_back({p.second,p.first});
        }

        //sort pair so that we can take top k
        sort(arr.rbegin(),arr.rend());
        //add top k to vector
        vector <int> result;
        for (int i = 0;i<k;i++){
            result.push_back(arr[i].second);
        }
        return result;
    }
};