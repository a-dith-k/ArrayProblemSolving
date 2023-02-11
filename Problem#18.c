/*Program to read and print 2D Array*/


#include<stdio.h>
void main(){
    int Array[3][3],i,j,rows,coloumns;

    printf("Enter the Array Elements\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Element [%d],[%d] : ",i,j);
            scanf("%d",&Array[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",Array[i][j]); 
        }
        printf("\n");
    }

}