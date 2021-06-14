#include<stdio.h>
int main()
{
	char alphabet;
	printf("enter an Alphabet :");
	scanf("%c",&alphabet);
	switch(alphabet)
	{
		case 'a':
		case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("It is a vowel");
            break;
        default: 
            printf("It is a Consonant");	
	}
	return 0;
}
