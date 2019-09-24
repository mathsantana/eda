#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int v[size], i;

    for (i = 0; i < size; i++){
	scanf("%d", &v[i]);
    }

    int e, j;

    for (i = 0; i < size-1; i++) {
	j = i + 1;
	while(j - 1 >= 0 && v[j] < v[j-1]) {
	    e = v[j];
	    v[j] = v[j-1];
	    v[j-1] = e;
	    j--;
	}
    }

    for (i = 0; i < size; i++) {
	printf("%d ", v[i]);
    }

    printf("\n");
}
