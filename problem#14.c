#include<stdio.h>
void main(){
     int size,i,Array[20],position,newValue;
     printf("Enter the size of Array");
     scanf("%d",&size);
     
     /*reading array elements*/
     printf("Enter %d elements",size);
     for(i=0;i<size;i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
     }

    /*printing current array elements*/
    printf("Elements now in the Array are ");
     for(i=0;i<size;i++){
        printf("%d ",Array[i]);
     }

    printf("Enter the position you wish to insert the element");
    scanf("%d",&position);

    printf("Enter the Value you wish to insert the element");
    scanf("%d",&newValue);

     for(i=size;i>position-2;i--){
        Array[i+1]=Array[i];
     }
     Array[position-1]=newValue;
     size++;

    printf("Final Array:\n");
     for(i=0;i<size;i++){
        printf("%d ",Array[i]);
     }

}