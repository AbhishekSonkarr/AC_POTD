class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        vector<char> str;
        for (auto i : s) {
            if (string("aeiouAEIOU").find(i) != string::npos) {
                str.push_back(i);
            }
        }
        reverse(str.begin(), str.end());
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (string("aeiouAEIUO").find(s[i]) != string::npos) {
                s[i] = str[count++];
            }
        }

        return s;
    }
};//time complexity: O(n)