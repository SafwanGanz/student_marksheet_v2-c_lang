
# Student Marksheet v2

![C Programming](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Complete-green.svg)
![Version](https://img.shields.io/badge/Version-1.0-brightgreen.svg)

A simple C program to manage student marks, assign grades, sort them in descending order, and search for specific marks.

## Table of Contents
- [Features](#features)
- [How It Works](#how-it-works)
- [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)
- [Sample Output](#sample-output)
- [Contributing](#contributing)
- [License](#license)

## Features
- Accepts marks for 5 students
- Assigns letter grades (A, B, C, D, F) based on marks
- Sorts marks and grades in descending order
- Searches for specific marks in the sorted list
- User-friendly console interface

## How It Works
1. **Input**: Enter marks for 5 students (0-100)
2. **Grading**: Automatically assigns grades based on the following scale:
   - 90-100: A
   - 80-89: B
   - 70-79: C
   - 60-69: D
   - Below 60: F
3. **Sorting**: Uses bubble sort to arrange marks and grades in descending order
4. **Search**: Allows searching for specific marks and displays the corresponding student and grade

## Installation
1. Ensure you have a C compiler installed (e.g., GCC)
2. Clone or download this repository
3. Compile the program:
```bash
gcc student_grade_sorter.c -o student_grade_sorter
```

## Usage
1. Run the compiled program:
```bash
./student_grade_sorter
```
2. Follow the prompts:
   - Enter marks for 5 students when asked
   - View the sorted list of marks and grades
   - Enter a mark to search for in the list

### Example
```bash
Enter marks for student 1: 85
Enter marks for student 2: 92
Enter marks for student 3: 78
Enter marks for student 4: 55
Enter marks for student 5: 95

Sorted Marks and Grades:
Student 1: Marks = 95, Grade = A
Student 2: Marks = 92, Grade = A
Student 3: Marks = 85, Grade = B
Student 4: Marks = 78, Grade = C
Student 5: Marks = 55, Grade = F

Enter marks to search: 85
Marks found: Student 3 has 85 marks with Grade B
```

## Code Explanation

### Key Components
- **Constants**:
  - `#define MAX 5`: Sets the number of students to 5

- **Variables**:
  - `marks[MAX]`: Array to store student marks
  - `grade[MAX]`: Array to store corresponding grades
  - `temp`: Temporary variable for swapping
  - `search`: Stores the mark to search for
  - `found`: Flag to track if search is successful

### Main Functions
1. **Input Collection**:
```c
for (i = 0; i < MAX; i++) {
    printf("Enter marks for student %d: ", i + 1);
    scanf("%d", &marks[i]);
}
```
- Loops to collect marks for each student

2. **Grade Assignment**:
```c
for (i = 0; i < MAX; i++) {
    if (marks[i] >= 90) grade[i] = 'A';
    else if (marks[i] >= 80) grade[i] = 'B';
    // ... and so on
}
```
- Assigns grades based on mark ranges

3. **Bubble Sort**:
```c
for (i = 0; i < MAX - 1; i++) {
    for (j = i + 1; j < MAX; j++) {
        if (marks[i] < marks[j]) {
            // Swap marks and grades
        }
    }
}
```
- Sorts both marks and grades in descending order

4. **Search Functionality**:
```c
for (i = 0; i < MAX; i++) {
    if (marks[i] == search) {
        // Display found result
        found = 1;
        break;
    }
}
```
- Linear search to find a specific mark

## Sample Output
```
Enter marks for student 1: 75
Enter marks for student 2: 88
Enter marks for student 3: 92
Enter marks for student 4: 65
Enter marks for student 5: 45

Sorted Marks and Grades:
Student 1: Marks = 92, Grade = A
Student 2: Marks = 88, Grade = B
Student 3: Marks = 75, Grade = C
Student 4: Marks = 65, Grade = D
Student 5: Marks = 45, Grade = F

Enter marks to search: 65
Marks found: Student 4 has 65 marks with Grade D
```
