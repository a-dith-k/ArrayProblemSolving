#include<stdio.h>
void main(){
    int limit,Array[100];
    printf("Enter the Array Size\n");
    scanf("%d",&limit);
    printf("Enter the Array Elements:\n");

    for(int i=0;i<limit;i++){
        printf("Element - %d: ",i );
        scanf("%d",&Array[i]);
    }
    printf("Array Elements Are:");
    for(int i=0;i<limit;i++)
    {
        printf("%d\t",Array[i]);

    }

    printf("Array Elements in Reverse Order are:");
    for(int i=limit-1;i>0;i--){
        printf("%d\t",Array[i]);
    }

}