#include <stdio.h>
#include <math.h>

int main() {
    int grade = 0;                   // Store the current grade entered
    int total_grades = 0;        // Total number of valid grades
    int failing_count = 0;       // Number of failing grades
    int sum = 0;                 // Sum of all grades
    int max_grade = -1;          // Highest grade (initialized to a low value)
    int min_grade = 101;         // Lowest grade (initialized to a high value)
    int count_max = 0;           // Number of students with max grade
    int count_min = 0;           // Number of students with min grade
    double variance = 0;
    double sum_of_squares = 0;   // Sum of squared differences for standard deviation
    double stddev = 0;
    int a[101] = {0};            // Array to count frequency of each grade

    printf("Enter the grades: ");
    
    // Continuously read grades until a non-integer character is entered
    while (scanf("%d", &grade) == 1) {
        // Check if the grade is valid
        if (grade >= 0 && grade <= 100) {
            a[total_grades] = grade; // Count the frequency of each grade
            total_grades++;  // Increment total number of valid grades
            sum += grade;    // Add the grade to the sum

            // Check if the grade is passing or failing
            if (grade < 50) {
                failing_count++;
            }

            // Update the highest grade if needed
            if (grade > max_grade) {
                max_grade = grade;
                count_max = 1;  // Reset count for the new max grade
            } else if (grade == max_grade) {
                count_max++;    // Increment count if another max grade is found
            }

            // Update the lowest grade if needed
            if (grade < min_grade) {
                min_grade = grade;
                count_min = 1;  // Reset count for the new min grade
            } else if (grade == min_grade) {
                count_min++;    // Increment count if another min grade is found
            }
        }
    }

    // Calculate the average of the grades
    double average = (double)sum / total_grades;
    
    // stddev
    for(int i = 0; i < total_grades; i++) {
        
        variance += ((a[i]- average)*(a[i]- average));
        
    }
    double top = variance/(total_grades-1);
    stddev = sqrt(top);

    // Print the statistics
    printf("The maximal grade is: %d\n", max_grade);
    printf("The number of students who received the maximal grade is %d\n", count_max);
    printf("The minimal grade is: %d\n", min_grade);
    printf("The number of students who received the minimal grade is %d\n", count_min);
    printf("The course mean is: %0.3f\n", average);
    printf("The standard deviation is: %0.3f\n", stddev);
    printf("The number of students who failed the course is: %d\n", failing_count);

    return 0;
}
