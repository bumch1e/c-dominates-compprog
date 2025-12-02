#include <stdio.h>

#define ll long long

/**
 * @brief solve for coin piles problem
 *
 * It can be noticed that the only way to make valid moves is when the total
 * number of coins in both piles is a multiple of three. Otherwise, the game 
 * is impossible.
 *
 * Additionally, the game will be impossible if the difference between the 
 * number of coins in the two piles is too large. In particular, the 
 * difference cannot exceed twice the size of the smaller pile.
 *
 * Another consideration is the case of 0 and 0 coins in both piles.
 * If both piles are empty, the game is already finished.
 *
 * @return success code
 *
 * @timecomplexity O(testcases)
 * @spacecomplexity O(1)
 */
int main() {
    ll testcases;


    scanf("%lld", &testcases);

    while (testcases--) {
        ll a, b;
        scanf("%lld %lld", &a, &b);

        if (a == 0 || b == 0)
            (a == b)? printf("YES\n") : printf("NO\n");
        else {
            if (2*a < b || 2*b < a)
                printf("NO\n");
            else {
                if ((a + b) % 3 == 0)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
   }

    return 0;
}
