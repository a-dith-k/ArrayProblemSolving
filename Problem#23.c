#include<stdio.h>
void main(){

    int i,j,sum,Matrix1[10][10],size;

    printf("Enter  the SQUARE matrix size");
    scanf("%d",&size);
    
    printf("Enter the elements of  matrix\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&Matrix1[i][j]);
        }
    }


    printf("Current Matrix is\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d ",Matrix1[i][j]);
            if(i==j){
                sum=sum+Matrix1[i][j];
            }
        }
        printf("\n");
    }


    printf("sum Of Diagonals=%d",sum);
   




}