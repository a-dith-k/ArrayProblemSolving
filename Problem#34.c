// program to find element stored odd number of times 
#include<stdio.h>
void main(){
    int Array[10],i,j,size,count,flag=0,temp;

    printf("Enter the Array Size: ");
    scanf("%d",&size);

    printf("Enter the Array Elements\n");
    for(i=0;i<size;i++){
        printf("Element - %d: ",i);
        scanf("%d",&Array[i]);
    }


     printf("The Array Elements Are\n");
    for(i=0;i<size;i++){
        printf(" %d ",Array[i]);
    }
    count=0;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(Array[i]==Array[j]){
                count++;
                 if((count%2)!=0){
                flag=1;
                temp=Array[i];
                goto print;
                 }
            }
        }
        
    }
    
    print :
    if(flag==1){
        printf("\nThe Element stored Odd numkber of times is: %d",temp);
    }else{
        printf("NO elements odd number of times stored");
    }







}