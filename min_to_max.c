int countNonMinimum(int a[], int n) {
    if (n == 0) return 0;

    int minimum = a[0];
    int countMin = 0;

    // Find the minimum
    for (int i = 0; i < n; i++) {
        if (a[i] < minimum) {
            minimum = a[i];
        }
    }

    // Count occurrences of minimum
    for (int i = 0; i < n; i++) {
        if (a[i] == minimum) countMin++;
    }

    return n - countMin;
}
