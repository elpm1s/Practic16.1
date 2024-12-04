#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

double* full_elements(double* ptr_array, int n); //���������� ������� ���������� ����������� �������
double* calc_elements(double* ptr_array, int n); //��������� ��������� �������
int put_elements(double* ptr_array, int size); //������ ��������� �������

int main()
{
	setlocale(LC_ALL, "RUS");

	double* ptr_array;//��������� �� ���������� ������������ ������
	double* ptr_arrayc;//��������� �� ��������� ���������� ������������ ������

    //���� ������� ������� � ����������
	int size;
	printf("%s", "������� ������ �������:\n");
	scanf("%d", &size);

	//��������� ������ ��� ������ � ������� ������� malloc()
	ptr_array = (double*)malloc(size * sizeof(double));

	if (ptr_array == NULL) {
		puts("error");
		return -1;
	}

	//��������� ������ ��� ��������� ������ � ������� ������� malloc()
	ptr_arrayc = (double*)malloc(size * sizeof(double));

	if (ptr_arrayc == NULL) {
		puts("error");
		return -1;
	}

	full_elements(ptr_array, size); //���������� ������� ���������� ����������� �������

	put_elements(ptr_array, size); //������ ������� 

	calc_elements(ptr_array, size); //��������� ��������� ������� � ������

	put_elements�(ptr_array, size); //������ ������� ����� ���������

	//������������ ������
	free(ptr_array);
	free(ptr_arrayc);

	return 0;

}

//���������� ������� ���������� ����������� �������
double* full_elements(double* ptr_array, int n)
{
	printf("������� �������� �������:\n");
	for (int i = 0; i < n; i++) {
		printf("������� %d: ", i + 1);
		scanf("%lf", &ptr_array[i]);
	}
	return ptr_array;

}

//��������� ��������� ������� � ������
double* calc_elements(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		ptr_array[i] /= 10.0;
	}
	return ptr_array;
}

//������ ��������� �������
int put_elements(double* ptr_array, int n) {
	printf("�������� �������:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2lf ", ptr_array[i]);
	}
	printf("\n");
	return 0;
}

//������ ��������� ��������� �������
int put_elements�(double* ptr_array�, int n) {
	printf("�������� ������� ����� ��������������:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2lf ", ptr_array�[i]);
	}
	printf("\n");
	return 0;
	}