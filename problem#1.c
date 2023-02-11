#include<stdio.h>
int main(){
    int limit,Array[10];
    printf("Enter the Array size\n");
    scanf("%d",&limit);
    printf("Enter The Array Elements\n");
    for(int i=0;i<limit;i++){
        printf("Elment  %d- -",i);
        scanf("%d",&Array[i]);
    }

    printf("Array elements are\n");
     for(int i=0;i<limit;i++){
        printf("Element %d=%d\n",i,Array[i]);
        
    }
    printf("elemets in array are");
    for(int i=0;i<limit;i++){
        printf("%d  ",Array[i]);
    }
}