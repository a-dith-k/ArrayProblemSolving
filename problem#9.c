//program to find Maximum and Minimum in an Array
#include<stdio.h>
void main(){
    int i,j,Array[10],limit,temp ;
    printf("enter the number of elements");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        printf("Element -%d :",i);
        scanf("%d",&Array[i]);
    }
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            if(Array[i]>Array[j]){
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }
    // for(i=0;i<limit;i++){
    //     printf("%d  ",Array[i]);
    // }
    printf("Maximum Value=%d\n",Array[0]);
    printf("Minimum Value=%d",Array[limit-1]);
    
}