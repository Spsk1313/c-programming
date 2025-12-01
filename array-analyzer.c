#include <stdio.h>

void print_all(int *a, int n);
int max_num(int *a, int n);
int min_num(int *a, int n);
int sum(int *a, int n);
double average(int *a, int n);
void reverse_array(int *a, int n);

int main() {
	int a[] = {1, 2, 3, 4, 5};
	print_all(a, 5);
	printf("The max num in this array is: %d\n", max_num(a, 5));
	printf("The min num in this array is: %d\n", min_num(a, 5));
	printf("The sum of this array is: %d\n", sum(a, 5));
	printf("The average of this array is: %.2f\n", average(a, 5));
	reverse_array(a, 5);
	print_all(a, 5);
}

void print_all(int *a, int n) {
	for(int i = 0; i < n; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

int max_num(int *a, int n) {
	int res = *a;
	for(int i = 0; i < n; i++) {
		if(*(a + i) > res) res = *(a + i);
	}
	return res;
}

int min_num(int *a, int n) {
	int res = *a;
	for(int i = 0; i < n; i++) {
		if(*(a + i) < res) res = *(a + i);
	}
	return res;
}

int sum(int *a, int n) {
	int res = 0;
	for(int i = 0; i < n; i++) {
		res += (*(a + i));
	}
	return res;
}

double average(int *a, int n) {
	return ((sum(a, n) * 1.0) / n);
}

void reverse_array(int *a, int n) {
	int *i = a;
	int *j = a + n - 1;
	while(i < j) {
           int temp = *j;
	   *j = *i;
	   *i = temp;
	   i++;
	   j--;
	}
}
