#include <stdio.h>

int main()
{ // variable declaration
    double N1, N2, N3, N4, average, exam, final_average;
    // take input
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    // calculate average
    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    // print the average
    printf("Media: %.1lf\n", average);
    // condition check for Approved Student
    if (average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    // condition check for Reproved Student
    else if (average < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    // condition check for re-exam
    else if (average >= 5.0 && average <= 6.9)
    {
        printf("Aluno em exame.\n");
        // take re-exam score
        scanf("%lf", &exam);
        printf("Nota do exame: %.1lf\n", exam);
        // calculate final average
        final_average = (average + exam) / 2;
        if (final_average >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (final_average <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        // print the final average
        printf("Media final: %.1lf\n", final_average);
    }
}