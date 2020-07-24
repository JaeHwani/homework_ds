/*
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 30

// �׷����� ���� ��ķ� ǥ���ϱ� ���� ����ü ����
typedef struct graphType
{
	int n;								   // �׷����� ���� ����
	int adjMatrix[MAX_VERTEX][MAX_VERTEX]; // �׷����� ���� 30x30�� 2���� �迭
} graphType;

// ���� �׷����� �����ϴ� ����
void createGraph(graphType* g)
{
	int i, j;
	g->n = 0; // ���� ������ 0���� �ʱ�ȭ
	for (i = 0; i < MAX_VERTEX; i++)
	{
		for (j = 0; j < MAX_VERTEX; j++)
			g->adjMatrix[i][j] = 0; // �׷��� g�� ���� 2���� �迭�� ���� 0���� �ʱ�ȭ
	}
}

// �׷��� g�� ���� v�� �����ϴ� ����
void insertVertex(graphType* g, int v)
{
	if (((g->n) + 1) > MAX_VERTEX)
	{
		printf("\n �׷��� ������ ������ �ʰ��Ͽ����ϴ�!");
		return;
	}
	g->n++; // �׷��� ������ ���� n�� �ϳ� ����
}

// �׷��� g�� ���� (u, v)�� �����ϴ� ����
void insertEdge(graphType* g, int u, int v)
{
	// ���� (u, v)�� �����ϱ� ���� ���� u�� v�� �׷����� �����ϴ��� Ȯ��
	if (u >= g->n || v >= g->n)
	{
		printf("\n �׷����� ���� �����Դϴ�!");
		return;
	}
	g->adjMatrix[u][v] = 1; // ������ ������ ���� 2���� �迭�� ���� ���� 1�� ����
}

// �׷��� g�� 2���� �迭 ���� ������� ����ϴ� ����
void print_adjMatrix(graphType* g)
{
	int i, j;
	for (i = 0; i < (g->n); i++)
	{
		printf("\n\t\t");
		for (j = 0; j < (g->n); j++)
			printf("%2d", g->adjMatrix[i][j]);
	}
}

void main()
{
	int i;
	graphType* G1, * G2, * G3, * G4;
	G1 = (graphType*)malloc(sizeof(graphType));
	G2 = (graphType*)malloc(sizeof(graphType));
	G3 = (graphType*)malloc(sizeof(graphType));
	G4 = (graphType*)malloc(sizeof(graphType));
	createGraph(G1);
	createGraph(G2);
	createGraph(G3);
	createGraph(G4);

	// �׷��� G1
	for (i = 0; i < 4; i++)
		insertVertex(G1, i); // G1�� ���� 0~3 ����
	insertEdge(G1, 0, 1);
	insertEdge(G1, 0, 3);
	insertEdge(G1, 1, 0);
	insertEdge(G1, 1, 2);
	insertEdge(G1, 1, 3);
	insertEdge(G1, 2, 1);
	insertEdge(G1, 2, 3);
	insertEdge(G1, 3, 0);
	insertEdge(G1, 3, 1);
	insertEdge(G1, 3, 2);
	printf("\n G1�� ���� ���");
	print_adjMatrix(G1);

	// �׷��� G2
	for (i = 0; i < 3; i++)
		insertVertex(G2, i); // G2�� ���� 0~2 ����
	insertEdge(G2, 0, 1);
	insertEdge(G2, 0, 2);
	insertEdge(G2, 1, 0);
	insertEdge(G2, 1, 2);
	insertEdge(G2, 2, 0);
	insertEdge(G2, 2, 1);
	printf("\n\n G2�� ���� ���");
	print_adjMatrix(G2);

	// �׷��� G3
	for (i = 0; i < 4; i++)
		insertVertex(G3, i); // G3�� ���� 0~3 ����
	insertEdge(G3, 0, 1);
	insertEdge(G3, 0, 3);
	insertEdge(G3, 1, 2);
	insertEdge(G3, 1, 3);
	insertEdge(G3, 2, 3);
	printf("\n\n G3�� ���� ���");
	print_adjMatrix(G3);

	// �׷��� G4
	for (i = 0; i < 3; i++)
		insertVertex(G4, i); // G4�� ���� 0~2 ����
	insertEdge(G4, 0, 1);
	insertEdge(G4, 0, 2);
	insertEdge(G4, 1, 0);
	insertEdge(G4, 1, 2);
	printf("\n\n G4�� ���� ���");
	print_adjMatrix(G4);

	getchar();
}
*/

/*
#include <stdio.h>

int main() {
	char str[20] = "Data struct!";

	for (int i = 0; i < 20; i++) {
		printf(" %c ", str[i]);
	}
	printf("\n\n");
	printf("%d", sizeof("data struct!"));

}
*/

//�迭�ʱ�ȭ
/*
#include <stdio.h>

int main() {
	int b[2][3] = { {1,2,3},{4,5,6} };
	int q[2][3] = { 1,2,4,4,5,6 };
	char s[2][20] = { "hello","whatzup" };
	char w[3][10] = { "ww","hiru","bang" };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c", w[i][j]);
		}
	}
	
}
*/

//������ �ʱ�ȭ
#include <stdio.h>

int main() {
	char A[100];
char* ptr = &A[0];

	printf("%d", &A);
	printf("\n");

	printf("%d", A[100]);
	printf("\n");

	printf("%d", *ptr);
	printf("\n");

	printf("%d", *ptr);
	printf("\n");
}







