#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    //upper half
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        //spaces
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("\n");
    }
        //lower half
        (for i=n-1;i>=1;i++){
            //spaces
            for(int i=1;i<=n-i;i++){
                print(" ");
            }
            //stars
            for(int i=1;i<=(2*i)-1;i++){
                printf("*");
            }
            //spaces
            for(int i=1;i<=n-i;i++){
                printf(" ");
            }
        }
        printf("\n");

    return 0;
}