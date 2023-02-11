/*Program to delete a element from desierd position*/

#include<stdio.h>
void main(){
    int size,i,position,Array[40];
    printf("Enter the size of array ");
    scanf("%d",&size);
    

    printf("Enter %d elements",size);
     for(i=0;i<size;i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
     }


     printf("The Array elements are\n");
     for(i=0;i<size;i++){
        printf("Element - %d: %d\n",i,Array[i]);
        
     }

    printf("enter the position you wish to delete");
    scanf("%d",&position);

    for(i=position;i<size-1;i++){
        Array[i]=Array[i+1];
    }
    size--;

    printf("The Current Array elements are\n");
     for(i=0;i<size;i++){
        printf("Element - %d: %d\n",i,Array[i]);
        
     }






}