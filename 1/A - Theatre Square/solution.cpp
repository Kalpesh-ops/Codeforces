#include <iostream>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    long long n, m, a;
    if (std::cin >> n >> m >> a) {
        long long rows = (n + a - 1) / a;
        long long cols = (m + a - 1) / a;
        
        std::cout << rows * cols << "
";
    }
 
    return 0;
}