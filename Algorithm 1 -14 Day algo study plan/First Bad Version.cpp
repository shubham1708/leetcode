// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
//done by using binary search
class Solution {
public:
    int firstBadVersion(int n) {
        int pivot,left=1,right=n;
        while(left<right){
            pivot=left+(right-left)/2;
            if(isBadVersion(pivot)){
                right=pivot;
            }else{
                left=pivot+1;
            }
        }
        return left;
    }
};
