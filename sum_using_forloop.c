#include<stdio.h>
int sum(int arr[], int n) {
 int s = 0;
 int i;
 for (i=0;i<n;i++){
 s += arr[i];
 }
 return s;
}
int main() {
 int arr[100];
 int i,j,k,n;
 printf("Enter size of array ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("%dth element ",i+1);
 scanf("%d",&arr[i]);
 }
}
int sum(int arr[], int n) {
 int s = 0;
 int i;
 for (i=0;i<n;i++){
 s += arr[i];
 }
 return s;
}
int ret_z(){
 return 0;
}
void hello(){
 printf("hello");
}