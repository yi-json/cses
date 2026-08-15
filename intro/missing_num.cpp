#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    ll n;
    cin >> n;
    ll sum = 2 * n - 1, arrSum = 0;
    for (ll i = 0; i < n - 1; ++i) {
        ll x;
        cin >> x;
        sum += i;
        arrSum += x;
    }
    cout << sum - arrSum << endl;
}
