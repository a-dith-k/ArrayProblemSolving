/*Program to Add two Matrices of same size*/

#include<stdio.h>
void main(){
    int size,s,i,j,Matrix1[6][6],Matrix2[6][6],finalMatrix[6][6];
    printf("Enter the size of SQUARE matrix: ");
    scanf("%d",&size);
    
    printf("Enter the Elements of FIRST matrix: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Element [%d],[%d]: ",i,j);
            scanf("%d",&Matrix1[i][j]);
        }
    }


    printf("Enter the Elements of SECOND matrix: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Element [%d],[%d]: ",i,j);
            scanf("%d",&Matrix2[i][j]);
        }
    }


    /* Adding the matrices*/
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            finalMatrix[i][j]=Matrix1[i][j]+Matrix2[i][j];
        }
    }


    printf("First Matrix : \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d ",Matrix1[i][j]);
        }
        printf("\n");

    }


    printf("Second Matrix : \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d ",Matrix2[i][j]);
        }
        printf("\n");

    }




    printf("Matrix after Addition: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d ",finalMatrix[i][j]);
        }
        printf("\n");

    }

}