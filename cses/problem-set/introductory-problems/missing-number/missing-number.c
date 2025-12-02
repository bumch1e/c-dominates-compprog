#include <stdio.h>

#define ll long long

/**
 * @brief solve for missing number problem
 *
 * Calculates the expected sum of numbers with gauss formula and
 * then just sum each number in another variable. Finally, return
 * the difference between sums.
 *
 * @return success code
 *
 * @timecomplexity O(n)
 * @spacecomplexity O(1)
 */
int main(){
    ll n;

    scanf("%lld", &n);

    ll expected_sum = (n*(n+1))/2;
    ll real_sum = 0;

    for (ll i = 0; i < n - 1; i++) {
        ll number;
        scanf("%lld", &number);
        real_sum += number;
    }

    printf("%lld", expected_sum - real_sum);

    return 0;
}
