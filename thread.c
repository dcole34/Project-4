#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "thread.h"

// structure for passing arguments to the thread function
typedef struct {
    int process_num;
    char *input_file;
} ThreadArgs;

// function to simulate memory accesses for a process
void simulate_memory_accesses(int process_num, const char *input_file) {
    printf("Simulating memory accesses for process %d using input file: %s\n", process_num, input_file);
}

// thread function to represent each "process"
void *process_thread(void *arg) {
    ThreadArgs *args = (ThreadArgs *)arg;
    int process_num = args->process_num;
    const char *input_file = args->input_file;
    free(args); // free allocated memory for ThreadArgs structure

    printf("Thread for process %d started\n", process_num);
    
    // simulate memory accesses for the process
    simulate_memory_accesses(process_num, input_file);

    printf("Thread for process %d finished\n", process_num);
    return NULL;
}

