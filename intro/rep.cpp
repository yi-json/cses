#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    string dna;
    cin >> dna;
    int ans = 0, cnt = 0;
    std::optional<char> flag;

    for (char ch : dna) {
        if (flag.has_value()) {
            if (flag != ch) {
                cnt = 1;
                flag = ch;
            } else {
                cnt++;
            }
        } else {
            flag = ch;
            cnt++;
        }
        ans = std::max(ans, cnt);
    }
    std::cout << ans << std::endl;

    return 0;
}
