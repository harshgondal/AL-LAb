#include<stdio.h>
int EuclidGCD( int m,  int n) {
    int t;
    if(m>n){
        t=n;
    }
    else t=m;
    int r=-1;
    int count=0;
    while(t!=0){
        count++;
        if(m%t==0){
            if(n%t==0){
            printf("\n%d\n",count);
            return t;
        }
        else t--;
    }
    else{
        t=t-1;
    }
}

return -1;;
}
int main(){
    int a;int b;
    scanf("%d%d",&a,&b);
    printf("%d\n",EuclidGCD(a,b));
    return 0;
}