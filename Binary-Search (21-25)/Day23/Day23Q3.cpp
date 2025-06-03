class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;

        int l = 1, h = x / 2;
        
        while(l <= h){
            int mid = l + (h - l) / 2;
            
            if((long long)mid * mid == x) 
                return mid;
            else if((long long)mid * mid < x)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return l - 1;
    }
};