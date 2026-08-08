#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n;
    if (std::cin >> n) {
        std::cout << n;
        while (n > 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = n * 3 + 1;
            }
            std::cout << " " << n;
        }
    }
    std::cout << "\n";
    return 0;
}
