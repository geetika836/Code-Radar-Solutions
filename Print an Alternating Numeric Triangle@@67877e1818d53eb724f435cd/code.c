#include <stdio.h>
int main() {
    int start=1;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",start);
            start=1-start;
        }
        printf("\n");
    }
    return 0;
}