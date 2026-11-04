#include <stdio.h>


struct Department {
    char deptName[50];
};

struct Employee {
    char empName[50];
    float salary;
    struct Department dept;
};

int main() {
    struct Employee emp;


    printf("--- Enter Employee Details ---\n");
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp.empName);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Department Name: ");
    scanf(" %[^\n]s", emp.dept.deptName);




    printf("\n--- Displaying Employee Details ---\n");
    printf("Name       : %s\n", emp.empName);
    printf("Salary     : %.2f/-\n", emp.salary);
    printf("Department : %s\n", emp.dept.deptName);


    return 0;
}
