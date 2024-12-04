#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

double* full_elements(double* ptr_array, int n); //заполнение массива значени€ми собственной функции
double* calc_elements(double* ptr_array, int n); //обработка элементов массива
int put_elements(double* ptr_array, int size); //печать элементов массива

int main()
{
	setlocale(LC_ALL, "RUS");

	double* ptr_array;//указатель на одномерный динамический массив
	double* ptr_arrayc;//указатель на изменЄнный одномерный динамический массив

    //ввод размера массива с клавиатуры
	int size;
	printf("%s", "¬ведите размер массива:\n");
	scanf("%d", &size);

	//выделение пам€ти под массив с помощью функций malloc()
	ptr_array = (double*)malloc(size * sizeof(double));

	if (ptr_array == NULL) {
		puts("error");
		return -1;
	}

	//выделение пам€ти под изменЄнный массив с помощью функций malloc()
	ptr_arrayc = (double*)malloc(size * sizeof(double));

	if (ptr_arrayc == NULL) {
		puts("error");
		return -1;
	}

	full_elements(ptr_array, size); //заполнение массива значени€ми собственной функции

	put_elements(ptr_array, size); //печать массива 

	calc_elements(ptr_array, size); //обработка элементов массива и печать

	put_elementsс(ptr_array, size); //печать массива после обработки

	//освобождение пам€ти
	free(ptr_array);
	free(ptr_arrayc);

	return 0;

}

//заполнение массива значени€ми собственной функции
double* full_elements(double* ptr_array, int n)
{
	printf("¬ведите элементы массива:\n");
	for (int i = 0; i < n; i++) {
		printf("Ёлемент %d: ", i + 1);
		scanf("%lf", &ptr_array[i]);
	}
	return ptr_array;

}

//обработка элементов массива и печать
double* calc_elements(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		ptr_array[i] /= 10.0;
	}
	return ptr_array;
}

//печать элементов массива
int put_elements(double* ptr_array, int n) {
	printf("Ёлементы массива:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2lf ", ptr_array[i]);
	}
	printf("\n");
	return 0;
}

//печать изменЄнных элементов массива
int put_elementsс(double* ptr_arrayс, int n) {
	printf("Ёлементы массива после преобразовани€:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2lf ", ptr_arrayс[i]);
	}
	printf("\n");
	return 0;
	}