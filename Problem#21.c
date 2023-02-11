/*Program to multiply two arrays*/

#include<stdio.h>
void main(){
    int i,j,m,size,sum,Matrix1[10][10],Matrix2[10][10],finalMatrix[10][10];

    printf("Enter SQUARE Matrix Size");
    scanf("%d",&size);

    printf("Enter Elements of First Matrix");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&Matrix1[i][j]);
        }
    }


    printf("Enter Elements of Second Matrix");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&Matrix2[i][j]);
        }
    }


    /*multiplying the matrices*/

    for ( i = 0; i < size; i++){
        for ( j = 0; j < size; j++){
            sum=0;
            for (m = 0; m < size; m++){
                sum=sum+Matrix1[i][m]*Matrix2[m][j];
                finalMatrix[i][j]=sum;
            }
            
        }
        
    }
    

    printf("Elements of First Matrix\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d ",Matrix1[i][j]);
        }
        printf("\n");
    }


    printf(" Elements of Second Matrix\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d ",Matrix2[i][j]);
        }
        printf("\n");
    }



    printf("Elements of Final Matrix\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d ",finalMatrix[i][j]);
        }
        printf("\n");  
    }   

}