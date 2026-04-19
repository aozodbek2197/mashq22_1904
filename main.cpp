// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    int k = 2;
    rotate(v.rbegin(), v.rbegin()+k, v.rend());

    for(int x : v) cout << x << " ";
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5,1,9,7};
    sort(v.rbegin(), v.rend());
    cout << v[0] << " " << v[1];
}
