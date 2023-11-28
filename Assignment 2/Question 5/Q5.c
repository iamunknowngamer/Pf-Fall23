#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int limit = pow(n, 3);

    printf("Ramanujan-Hardy numbers less than %d^3:\n", n);

    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            for (int c = a + 1; c <= n; c++) {
                for (int d = c; d <= n; d++) {
                    if ((a * a * a + b * b * b) == (c * c * c + d * d * d) && (a != c || b != d)) {
                        printf("%d\n", a * a * a + b * b * b);
                    }
                }
            }
        }
    }
}
//can be done using fuction too.
