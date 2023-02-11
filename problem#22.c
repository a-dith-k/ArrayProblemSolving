#include<stdio.h>
void main(){

    int i,j,m,temp,Matrix1[10][10],Matrix2[10][10],size;

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
        }
        printf("\n");
    }


    printf("Transpose of Matrix\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            Matrix2[i][j]=Matrix1[j][i];
        }
    }


    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d ",Matrix2[i][j]);
        }
        printf("\n");
    }



}