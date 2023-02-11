#include<stdio.h>
void main(){
    int i,j,limit,Array[10],temp;
    printf("enter the number of elements to input");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        printf("Element - %d :",i);
        scanf("%d",&Array[i]);
    }
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(Array[i]<Array[j]){
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
               
        }
    }
    printf("Array elements in sorted Order Are:");
    for(i=0;i<limit;i++){
        printf("%d",Array[i]);
    }
}