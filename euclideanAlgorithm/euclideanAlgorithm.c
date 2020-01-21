#include <stdio.h>

void assert(int expected, int actual, const char *testName) {
    if (expected == actual) {
	printf("%s PASSED\n", testName);
    }	

    else {
	printf("%s FAILED\n", testName);
	printf("    expected: %d | actual: %d\n", expected, actual);
    }
}

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main(void){
    assert(gcd(12,20), 4, "Test 1");
    assert(gcd(20,12), 4, "Test 2");
    assert(gcd(0,12), 12, "Test a == 0");
    assert(gcd(12,0), 12, "Test b == 0");
    return 0;
}

