#include <stdio.h>
int main() {
    int start=1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",start);
            start+=1;
        }
        printf("\n");
    }
    return 0;
}