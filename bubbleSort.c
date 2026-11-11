#include <stdio.h>

void bubbleSort(int a[],int n){
    int i,j,temp;

    for(i=0;i<n-1;i++){
      int  swapped = 0;
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
              swapped=1;
            }
        }
        if(!swapped)
            break;
    }
}
int main(){
  int a[8]={45, 34, 15, 23, 92, 67, 56, 78};
  int n=8;

  printf("Given array : ");
  for(int i=0;i< n;i++){
    printf(" %d",a[i]);
  }

  bubbleSort(a,n);
  printf("\nThe sorted array : ");
  for(int i=0;i<n;i++){
    printf(" %d",a[i]);
  }

  return 0;
}
