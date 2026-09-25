class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxa = 0;
        int right = n - 1;
        int left = 0;       
        while (left < right) { //index
            int w = right - left;
            int h = min(height[right], height[left]);
            int area = w * h;
            maxa = max(area, maxa);
            if (height[left] < height[right]) {//moves pointer away from shorter line
                left++;
            }
            else {
                right--;
            }
        }
        return maxa;
    }
};