// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      //binary serach implementation
        int s=0;
        int e=n;
        while(s<e){
            int mid = s+(e-s)/2;
            if(isBadVersion(mid)){
                e = mid;
            }
            else{
                s= mid+1;
            }
        } 
        return s; // imp to note we are returning the start point
    }
};
