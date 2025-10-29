#include <bits/stdc++.h>
using namespace std;

void f(vector<int>a, int l, int r) {
    if (l >= r) return;
    swap(a[l], a[r]);
    f(a, l + 1, r - 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    cin >> a[i];

    f(a, 0, n - 1);
    
    for (int x : a) cout << x << " ";

}
