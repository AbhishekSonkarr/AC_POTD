class Solution {
public:
    int countPrimes(int n) {
        vector<bool> p(n + 1, true);
        p[0] = p[1] = false;

        for (int i = 2; i * i < n; i++) {

            for (int j = i * i; j < n; j += i) {
                p[j] = false;
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (p[i])
                ++count;
        }
        return count;
    }
};