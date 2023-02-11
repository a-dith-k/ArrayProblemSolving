#include<stdio.h>
void main(){
    int i,j,limit1,limit2,Array1[20],Array2[20],finalArray[20],temp;
    printf("enter the number of elements to be sorted in first Array");
    scanf("%d",&limit1);
    for(i=0;i<limit1;i++){
        printf("element - %d : ",i);
        scanf("%d",&Array1[i]);
    }


     printf("enter the number of elements to be sorted in second Array");
    scanf("%d",&limit2);
    for(i=0;i<limit2;i++){
        printf("element - %d : ",i);
        scanf("%d",&Array2[i]);
    }
    int limit=limit1+limit2;


    for(i=0;i<limit1;i++){
        finalArray[i]=Array1[i];
    }
    for(i=limit1,j=0;i<limit;i++,j++){
        finalArray[i]=Array2[j];
    }
     
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            if(finalArray[i]<finalArray[j]){
                temp=finalArray[i];
                finalArray[i]=finalArray[j];
                finalArray[j]=temp;
                
            }
        }
    }


    for(i=0;i<limit;i++){
        printf("%d",finalArray[i]);
    }

}