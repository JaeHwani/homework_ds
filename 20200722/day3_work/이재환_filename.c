#include <stdio.h>
#include <stdlib.h>


// Q1.  5���� �̸��� ���̸� �Է¹޾� ���̰� ���� ���� ����� �̸��� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//     �� �̸��� 20�� �̳�



//���� ������ �̿��� ���̰� ���� � ��� ���ϱ�
/*
struct people {
	char name[20];
	int age;
};

int main() {
	struct people iden[10];
	int i=0,j=0,temp=0;

	for (int i = 0; i < 5; i++) {
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf_s("%s", iden[i].name,20);
		printf("���̸� �Է��Ͻÿ� : ");
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
	printf("�Էµ� �� �� ���� ���̰� ������ \"%d\" �� �Դϴ�.\n",iden[j].age);

	return 0;
}
*/

/*
//�������� ������� �ʰ� ���̰� ���� ���� ���ϱ�
struct people
{
	char name[20];
	int age;
}typedef pp;

int main() {
	pp person[100];
	int i, p = 0;

	for (i = 0; i < 5; i++) {
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", person[i].name);
		printf("���̸� �Է��Ͻÿ� : ");
		scanf("%d", &person[i].age);
	}

	int q = person[0].age;
	for (i = 0; i < 5; i++) {
		if (q > person[i].age) {
			q = person[i].age;
			p = i;
		}
	}

	printf("\n\n�̸� : %s  ���� : %d \n", person[p].name, person[p].age);

	return 0;
}
*/



// Q2.  �迭�� ũ�⸦ �Է¹޾� �Է¹��� ũ�⸸ŭ �Ǽ� �迭�� �����ϰ� �迭�� ���Ҹ� �Է¹��� �� 
//		�Է¹��� �ڷ� �� �հ� ����� �ݿø��Ͽ� �Ҽ� ��°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.



/*
int main() {
	int n;
	printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	double *a = (double *)malloc(sizeof(double) * n);

	int i;
	double sum = 0;

	for (i = 0; i < n; i++) {
		printf("%d��° �Ǽ� : ",i+1);
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
