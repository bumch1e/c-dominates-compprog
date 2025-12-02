#include <stdio.h>

#define ll long long

/**
 * @brief solve for repetitions problem
 *
 * Nothing to explain. You just have to check whether the
 * current letter counts toward the streak or not, update it, and save it
 * if it is the longest streak.
 *
 * @return success code
 *
 * @timecomplexity O(n)
 * @spacecomplexity O(1)
 */
int main(){
    ll n;

    scanf("%lld", &n);

    ll streak = 1; 
    ll longest = 1;

    char previous = getchar();

    char actual;

    while ((actual = getchar()) != EOF) {
        if (previous == actual) {
            streak++;
            if (streak > longest)
                longest = streak;
        }
        else {
            streak = 1;
        }
        previous = actual;
    }

    printf("%lld", longest);

    return 0;
}
