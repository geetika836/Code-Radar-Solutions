#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        //spaces
        for(int j=1;j<=n-i-1;j++){
            printf(" ");
        }
        //stars
        for(int j=1;j<=(2*i)+1;j++){
            printf("*");
        }
        //spaces
        for(int j=1;j<=n-i-1;j++){
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}