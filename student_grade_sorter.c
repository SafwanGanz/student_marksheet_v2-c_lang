#include <stdio.h>

#define MAX 5

int main() {
    int marks[MAX], i, j, temp, search, found = 0;
    char grade[MAX];
    
    for (i = 0; i < MAX; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    for (i = 0; i < MAX; i++) {
        if (marks[i] >= 90) grade[i] = 'A';
        else if (marks[i] >= 80) grade[i] = 'B';
        else if (marks[i] >= 70) grade[i] = 'C';
        else if (marks[i] >= 60) grade[i] = 'D';
        else grade[i] = 'F';
    }
    
    for (i = 0; i < MAX - 1; i++) {
        for (j = i + 1; j < MAX; j++) {
            if (marks[i] < marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
                
                temp = grade[i];
                grade[i] = grade[j];
                grade[j] = temp;
            }
        }
    }
    
    printf("\nSorted Marks and Grades:\n");
    for (i = 0; i < MAX; i++) {
        printf("Student %d: Marks = %d, Grade = %c\n", i + 1, marks[i], grade[i]);
    }
    
    printf("\nEnter marks to search: ");
    scanf("%d", &search);
    
    for (i = 0; i < MAX; i++) {
        if (marks[i] == search) {
            printf("Marks found: Student %d has %d marks with Grade %c\n", i + 1, marks[i], grade[i]);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Marks not found in the list.\n");
    }
    
    return 0;
}
