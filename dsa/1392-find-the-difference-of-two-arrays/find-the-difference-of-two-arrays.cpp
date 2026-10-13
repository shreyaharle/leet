class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        vector<int> ans1, ans2;

        for (int num1 : s1) {
            if (s2.count(num1) == 0) {
                ans1.push_back(num1);
            }
        }

        for (int num2 : s2) {
            if (s1.count(num2) == 0) {
                ans2.push_back(num2);
            }
        }

        return {ans1, ans2};
    }
};