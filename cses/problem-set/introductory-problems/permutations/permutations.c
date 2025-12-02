#include <stdio.h>

#define ll long long

/**
 * @brief solve for permutations problem
 *
 * A beautiful permutation consists of any ordering of n numbers
 * where the difference between adjacent elements is not equal to 1. 
 * Given these circumstances, it can be noticed that any n has a beutiful
 * permutation (except for 2 and 3) by taking the even numbers up to n and 
 * separating them from the odd numbers. In this case, the solution first 
 * prints all the even numbers and then the odds ones with n placed in the 
 * middle.
 *
 * @return success code
 *
 * @timecomplexity O(n)
 * @spacecomplexity O(1)
 */
int main() {
    ll n;
    scanf("%lld", &n);

    if (n == 2 || n == 3)
        printf("NO SOLUTION");
    else {
        for (ll i = 2; i <= n; i = i + 2)
            printf("%lld ", i);
        for (ll j = 1; j <= n; j = j + 2)
            printf("%lld ", j);
    }

    return 0;
}
