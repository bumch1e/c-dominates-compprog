/**
 * @brief binary exponentiation with iterative approach
 *
 * A binary-exponentiation is a shortcut to calculate powers.
 * In short, x^{n} can be calculated in two ways:
 *
 * if x is odd: x*(x^2)^((n - 1)/2)
 * if x is even: (x^2)^(n/2)
 *
 * In an iterative approach, the exponent is processed using bitwise operators.
 * At each step, n2 is halved in and depending on whether it is odd or even,
 * the current base contributes to the result.
 *
 * @param n1 base
 * @param n2 exponent
 *
 * @return result of exponentiation n1^n2
 * 
 * @timecomplexity O(log n)
 * @spacecomplexity O(1)
 */
long long binPower(long long n1, long long n2) {
    long long result = 1;

    while (n2) {
        if (n2 & 1)
            result *= n1;
        n1 *= n1;
        n2 >>= 1;
    }

    return result;
}
