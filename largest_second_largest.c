#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (a[i] > firstMax) {
                secondMax = firstMax;
                firstMax = a[i];
            } else if (a[i] > secondMax && a[i] != firstMax) {
                secondMax = a[i];
            }
        }

        int maxSum = firstMax + secondMax;
        printf("%d\n", maxSum);
        
    }

    return 0;
}
