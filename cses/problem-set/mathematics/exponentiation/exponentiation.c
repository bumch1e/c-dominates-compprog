#include <stdio.h>

#define ll long long
#define MOD 1000000007LL


/**
 * @brief solve for exponentiation problem
 *
 * This solution uses a binary exponentiation with iterative approach.
 *
 * @return success code
 *
 * @timecomplexity O(n * log n)
 * @spacecomplexity O(1)
 */
int main() {
    ll calculations;

    scanf("%lld", &calculations);

    while (calculations--) {
        ll n1, n2;

        scanf("%lld %lld", &n1, &n2);

        n1 = n1 % MOD;
        ll result = 1;
        while (n2) {
            if (n2 & 1) 
                result = (result * n1) % MOD;
            n1 = (n1 * n1) % MOD;
            n2 >>= 1;
        }
        
        printf("%lld\n", result);
    }

    return 0;
}
