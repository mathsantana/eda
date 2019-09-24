#include <stdio.h>

void swap(int *a, int *b) {
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

void printArray(int v[], int size) {
    int i;
    for (i = 0; i < size; i++) {
	printf("%d ", v[i]);
    }

    printf("\n");
}

int main(){
    int size;
    scanf("%d", &size);

    int v[size], i;

    for (i = 0; i < size; i++){
	scanf("%d", &v[i]);
    }

    int e, j;

    for (i = 0; i < size - 1; i++) {
	for (j = 0; j < size - 1 - i; j++) {
	    if (v[j] > v[j+1]) swap(&v[j], &v[j+1]);
	}
    }

    printArray(v, size);
}

