class Solution {
public:
    int findClosest(int x, int y, int z) {
        int m1 = abs(z-x);
        int m2 = abs(z-y);
        if(m1>m2){
            return 2;
        }
        else if(m1<m2){
            return 1;
        }
        else{
            return 0;
        }
    }
};
