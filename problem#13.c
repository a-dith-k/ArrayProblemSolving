#include<stdio.h>
void main(){
    int i,j,s,limit,Array[10],temp,newValue,finalArray[10],t;
    printf("enter the number of elements to input");
    scanf("%d",&limit);
    printf("Enter %d Elements to insert ",limit);
    for(i=0;i<limit;i++){
        printf("Element - %d :",i);
        scanf("%d",&Array[i]);
    }
    
     for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(Array[i]>Array[j]){
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
               
        }
    }
    for(i=0;i<limit;i++){
        printf(" %d ",Array[i]);
       
    }
    printf("Enter the element to insert");
    scanf("%d",&newValue);


    if(newValue>Array[limit-1]){
        Array[limit]=newValue;
        limit++;
    }else{
        for(i=0;i<limit;i++){
        if(newValue<Array[i]){
                t=i; 
                break;
            }
            }
        for(i=limit-1;i>=t-1;i--){
                Array[i+1]=Array[i];
            }
        Array[t]=newValue;
        limit++;
        printf(" final Sorted Array");
    for(i=0;i<limit;i++){
        printf(" %d ",Array[i]);
       
    }

    }
    


    printf(" final Sorted Array");
    for(i=0;i<limit;i++){
        printf(" %d ",Array[i]);
       
    }


} 