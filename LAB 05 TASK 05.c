#include<stdio.h>
int main(){

  int n;
    scanf("%d",&n);
int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

int s;
scanf("%d",&s);
for (int i=s-1;i<n-1;i++){
    arr[i]=arr[i+1];
}


for(int i=0; i<n;i++){
    printf("%d ",arr[i]);
}}

