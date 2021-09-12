/*
This code works completely fine does not show any type of error
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxa=0;
        int i=0,j=height.size()-1;
        
        while(i<j){
            maxa=max(maxa,min(height[i],height[j])*(j-i));
            if(height[i]<height[j])i++;
            else j--;
        }
        return maxa;
       
    }
};
