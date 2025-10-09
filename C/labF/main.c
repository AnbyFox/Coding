#include <stdio.h>

void sep_nums(int n, int rev) {
	if(rev == 1) {
	    if (n < 10) printf("%d ", n);
	    else {
	        printf("%d ", n % 10);
	        sep_nums(n / 10, 1);
	    }
	} else {
	    if (n < 10) printf("%d ", n);
	    else {
	        sep_nums(n / 10, 0);
	        printf("%d ", n % 10);
	    }
	}
}

int main() {
    int n;
    while(1) {
    	int n;
    	printf("Type N: "); scanf("%d", &n);
    	printf("Normal: ", n); sep_nums(n, 0);
    	printf("\nReverse: ", n); sep_nums(n, 1);
    	printf("\n\n");
	}

    return 0;
}
