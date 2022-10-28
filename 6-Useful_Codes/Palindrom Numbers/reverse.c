/*Prints the numbers which are same reading with reverse to the entered value */

#include <stdio.h>

int reverse(int n){
	int  rev = 0, remainder;
	 while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
	return rev;
}

int main() {
    int num, count=0, counter=0;
    printf("Enter 3 digit integer: ");
    scanf("%d", &num);
    int i, j;
  for(i=100;i<=num;i++){
  if(reverse(i)==i && reverse(i)%111!=0){
  printf("%d ",i);
  count++;
  counter++; }
  while(count==9){
  	printf("\n");
  	count=0;
  }
}
   printf("\n#number is %d",counter);
    return 0;
}
