#include <stdio.h>

void toh(int diskcount, char S, char D, char T) {
    if (diskcount == 1) {
        printf("\n move disk 1 from %c to %c", S, D);
        return;
    }
     toh(diskcount - 1, S, T, D);
        printf("\n move disk %d from %c to %c", diskcount, S, D);
    toh(diskcount - 1, T, D, S);
int main() {
    int n;
    printf("Enter the number of disks: ");
    if (scanf("%d", &n) != 1) return 1;
    
    toh(n, 'S', 'D', 'T');
    printf("\n");
    return 0;
}
