#include <stdio.h>
int main() {
    char x[5]="aeiou";
    char y=[21]="bcdfghjklmnpqrstvwxyz";
    char z=[10]="0123456789";
    char a;
    scanf("%c",&a);
    if(a in x){
        printf("Vowel");
    }
    else if  (a in y){
        printf("Consonant");
    }
    else if (a in z){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}