#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000000
#define L 10
int a[N];

void Redak(int i)
{
	int* p = &i;
	printf("\n ���� ����� %d", *p);
	printf("\n������ �������� �����, ���� �� �� ������� 1, ���� ��� �� ������� ����� �����");
	
}

void Dina()
{
	for (int i = 0; i < N; i++)
	{
		a[i] = i;
		printf("%d ", a[i]);
	}
	system("pause>nul");
	int* l = malloc(N * sizeof(int));
	system("pause>nul");
	printf("\n��������� ������ ��� ���������\n");
	free(l);
	printf("������� ������ ��� ���������");
	system("pause>nul");
}

void arr_make(int arr[], int min, int max) {
	int i;

	srand(time(NULL));

	for (i = 0; i < L; i++)
		arr[i] = rand() % (max + min);
}

void Piramida(int m)
{
	int k = 1;
	for (int i = 0; i < m; i++)
	{
		
	}
}

int main(void)
{

	system("chcp 1251>nul");
	int n;
B:
	printf("�������� �������:\n1. �������������� � ����� �������� ������������� ��� ��������� � ��� �� ����������� ����\n2. ������������ �������� � �������� ������� �� ������ �������� ��������� ���� int. �������� ��������� ������� ������ ���� ����� �������� �� ��������.\n3. ������� ��� ������ �� ����� ������� ������� ������������ ����� (��� ������ ���������� � �������� ��������� �������)\n4. ��������� ���������, ������������ ����������� �������\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
	{
		int i;
	A:
		printf("������� ����� ");
		scanf_s("%d", &i);
		Redak(i);
		int s;
		scanf_s("%d", &s);
		switch (s)
		{
		case 1:
		{
			goto A;
			break;
		}
		default: {
			goto B;
			break;
		}
		}
	}
	case 2: {
		Dina();
		goto B;
	}
	case 3: {
		int arrI[L], i;

		arr_make(arrI, 7,40);

		for (i = 0; i < L; i++)
			printf("%d ", arrI[i]);
		printf("\n");
		goto B;
	}

	case 4: {

	}
	default:
		break;
	}

}