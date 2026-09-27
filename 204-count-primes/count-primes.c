int countPrimes(int n) {
    if (n <= 2)
        return 0;

    int size = n / 2;

    char *prime = malloc(size);

    for (int i = 0; i < size; i++)
        prime[i] = 1;

    int limit = sqrt(n);

    for (int i = 3; i <= limit; i += 2) {
        if (prime[i / 2]) {
            for (int j = i * i; j < n; j += 2 * i) {
                prime[j / 2] = 0;
            }
        }
    }

    int count = 1;   // 2 is prime

    for (int i = 3; i < n; i += 2) {
        if (prime[i / 2])
            count++;
    }

    free(prime);

    return count;
}