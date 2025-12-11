#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int even_wrong = 0, odd_wrong = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) even_wrong++;
                else odd_wrong++;
            }
        }

        if (even_wrong != odd_wrong)
            cout << -1 << endl;
        else
            cout << even_wrong << endl;
    }
    return 0;
}

