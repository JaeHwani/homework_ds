#include <stdio.h>
#include <stdlib.h>


// Q1.  5명의 이름과 나이를 입력받아 나이가 가장 작은 사람의 이름과 나이를 출력하는 프로그램을 작성하시오.
//     ※ 이름은 20자 이내



//버블 정렬을 이용한 나이가 가장 어린 사람 구하기
/*
struct people {
	char name[20];
	int age;
};

int main() {
	struct people iden[10];
	int i=0,j=0,temp=0;

	for (int i = 0; i < 5; i++) {
		printf("이름을 입력하시오 : ");
		scanf_s("%s", iden[i].name,20);
		printf("나이를 입력하시오 : ");
		scanf_s("%d", &iden[i].age);
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			if (iden[j].age > iden[j + 1].age) {
				temp = iden[j].age;
				iden[j].age = iden[j + 1].age;
				iden[j + 1].age = temp;
			}
		}
	}
	printf("입력된 값 중 가장 나이가 어린사람은 \"%d\" 살 입니다.\n",iden[j].age);

	return 0;
}
*/

/*
//버블정렬 사용하지 않고 나이가 가장 어린사람 구하기
struct people
{
	char name[20];
	int age;
}typedef pp;

int main() {
	pp person[100];
	int i, p = 0;

	for (i = 0; i < 5; i++) {
		printf("이름을 입력하시오 : ");
		scanf("%s", person[i].name);
		printf("나이를 입력하시오 : ");
		scanf("%d", &person[i].age);
	}

	int q = person[0].age;
	for (i = 0; i < 5; i++) {
		if (q > person[i].age) {
			q = person[i].age;
			p = i;
		}
	}

	printf("\n\n이름 : %s  나이 : %d \n", person[p].name, person[p].age);

	return 0;
}
*/



// Q2.  배열의 크기를 입력받아 입력받은 크기만큼 실수 배열을 생성하고 배열의 원소를 입력받은 후 
//		입력받은 자료 및 합과 평균을 반올림하여 소수 둘째자리까지 출력하는 프로그램을 작성하시오.



/*
int main() {
	int n;
	printf("배열의 크기를 입력하시오 : ");
	scanf("%d", &n);
	double *a = (double *)malloc(sizeof(double) * n);

	int i;
	double sum = 0;

	for (i = 0; i < n; i++) {
		printf("%d번째 실수 : ",i+1);
		scanf("%lf", &a[i]);
	}
	for (i = 0; i < n; i++) {
		printf("%.2lf\t", a[i]);
		sum += a[i];
	}
	printf("\nhap : %.2lf\n", sum);
	printf("avg : %.2lf\n", sum / n);
}
*/
