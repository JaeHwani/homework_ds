#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void morse(char);

char BigAlpha[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
				'P','Q','R','S','T','U','V','W','X','Y','Z' };
char SmallAlpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
				'p','q','r','s','t','u','v','w','x','y','z' };


int main()
{
	
	char scan;
	
	printf("���ĺ��� �Է��Ͻÿ�\n: ");
	scanf_s("%c", &scan);


	morse(scan);


	printf("���α׷��� �����մϴ�.\n");


	return 0;

}

void morse(char scan)
{

	if (scan == BigAlpha[0] || scan == SmallAlpha[0]) {
		printf("%c �� �𸣽� ��ȣ :  . -  \n", scan);
	}
	else if (scan == BigAlpha[1] || scan == SmallAlpha[1]) {
		printf("%c �� �𸣽� ��ȣ : - . . .  \n", scan);
	}
	else if (scan == BigAlpha[2] || scan == SmallAlpha[2]) {
		printf("%c �� �𸣽� ��ȣ : - . - .  \n", scan);
	}
	else if (scan == BigAlpha[3] || scan == SmallAlpha[3]) {
		printf("%c �� �𸣽� ��ȣ : - . .  \n", scan);
	}
	else if (scan == BigAlpha[4] || scan == SmallAlpha[4]) {
		printf("%c �� �𸣽� ��ȣ : .  \n", scan);
	}
	else if (scan == BigAlpha[5] || scan == SmallAlpha[5]) {
		printf("%c �� �𸣽� ��ȣ : . . - .  \n", scan);
	}
	else if (scan == BigAlpha[6] || scan == SmallAlpha[6]) {
		printf("%c �� �𸣽� ��ȣ : - - .  \n", scan);
	}
	else if (scan == BigAlpha[7] || scan == SmallAlpha[7]) {
		printf("%c �� �𸣽� ��ȣ : . . . .  \n", scan);
	}
	else if (scan == BigAlpha[8] || scan == SmallAlpha[8]) {
		printf("%c �� �𸣽� ��ȣ : . .  \n", scan);
	}
	else if (scan == BigAlpha[9] || scan == SmallAlpha[9]) {
		printf("%c �� �𸣽� ��ȣ : . - - -   \n", scan);
	}
	else if (scan == BigAlpha[10] || scan == SmallAlpha[10]) {
		printf("%c �� �𸣽� ��ȣ : . - . \n", scan);
	}
	else if (scan == BigAlpha[11] || scan == SmallAlpha[11]) {
		printf("%c �� �𸣽� ��ȣ : . - . .  \n", scan);
	}
	else if (scan == BigAlpha[12] || scan == SmallAlpha[12]) {
		printf("%c �� �𸣽� ��ȣ : - -  \n", scan);
	}
	else if (scan == BigAlpha[13] || scan == SmallAlpha[13]) {
		printf("%c �� �𸣽� ��ȣ : - .  \n", scan);
	}
	else if (scan == BigAlpha[14] || scan == SmallAlpha[14]) {
		printf("%c �� �𸣽� ��ȣ : - - -   \n", scan);
	}
	else if (scan == BigAlpha[15] || scan == SmallAlpha[15]) {
		printf("%c �� �𸣽� ��ȣ : . - - .  \n", scan);
	}
	else if (scan == BigAlpha[16] || scan == SmallAlpha[16]) {
		printf("%c �� �𸣽� ��ȣ : - - . -  \n", scan);
	}
	else if (scan == BigAlpha[17] || scan == SmallAlpha[17]) {
		printf("%c �� �𸣽� ��ȣ : . - . \n", scan);
	}
	else if (scan == BigAlpha[18] || scan == SmallAlpha[18]) {
		printf("%c �� �𸣽� ��ȣ : . . .  \n", scan);
	}
	else if (scan == BigAlpha[19] || scan == SmallAlpha[19]) {
		printf("%c �� �𸣽� ��ȣ : -   \n", scan);
	}
	else if (scan == BigAlpha[20] || scan == SmallAlpha[20]) {
		printf("%c �� �𸣽� ��ȣ : . . -  \n", scan);
	}
	else if (scan == BigAlpha[21] || scan == SmallAlpha[21]) {
		printf("%c �� �𸣽� ��ȣ : . . . -  \n", scan);
	}
	else if (scan == BigAlpha[22] || scan == SmallAlpha[22]) {
		printf("%c �� �𸣽� ��ȣ : . - -   \n", scan);
	}
	else if (scan == BigAlpha[23] || scan == SmallAlpha[23]) {
		printf("%c �� �𸣽� ��ȣ : - . . -  \n", scan);
	}
	else if (scan == BigAlpha[2] || scan == SmallAlpha[24]) {
		printf("%c �� �𸣽� ��ȣ : - . - -  \n", scan);
	}
	else if (scan == BigAlpha[2] || scan == SmallAlpha[25]) {
		printf("%c �� �𸣽� ��ȣ : - - . . \n", scan);
	}

}