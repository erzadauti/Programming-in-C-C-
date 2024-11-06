/*CH-230-A
A8p6.c
Erza Dauti
edauti@constructor.university
*/
  
  
  #include <stdio.h>

      int main() {
         char inputFileName1[50];
         char inputFileName2[50];
         char outputFileName[] = "results.txt";
         double num1, num2, sum, difference, product, division;

        /* Prompting the user for the names of the files */
         printf("Enter the name of the first input file: ");
         scanf("%s", inputFileName1);
         printf("Enter the name of the second input file: ");
         scanf("%s", inputFileName2);

        /* Open the first input file */
          FILE* inputFile1 = fopen(inputFileName1, "r");
              if (inputFile1 == NULL) {
         printf("Failed to open the first input file.\n");
             return 1;
    }

         /* Open the second input file */
          FILE* inputFile2 = fopen(inputFileName2, "r");
             if (inputFile2 == NULL) {
             printf("Failed to open the second input file.\n");
             fclose(inputFile1);
             return 1;
    }

         /* Read the double values */
         if (fscanf(inputFile1, "%lf", &num1) != 1) {
             printf("Failed to read a double from the first input file.\n");
             fclose(inputFile1);
             fclose(inputFile2);
             return 1;
    }

         if (fscanf(inputFile2, "%lf", &num2) != 1) {
             printf("Failed to read a double from the second input file.\n");
             fclose(inputFile1);
             fclose(inputFile2);
             return 1;
    }

          /* Calculate the results */
             sum = num1 + num2;
             difference = num1 - num2;
             product = num1 * num2;
    
             if (num2 != 0) {
            division = num1 / num2;
             } else {
             printf("Error: Division by zero is not allowed.\n");
             fclose(inputFile1);
             fclose(inputFile2);
             return 1;
    }

    /* Open the output file for writing */
     FILE* outputFile = fopen(outputFileName, "w");
         if (outputFile == NULL) {
              printf("Failed to open the output file.\n");
             fclose(inputFile1);
             fclose(inputFile2);
             return 1;
    }

    /* Write the results to the output file */
     fprintf(outputFile, "Sum: %.2lf\n", sum);
     fprintf(outputFile, "Difference: %.2lf\n", difference);
     fprintf(outputFile, "Product: %.2lf\n", product);
     fprintf(outputFile, "Division: %.2lf\n", division);

    /* Close files */
     fclose(inputFile1);
     fclose(inputFile2);
     fclose(outputFile);

     printf("Results have been written to %s.\n", outputFileName);

     return 0;
}