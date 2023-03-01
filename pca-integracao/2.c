#include <stdio.h>
#include <stdlib.h>

void intersection(int A[], int B[], int C[]) {
    int i = 1, j = 1, k = 1;
    while (i <= A[0] && j <= B[0]) {
        if (A[i] < B[j]) {
            i++;
        } else if (A[i] > B[j]) {
            j++;
        } else {
            C[k++] = A[i++];
            j++;
        }
    }
    C[0] = k - 1;
}

int main() {
    int n, i, j;
    scanf("%d", &n);

    int A[101], B[101], C[101];
    scanf("%d", &A[0]);
    for (i = 1; i <= A[0]; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &B[0]);
    for (i = 1; i <= B[0]; i++) {
        scanf("%d", &B[i]);
    }

    intersection(A, B, C);

    for (i = 2; i <= n; i++) {
        int D[101];
        scanf("%d", &D[0]);
        for (j = 1; j <= D[0]; j++) {
            scanf("%d", &D[j]);
        }
        intersection(C, D, C);
    }

    printf("%d ", C[0]);
    for (i = 1; i <= C[0]; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
