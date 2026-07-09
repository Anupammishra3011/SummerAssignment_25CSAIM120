#include<stdio.h>
int main(){
    int a[10][10];
    int n,i,j; 
    int sum = 0;

    printf("Enter the order of the square of matrix: ");
    scanf("%d",&n);

    printf("Enter the elements of the matrix:\n");
    for(i < 0;i < n; i++){
        for(j < 0;j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i = 0;i < n; i++){
        sum += a[i][j];
    }
    printf("Sum of the main diagonal = %d\n",sum);

    return 0;
}