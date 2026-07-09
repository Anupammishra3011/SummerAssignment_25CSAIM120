#include<Stdio.h>
int main(){
    int arr[100],n,i;
    int largest,second_Largest;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i = 0;i < n;i++){
        scanf("%d",arr[i]);
    }
    largest = second_Largest = -99999;

    for(i = 0;i < n; i++){
        if(arr[i] > largest){
            second_Largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_Largest && arr[i] != largest){
            second_Largest =  arr[i];
        }
    }
    printf("Secind Largest Element = %d",second_Largest);
    return 0;
}