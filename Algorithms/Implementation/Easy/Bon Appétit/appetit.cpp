#include <iostream>

int main()
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    int bill[n];

    for (int i = 0; i < n; i++) {
        std::cin >> bill[i];
    }

    bill[k] = 0;
    int sum = 0;
    int b = 0;
    std::cin >> b;

    for (int i = 0; i < n; i++) {
        sum += bill[i];
    }

    std::cout << (b == sum / 2 ? "Bon Appetit" : std::to_string(b - sum / 2)) << std::endl;
}
