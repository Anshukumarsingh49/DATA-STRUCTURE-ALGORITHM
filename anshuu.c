#include<stdio.h>
int main()
int n,i,j,min,temp;
int arr[100];
printf("enter number of element:");
scanf("%d",&n);
printf("enter element:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++){
min=i;
for(j=i+1;j<n;j++){
if(arr[j]<arr[min]){
min=j;
}
}
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}

printf("sorted array:\n");
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
return0;
} 