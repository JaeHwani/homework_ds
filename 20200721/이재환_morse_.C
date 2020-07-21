#include <stdio.h>

void morse(char);

char BigAlpha[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
				'P','Q','R','S','T','U','V','W','X','Y','Z' };
char SmallAlpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
				'p','q','r','s','t','u','v','w','x','y','z' };
char mor[26] = { '.-','-...','-.-.','-..','.','..-.','--.','....','..','.---','.-.','.-..',
				'--','-.','---','.--.','--.-','.-.','...','-','..-','...-','.--','-..-',
				'-.--','--..' };

int main()
{
	char scan;

	printf("알파벳을 입력하시오\n: ");
	scanf_s("%c", &scan);
	morse(scan);
	printf("프로그램을 종료합니다.\n");

	return 0;
}

void morse(char scan)
{
	for (int i = 0; i < 26; i++) {
		if (scan == BigAlpha[i] || scan == SmallAlpha[i]) {
			printf("%c 의 모르스 부호 : %c \n", scan, mor[i]);
		}
	}
}