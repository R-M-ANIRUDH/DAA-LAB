#include <stdio.h>

#define MAX_BINS 10

void bestFit(int items[], int n, int binCapacity) {
    int res = 0; // Number of bins used
    int binRemaining[MAX_BINS];

    for (int i = 0; i < n; i++) {
        int bestIdx = -1;
        int minSpace = binCapacity + 1;

        // Find the best bin for items[i]
        for (int j = 0; j < res; j++) {
            if (binRemaining[j] >= items[i] && binRemaining[j] - items[i] < minSpace) {
                bestIdx = j;
                minSpace = binRemaining[j] - items[i];
            }
        }

        // If no bin could accommodate items[i], create a new bin
        if (bestIdx == -1) {
            binRemaining[res] = binCapacity - items[i];
            res++;
        } else {
            // Place item in the best-fit bin
            binRemaining[bestIdx] -= items[i];
        }
    }

    printf("Number of bins required: %d\n", res);
}

int main() {
    int items[] = {4, 8, 1, 4, 2, 1};
    int n = sizeof(items) / sizeof(items[0]);
    int binCapacity = 10;

    bestFit(items, n, binCapacity);
    return 0;
}
