class Solution {
public:
    int singleNumber(vector<int>& nums) {
      // cant use unordered map because extra space
      int ans = 0;
      for (int num: nums){
        ans = ans ^ num;
      }
      return ans;
    }
};