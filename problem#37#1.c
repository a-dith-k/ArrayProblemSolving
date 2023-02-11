//find pivot element using pivot element
#include<stdio.h>

int findPivotElement(int Array[], int s){
    int pivot=-1;
    if(Array[0]<Array[s-1]||s==1){
        pivot=0;
    }else{
        int start=0,  
            end  =s-1;

        while(start<=end){
            int mid=(start+end)/2;
            if(Array[mid]>Array[mid+1]){
                pivot= mid+1;
                break;
            }else if(Array[start]<Array[mid]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return pivot;

}
void main(){

    int Array[]={7,8,9,1,2,3,4,5,6};
    //int Array[]={1};
    //int Array[]={};
    //int Array[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(Array)/sizeof(Array[0]);
    int pivot=findPivotElement(Array,size);

    printf("The Pivot Element %d is found at the index %d or position %d",Array[pivot],pivot,pivot+1);
}
