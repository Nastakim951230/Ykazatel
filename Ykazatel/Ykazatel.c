#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000000
#define L 10
#define M 15
int a[N];

void Redak(int i)
{
	int* p = &i;
	printf("\n Ваше число %d", *p);
	printf("\nХотите изменить число, если да то нажмите 1, если нет то нажмите любую цифру");
	
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
	printf("\nВыделение памяти под указатель\n");
	free(l);
	printf("Очистка памяти под указатель");
	system("pause>nul");
}

void arr_make(int arr[], int min, int max) {
	int* minyk = &min;
	int* maxyk = &max;
	for (int i = 0; i < L; i++) {
		arr[i] = rand() % (*maxyk + *minyk);
		printf("%d ", arr[i] );
	}
	printf("\n");
}

void Piramida(int arr[])
{
	int i = 0;
	int k = 1;
	while (i<M)
	{
		for (int j = 0; j < k; j++)
		{
			arr[i] = i;
			printf("%d ", arr[i]);
			i++;
		}
		k++;
		printf("\n");
	}
	
}

int main(void)
{

	system("chcp 1251>nul");
	int n;
B:
	printf("Выберите вариант:\n1. Редактирование и вывод значения целочисленной при обращении к ней из консольного окна\n2. Динамическое создание и удаление массива из одного миллиона элементов типа int. значения элементов массива должны быть равны значению их индексов.\n3. Функция для вывода на экран консоли массива произвольной длины (сам массив передается в качестве аргумента функции)\n4. используя указатели, сформировать треугольную матрицу\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
	{
		int i;
	A:
		printf("Введите число ");
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
		int arrI[L],max,min;
		printf("\nВведите максимальное число \n");
		scanf_s("%d", &max);
		printf("\nВведите минимальное число \n");
		scanf_s("%d", &min);

		arr_make(arrI, min,max);
		goto B;
	}

	case 4: {
		int arrL[M];
		Piramida(arrL);
		goto B;
	}
	default:
		break;
	}

}