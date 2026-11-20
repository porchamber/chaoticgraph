#include <string>
#include <vector>

void shift_left() {
    unsigned int n = 7u;
    unsigned int shifted = n << 4;
    (void)shifted;
}

void integer_sqrt() {
    int n = 50;
    int root = 0;
    while ((root + 1) * (root + 1) <= n) root += 1;
    (void)root;
}

void count_bits() {
    unsigned int n = 0b10110101u;
    int bits = 0;
    while (n != 0) {
        bits += static_cast<int>(n & 1u);
        n >>= 1;
    }
    (void)bits;
}

void is_prime() {
    int n = 97;
    bool prime = (n > 1);
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) { prime = false; break; }
    }
    (void)prime;
}

extern "C" int brisk_summit();
extern "C" void calm_vale();
extern "C" void clever_quartz();
extern "C" void still_signal();
extern "C" void lunar_orbit();

int main() {
    shift_left();
    integer_sqrt();
    count_bits();
    is_prime();
    calm_vale();
    clever_quartz();
    still_signal();
    lunar_orbit();
    return brisk_summit();
}
