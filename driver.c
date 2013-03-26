/**
 * File: driver.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "driver.h"

int main(int argc, char **argv) {
  if (argc < 3) {
    printf("Usage: ./driver <N <Number of threads: 2, 4, 8>>\n");
    printf("                <path <Path of the file contains the workloads>>\n");
    exit(1);
  }

  // Number of threads
  int N = atoi(argv[1]);
  if (N != 2 && N != 4 && N != 8) {
    printf("Error: Number of threads should be 2, 4, 8.\n");
    exit(1);
  }

  // Open the file contains workloads
  char* path = argv[2];
  FILE* file = fopen(path, "r");
  if (file == NULL) {
    printf("Error: The file %s doesn't exist or can't be opened.\n", path);
    exit(1);
  }

  // Read the work load from file
  simulate(N, file);
}

void simulate(int N, FILE *file) {

}
