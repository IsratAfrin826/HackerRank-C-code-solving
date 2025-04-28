
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);


    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int q;
    cin >> q;


    while (q--) {
        int query;
        cin >> query;


        auto it = lower_bound(v.begin(), v.end(), query);


        if (it != v.end() && *it == query) {
            cout << "Yes " << (it - v.begin() + 1) << endl;
        } else {
            cout << "No " << (it - v.begin() + 1) << endl;
        }
    }

    return 0;
}
