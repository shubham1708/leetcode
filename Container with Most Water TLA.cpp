/*
This code works fine for practice and understanding but in case of contest submission it shows TLA

*/



class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int max=0;
        for(long long int i=0;i<height.size();i++){
             for(long long int j=i+1;j<height.size();j++){
                 if(height[j]>=height[i]){
                     if(height[i]*(j-i)>max){
                     max=height[i]*(j-i);
                     }
                 }else{
                     if(height[j]*(j-i)>max){
                     max=height[j]*(j-i);
                     }
                 }
             }
        }
        return max;
       
    }
};
