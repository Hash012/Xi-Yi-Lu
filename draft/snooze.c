#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int secs;
time_t start;
volatile sig_atomic_t interrupted = 0;
volatile sig_atomic_t elapsed = 0;

void handler(int sig) {
    time_t now = time(NULL);

    (void)sig;
    elapsed = (sig_atomic_t)(now - start);
    interrupted = 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }

    secs = atoi(argv[1]);
    signal(SIGINT, handler);

    start = time(NULL);
    sleep(secs);

    if (interrupted) {
        printf("Slept for %d of %d secs.\nUser hits ctrl-c after %d seconds\n",
               (int)elapsed, secs, (int)elapsed);
    }

    return 0;
}
