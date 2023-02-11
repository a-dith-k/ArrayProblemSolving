/*Program to find determinant of a matrix*/


#include<stdio.h>
void main(){

     int Matrix[10][10],i,j,x,y,z,det;

   printf("Enter  a 3x3  Matrix\n");
   

    for(i=0;i<3;i++){
        for ( j = 0; j <3; j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&Matrix[i][j]);
        }
        
    }

     printf(" Current Matrix Elements \n");
    for(i=0;i<3;i++){
        for ( j = 0; j < 3; j++){
            printf(" %d ",Matrix[i][j]);
             
        }
        printf("\n");
        
    }

      x=Matrix[0][0]*((Matrix[1][1]*Matrix[2][2])-(Matrix[1][2]*Matrix[2][1]));
      y=Matrix[0][1]*((Matrix[1][0]*Matrix[2][2])-(Matrix[1][2]*Matrix[2][0]));
      z=Matrix[0][2]*((Matrix[1][0]*Matrix[2][1])-(Matrix[1][1]*Matrix[2][0]));
     

    det=x-y+z;

     printf("determinant=%d",det);


}

