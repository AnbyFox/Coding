#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler_ABRT(int sig) {
    printf("ABRT Signal handler: %d", sig);
}

void handler_FPE(int sig) {
    printf("FPE Signal handler: %d", sig);
}

void handler_ILL(int sig) {
    printf("ILL Signal handler: %d", sig);
}

void handler_INT(int sig) {
    printf("INT Signal handler: %d", sig);
}

void handler_SEGV(int sig) {
    printf("SEGV Signal handler: %d", sig);
}

void handler_TERM(int sig) {
    printf("TERM Signal handler: %d", sig);
}

int main() {
	int n;
    printf("Choose what signal to send:\n 1: SIGABRT\n 2: SIGFPE\n 3: SIGILL\n 4: SIGINT\n 5: SIGSEGV\n 6: SIGTERM\n\nInput: "); scanf("%d", &n);
    
    signal(SIGABRT, handler_ABRT);
    signal(SIGFPE, handler_FPE);
    signal(SIGILL, handler_ILL);
    signal(SIGINT, handler_INT);
    signal(SIGSEGV, handler_SEGV);
    signal(SIGTERM, handler_TERM);
    
    if(n < 1) n = 1;
    if(n > 6) n = 6;

    switch(n) {
        case 1:
            raise(SIGABRT);
            break;
        case 2:
            raise(SIGFPE);
            break;
        case 3:
            raise(SIGILL);
            break;
        case 4:
            raise(SIGINT);
            break;
        case 5:
            raise(SIGSEGV);
            break;
        case 6:
            raise(SIGTERM);
            break;
    }

    return 0;
}
