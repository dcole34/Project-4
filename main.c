#include <stdio.h>          // Standard input/output library
#include <stdlib.h>         // Standard library
#include <pthread.h>        // POSIX threads library
#include "thread.h"        

int main(int argc, char *argv[]) {
    // check if the correct number of command line arguments is provided
    if (argc != 4) {
        printf("Usage: %s <input_file> <output_file> <seed>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // get command line arguments
    const char *input_file = argv[1];
    const char *output_file = argv[2];
    unsigned int seed = atoi(argv[3]);

    // initialize memory management and start threads
    initialize_memory_management(input_file, output_file, seed);

    start_and_join_threads();

    cleanup_memory_management();

    return EXIT_SUCCESS;    // return success status
}
