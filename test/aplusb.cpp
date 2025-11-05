// mle_example.cpp
#include <iostream>
#include <vector>
#include <sys/resource.h>

int main() {
    // 申请大约 3MB 的 vector<int>
    size_t n = 3 * 1024 * 1024 / sizeof(int);
    std::vector<int> v(n, 0);

    std::cout << "Allocated vector of size " << n << std::endl;

    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    double mem_mb = usage.ru_maxrss / 1024.0; // ru_maxrss 单位 KB
    std::cerr << "Memory used: " << mem_mb << " MB" << std::endl;

    return 0;
}
