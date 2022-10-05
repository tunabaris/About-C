//Write a simple C program that reads a character from user and check whether it is VOWEL or CONSONANT if entered character was an alphabet using switch case statement.
//Vowel {a,e,I,i,o,u}

#include<stdio.h>
int main()
{
	char ch;

	printf("Please enter a letter.\n");
	scanf("%c",&ch);


	if((ch>='A' && ch<='Z') || ch>='a' && ch<='z'){
	switch(ch){
		case'a': printf("%c is Vowel.",ch); break;                   //We used vowel letters because of # vowel < # consonant.
		case'A': printf("%c is Vowel.",ch); break;
		case'e': printf("%c is Vowel.",ch); break;
		case'E': printf("%c is Vowel.",ch); break;
		case'I': printf("%c is Vowel.",ch); break;
		case'i': printf("%c is Vowel.",ch); break;
		case'o': printf("%c is Vowel.",ch); break;
		case'O': printf("%c is Vowel.",ch); break;
		case'u': printf("%c is Vowel.",ch); break;
        case'U': printf("%c is Vowel.",ch); break;
        default : printf("%c is Consonant.",ch);
	} }
	else
	printf("%c is not LETTER.",ch);

	return 0;
}
