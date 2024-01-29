#include<stdio.h>
int middleschool(int a,int b){
    int arr[50];
    int brr[50];
    int k=0;
    int d=0;
    int isprime;int prime;
    int count=0;
    for(int i=2;i<=a;i++){
        count++;
        if(a%i==0){
            a=a/i;
            isprime=1;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
            if(isprime==1) arr[k++]=i;
            i--;
        }
    }
       for(int i=0;i<k;i++){
       printf("%d\t",arr[i]);
     }
    for(int i=2;i<=b;i++){
        count++;
        if(b%i==0){
            b=b/i;
            prime=1;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
            if(prime==1) brr[d++]=i;
            i--;
        }
    }
    printf("\n");
         for(int i=0;i<d;i++){
        printf("%d\t",brr[i]);
    }
    int prod=1;
    for(int i=0;i<k;i++){
        count++;
        for(int j=0;j<d;j++){
            if(arr[i]==brr[j]){
            prod=prod*arr[i];
            d--;
            for(int e=j;e<d;e++){
                brr[e]=brr[e+1];
            }
            break;
            }
        }
    }
    printf("\n");
    printf("%d\n",count);
    printf("\n");
    return prod;
//     for(int i=0;i<k;i++){
//         printf("%d\t",arr[i]);
//     }
}
int main(){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    printf("\n");
    printf("%d",middleschool(a,b));
    return 0;
}