/*Program to find sum of rows and coloumns of Matrix*/  
#include<stdio.h>
void main(){
    int Matrix[10][10],i,j,rows,cols,sum;

    printf("Enter Rows and coloumns of Matrix\n");
    printf("Rows=");
    scanf("%d",&rows);
    printf("Coloumns=");
    scanf("%d",&cols);

    for(i=0;i<rows;i++){
        for ( j = 0; j < cols; j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&Matrix[i][j]);
        }
        
    }


    printf(" Current Matrix Elements \n");
    for(i=0;i<rows;i++){
        for ( j = 0; j < cols; j++){
            printf(" %d ",Matrix[i][j]);
            
        }
        printf(" \n ");
        
    }


    for(i=0;i<rows;i++){
        sum=0;
        for ( j = 0; j < cols; j++){
            sum=sum+Matrix[i][j];
        }
        Matrix[i][cols]=sum;
        
        
    }

    for(i=0;i<rows;i++){
        sum=0;
        for ( j = 0; j < cols; j++){
            sum=sum+Matrix[j][i];
        }
        Matrix[rows][i]=sum;
        
        
    }

    cols++;
    rows++;

    printf ("sum of rows and coloumns\n");
    for(i=0;i<rows;i++){
        for ( j = 0; j < cols; j++){
            if(i==rows-1&&j==cols-1){
                  printf(" ");
            }else{
                 printf(" %d ",Matrix[i][j]);
               
            }
           
        }
        printf("\n");
        
    }
}