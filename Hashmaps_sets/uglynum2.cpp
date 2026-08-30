#NOT SOLVED

class Solution {
public:
    int nthUglyNumber(int n) {
        int count = 0;

        for(int i = 1; i < INT_MAX; i++) {

            int x = i;

            while(x % 2 == 0)
                x /= 2;

            while(x % 3 == 0)
                x /= 3;

            while(x % 5 == 0)
                x /= 5;

            if(x == 1) {
                count++;
            }

            if(count == n) {
                return i;
            }
        }

        return -1;
    }
};