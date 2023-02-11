//find the pivot element


#include<stdio.h>
int findPivotElement(int *Array, int s){
    int pivot=-1;

    if(s>0){
        pivot=0;
        for(int i=0; i<s; i++){  
        if(Array[i]>Array[i+1]){
            pivot=i+1;
            break;
        }
    }
    }
    return pivot;
}

void main(){

    int Array[]={45,51,23,26,28,33,42};
    int size=sizeof(Array)/sizeof(Array[0]);

    int pivot=findPivotElement(Array,size);

    printf("Pivot element is  %d",Array[pivot]);
}