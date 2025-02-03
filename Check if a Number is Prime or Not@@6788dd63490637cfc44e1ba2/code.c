#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int cnt=0;
    if(a<=1){
        printf("Not Prime");
    }
    else{
        for(int i=1;i<=a;i++){
            if(a%i==0){
                cnt+=1;
            }
        }
        if(cnt==2){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}