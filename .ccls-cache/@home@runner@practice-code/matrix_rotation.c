#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int A[n][n],t0;
    printf("Enter the matrix need to rotate:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    
    int t1 = A[0][0];
    int t2 = A[n-1][0];
    int t3 = A[n-1][n-1];
    int t4 = A[0][n-1];
    
    t0 = t1;
    A[0][0] = t2;
    A[n-1][0] = t3;
    A[n-1][n-1] = t4;
    A[0][n-1] = t0;
    
    printf("After the corners rotated:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
}
