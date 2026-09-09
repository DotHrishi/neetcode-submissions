class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0, right=heights.size()-1;
        int maxarea=0, area=0;

        for(int i=0;i<heights.size();i++){
            area=min(heights[left],heights[right])*(right-left);

            maxarea=max(area,maxarea);
            if(min(heights[left],heights[right])==heights[left]){
                left++;
            } else {
                right--;
            }
        }
        return maxarea;
    }
};
