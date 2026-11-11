#include <stdio.h>

void selectionSort(int a[],int n){
    int i,j,min,temp;
 for(i=0;i<n-1;i++){
     min=i;
     for(j=i+1;j<n;j++){
         if(a[min]>a[j]){
             min = j;
         }
     }
     if(min!=i){
         temp = a[i];
         a[i]=a[min];
         a[min]=temp;
     }
 }
}

  int main(){
      int n=5;
    int a[5]={9,7,2,3,8};

    printf("The Given Array : ");
      for(int i =0;i<n;i++){
          printf(" %d",a[i]);
      }

    selectionSort(a,n);
      printf("\nThe Sorted Array : ");

      for(int i=0;i<n;i++){
          printf(" %d",a[i]);
      }

      return 0;
  }
