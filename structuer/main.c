
#include <stdio.h>

struct Student
{
    int id;
    float marks;
    char grade;
};

union StudentData
{
    int id;
    float marks;
    char grade;
};

int main()
{
    struct Student s;
    union StudentData u;

    // Structure
    s.id = 101;
    s.marks = 85.5;
    s.grade = 'A';

    printf("Structure:\n");
    printf("ID = %d\n", s.id);
    printf("Marks = %.1f\n", s.marks);
    printf("Grade = %c\n", s.grade);
    printf("ID after storing marks and id= %d\n", s.id);


    // Union
    u.id = 101;
    printf("\nUnion:\n");
    printf("ID = %d\n", u.id);

    u.marks = 85.5;
    printf("Marks = %.1f\n", u.marks);

    u.grade = 'A';
    printf("Grade = %c\n", u.grade);
    printf("ID after storing marks and id= %d\n", u.id);


    return 0;
}

