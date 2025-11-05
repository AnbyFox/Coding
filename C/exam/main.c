#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int** mass_sum(int size, int **M1, int **M2) {
	
	int **M;
	M = (int**)malloc(size*sizeof(int*));
	for(int i = 0; i < size; i++) {
		M[i] = (int*)malloc(size*sizeof(int));
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			M[i][j] = M1[i][j] + M2[i][j];
		}
	}  
	
	return M;
}

int** mass_mult(int size, int **M1, int **M2) {
	
    int **M;
	M = (int**)malloc(size*sizeof(int*));
	for(int i = 0; i < size; i++) {
		M[i] = (int*)malloc(size*sizeof(int));
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			M[i][j] = M1[i][j] * M2[i][j];
		}
	}  
	
	return M;
}

int random_num() {
	int num = rand() % 9 + 1;
	printf("(%d)", num);
	return num;
}

int main() {
	clock_t app_time = clock();
	srand(time(NULL));
	
	// 1. Create 2 randomized massives with user's size.
	
	FILE *fm = fopen("input.txt", "w");
	
	int size;
	printf("Type the size for massives: ");
	scanf("%d", &size);
	
	if(size < 2) size = 2;
	
	int **M1, **M2, **M;
	M1 = (int**)malloc(size*sizeof(int*));
	M2 = (int**)malloc(size*sizeof(int*));
	for(int i = 0; i < size; i++) {
		M1[i] = (int*)malloc(size*sizeof(int));
		M2[i] = (int*)malloc(size*sizeof(int));
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			M1[i][j] = random_num();
			//printf("%d", M1[i][j]);
			fprintf(fm, "%d ", M1[i][j]);
		}
	}
	//printf("\n");
	fprintf(fm, "\n");
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			M2[i][j] = random_num();
			//printf("%d", M2[i][j]);
			fprintf(fm, "%d ", M2[i][j]);
		}
	}
	
	printf("\n");
	for(int i = 0; i < size; i++) {
		free(M1[i]);
		free(M2[i]);
	}
	free(M1);
	free(M2);
	
	fclose(fm);
	
	// 2. Open "input.txt" and read massives. Write sum and mult results in "output.txt".

	fm = fopen("input.txt", "r");
	
	M1 = (int**)malloc(size*sizeof(int*));
	M2 = (int**)malloc(size*sizeof(int*));
	for(int i = 0; i < size; i++) {
		M1[i] = (int*)malloc(size*sizeof(int));
		M2[i] = (int*)malloc(size*sizeof(int));
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			fscanf(fm, "%d", &M1[i][j]);
		}
	}
    for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			fscanf(fm, "%d", &M2[i][j]);
		}
	}
    
    FILE *fmout = fopen("output.txt", "w");
	M = mass_sum(size, M1, M2);

	fprintf(fmout, "Sum Result = [\n");
	for(int i = 0; i < size; i++) {
	    for(int j = 0; j < size; j++) {
	    	if(j == 0) fprintf(fmout, "  ");
			fprintf(fmout, "[%d]", M[i][j]);
			if(j == (size-1)) fprintf(fmout, "\n");
	    }
	} 
	fprintf(fmout, "]\n");
	
	M = mass_mult(size, M1, M2);
	fprintf(fmout, "\nMult Result = [\n");
	for(int i = 0; i < size; i++) {
	    for(int j = 0; j < size; j++) {
	    	if(j == 0) fprintf(fmout, "  ");
			fprintf(fmout, "[%d]", M[i][j]);
			if(j == (size-1)) fprintf(fmout, "\n");
	    }
	} 
	fprintf(fmout, "]");
	
	fclose(fmout);
	
	// 3. Find the id of minimum number in the first massive and find the count of not even numbers.
	
	int min = 100, count = 0;
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if(M1[i][j] % 2 != 0) count++;
			if(min > M1[i][j]) min = M1[i][j];
		}
	}
	
	printf("\n1st massive:");
	printf("\n* Minimum number: %d", min);
	printf("\n* Count of odd numbers: %d", count);
	
	printf("\n\nMassive same numbers check:");
	
	// 4. Find the massive with the same numbers in lines.
	
	int is_same = 1;
	for(int i = 0; i < size; i++) {
        for(int j = 1; j < size; j++) {
            if(M1[i][j] != M1[0][0]) {
                is_same = 0;
                break;
            }
        }
    }
    if(is_same == 1) printf("\n* 1st massive HAS the same numbers in lines."); else printf("\n* 1st massive doesn't have the same numbers in lines.");
    
    is_same = 1;
    for(int j = 0; j < size; j++) {
        for(int i = 1; i < size; i++) {
            if(M1[i][j] != M1[0][0]) {
                is_same = 0;
                break;
            }
        }
    }
    if(is_same == 1) printf("\n* 1st massive HAS the same numbers in columns."); else printf("\n* 1st massive doesn't have the same numbers in columns.");
    
    is_same = 1;
	for(int i = 0; i < size; i++) {
        for(int j = 1; j < size; j++) {
            if(M2[i][j] != M2[0][0]) {
                is_same = 0;
                break;
            }
        }
    }
    if(is_same == 1) printf("\n* 2nd massive HAS the same numbers in lines."); else printf("\n* 2nd massive doesn't have the same numbers in lines.");
    
    is_same = 1;
    for(int j = 0; j < size; j++) {
        for(int i = 1; i < size; i++) {
            if(M2[i][j] != M2[0][0]) {
                is_same = 0;
                break;
            }
        }
    }
    if(is_same == 1) printf("\n* 2nd massive HAS the same numbers in columns."); else printf("\n* 2nd massive doesn't have the same numbers in columns.");
	
	// Cleaning memory and showing results.
	
	for(int i = 0; i < size; i++) {
		free(M1[i]);
		free(M2[i]);
		free(M[i]);
	}
	free(M1);
	free(M2);
	free(M);
	
	double elapsed = (clock() - app_time) / (double) CLOCKS_PER_SEC;
    printf("\n\nElapsed time: %.3f sec.", elapsed);
    
	return 0;
}