//Reversed number like 198654 to 456891

#include <stdio.h>
int main(){
    int n, remainder;
    scanf("%d", &n);
    while(n != 0){
        remainder = n%10;
        n /= 10;
        printf("%d", remainder);
    }
   
    return 0;
}

