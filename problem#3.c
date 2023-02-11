#include<stdio.h>
void main(){
    int limit,Array[100],result=0;
    printf("Enter the Array Size");
    scanf("%d",&limit);

    printf("Enter the Array elements\n");
    for(int i=0;i<limit;i++){
      printf("Element - %d: ",i );
        scanf("%d",&Array[i]);
    }
    for(int i=0;i<limit;i++){
        result=result+Array[i];
    }
    printf("Sum of Array Elements=%d",result);
}