#include <stdio.h>

#define ll long long 

/**
 * @brief solve for weird-algorithm problem
 *
 * The "weird algorithm" is another name for collatz's conjecture.
 * The implementation is trivial.
 *
 * @return success code
 *
 * @timecomplexity O(log n) (well, in theory...)
 * @spacecomplexity O(1)
 */
int main(){
    ll n;
    scanf("%lld", &n);

    printf("%lld ", n);

    while (n != 1) {
        if (n % 2 == 0) 
            n = n/2;
        else 
            n = 3*n + 1;
        printf("%lld ", n);
    }

    return 0;
}
