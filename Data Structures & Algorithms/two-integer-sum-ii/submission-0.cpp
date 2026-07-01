class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int x=0,y=numbers.size()-1;
        while(x<y){
            if(numbers[x]+numbers[y]>target) y--;
            else if(numbers[x]+numbers[y]<target) x++;
            else{
                ans[0]=x+1;
                ans[1]=y+1;
                break;
            }
        }
        return ans;
    }
};
