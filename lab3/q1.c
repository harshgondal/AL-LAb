#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[50];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int upcount=0;
    // int upcount1=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            upcount++;
            if(a[i]>a[j]){
                upcount++;
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("%d\n",upcount);
}