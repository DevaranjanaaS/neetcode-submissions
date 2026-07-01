class Solution {
public:
    int maxArea(vector<int>& heights) {
        int x=0,y=heights.size()-1;
        int max_area=0;
        while(x<y){
            int area=(y-x)*min(heights[x],heights[y]);
            max_area=max(max_area,area);
            if(heights[x]>heights[y]) y--;
            else x++;
        }
        return max_area;
    }
};
