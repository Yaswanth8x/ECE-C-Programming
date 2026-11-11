#include <stdio.h>

int binarySearch(int a[],int n,int key){
    int low=0,high=n-1;

    while(low<=high){
        int mid = (low + high)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]<key)
            low= mid +1;
        else
            high=mid-1;
    }
        return -1;
    }

int main(){
    int a[8]={15,23,34,45,56,67,78,92};
    int n=8,key=78;

    int result = binarySearch(a,n,key);

    if(result != -1){
        printf("The element is at position %d",result+1);
    }
        else{
        printf("The element is not found");
        }
    return 0;
}
