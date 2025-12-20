class Solution {
public:
    int minPartitions(string n) {
        char max_ch = '0';
        for (auto ch : n)
            max_ch = max(max_ch, ch);
    return max_ch-'0';
    }
};//time complexity O(N);