#include <stdio.h>
#include <stdlib.h>

#define ll long long

/**
 * @brief solve for increasing-array problem
 *
 * Nothing to explain. You just have to add each number one by one
 * and update it so that it has at least the same magnitude
 * as its predecessor.
 *
 * @return success code
 *
 * @timecomplexity O(n)
 * @spacecomplexity O(n)
 */
int main() {
    ll n;
    ll increases = 0;

    scanf("%lld", &n);

    ll *arr = (ll *)malloc(n * sizeof(ll));

    ll initial;
    scanf("%lld", &initial);
    arr[0] = initial;

    for (ll i = 1; i < n; i++) {
        ll elem;
        scanf("%lld", &elem);
        arr[i] = elem;
        if (arr[i] < arr[i - 1]) {
            increases += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    free(arr);

    printf("%lld", increases);

    return 0;
}
