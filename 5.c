#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n]; // Array to store scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]); // Input scores
    }

    int threshold = scores[k - 1]; // Score of the k-th participant
    int advancers = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold && scores[i] > 0) {
            advancers++;
        }
    }

    printf("%d\n", advancers); // Print result
    return 0;
}
