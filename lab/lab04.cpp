#include <stdio.h>

int main() {
    char empID[11];       
    int workingHrs;
    double salaryPerHr;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%10s", empID);  

    printf("Input the working hrs: \n");
    scanf("%d", &workingHrs);

    printf("Salary amount/hr: \n");
    scanf("%lf", &salaryPerHr);

    double totalSalary = workingHrs * salaryPerHr;

    printf("Employees ID = %s\n", empID);
    printf("Salary = U$ %.2lf\n", totalSalary);

    return 0;
}
