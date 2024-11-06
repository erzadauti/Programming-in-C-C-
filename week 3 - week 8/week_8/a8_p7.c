/*CH-230-A
A8p7.c
Erza Dauti
edauti@constructor.university
*/


#include <stdio.h>

int main() {
    char line[1000]; 

  /* Open the first input file */
    FILE *file1 = fopen("text1.txt", "r");
    if (file1 == NULL) {
        printf("Failed to open text1.txt\n");
        return 1;
    }

    /* Open the second input file */
    FILE *file2 = fopen("text2.txt", "r");
    if (file2 == NULL) {
        printf("Failed to open text2.txt\n");
        fclose(file1); 
        return 1;
    }

    /* Create and open the output file */
    FILE *mergeFile = fopen("merge12.txt", "w");
    if (mergeFile == NULL) {
        printf("Failed to create merge12.txt\n");
        fclose(file1); // Close the first file
        fclose(file2); // Close the second file
        return 1;
    }

    /* Read lines from the first file and write them to the outputfile */
    while (fgets(line, sizeof(line), file1) != NULL) {
        fputs(line, mergeFile);
    }

    /* Read lines from the second and append them to the outputfile */
    while (fgets(line, sizeof(line), file2) != NULL) {
        fputs(line, mergeFile);
    }

    /* Close all files */
    fclose(file1);
    fclose(file2);
    fclose(mergeFile);

    printf("Files text1.txt and text2.txt have been merged into merge12.txt\n");

    return 0;
}
