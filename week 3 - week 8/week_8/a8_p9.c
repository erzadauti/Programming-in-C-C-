/*CH-230-A
A8p9.c
Erza Dauti
edauti@constructor.university
*/


#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 64

/* Concatenate the contents of input files */
void concatenateFiles(int n, char *filenames[]) {
    FILE *outputFile;
    FILE *currentFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    /* Open the output file */
    outputFile = fopen("output.txt", "wb");

    if (outputFile == NULL) {
        perror("Error opening the output file");
        exit(1);
    }

    /* Loop through the input file names */
    for (int i = 0; i < n; i++) {
        /* Open the current input file */
        currentFile = fopen(filenames[i], "rb");

        if (currentFile == NULL) {
            perror("Error opening input file");
            continue; 
        }

        /* Read from the current input file in chunks */
        while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, currentFile) > 0)) {
            // Write the buffer to the output file
            fwrite(buffer, 1, bytesRead, outputFile);
        }

        fclose(currentFile);

        /* Add a newline character between file contents */
        fputc('\n', outputFile);
    }

    fclose(outputFile);
}

int main() {
    int n;

    printf("Enter the number of files: ");
    
    /* Read the number of files from the user */
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for the number of files.\n");
        return 1;
    }

    char **filenames = (char **)malloc(n * sizeof(char *));

    if (filenames == NULL) {
        perror("Memory allocation error");
        return 1;
    }

    printf("Enter the names of %d files:\n", n);

    for (int i = 0; i < n; i++) {
        filenames[i] = (char *)malloc(BUFFER_SIZE);

        if (filenames[i] == NULL) {
            perror("Memory allocation error");
            return 1;
        }

        scanf("%63s", filenames[i]);
    }

    /* Calling the function */
    concatenateFiles(n, filenames);

    /* Free memory */
    for (int i = 0; i < n; i++) {
        free(filenames[i]);
    }
    free(filenames);

    printf("Concatenated contents have been written to output.txt.\n");

    return 0;
}

