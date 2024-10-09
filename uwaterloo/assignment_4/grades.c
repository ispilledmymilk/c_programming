#include <stdio.h>

int main() {
    int grade;                   // Store the current grade entered
    int total_grades = 0;        // Total number of valid grades
    int passing_count = 0;       // Number of passing grades
    int failing_count = 0;       // Number of failing grades
    int sum = 0;                 // Sum of all grades
    int max_grade = -1;          // Highest grade (initialized to a low value)
    int min_grade = 101;         // Lowest grade (initialized to a high value)

    printf("Enter the grades: ");
    
    // Continuously read grades until a non-integer character is entered
    while (scanf("%d", &grade) == 1) {
        // Check if the grade is valid
        if (grade >= 0 && grade <= 100) {
            total_grades++;  // Increment total number of valid grades
            sum += grade;    // Add the grade to the sum

            // Check if the grade is passing or failing
            if (grade >= 50) {
                passing_count++;
            } else {
                failing_count++;
            }

            // Update the highest grade if needed
            if (grade > max_grade) {
                max_grade = grade;
            }

            // Update the lowest grade if needed
            if (grade < min_grade) {
                min_grade = grade;
            }
        }
    }

    // Calculate the average of the grades
    double average = (double)sum / total_grades;

    // Print the statistics
    printf("Number of students passed: %d\n", passing_count);
    printf("Number of students failed: %d\n", failing_count);
    printf("Average grade: %.2f\n", average);
    printf("Highest grade: %d\n", max_grade);
    printf("Lowest grade: %d\n", min_grade);

    return 0;
}
