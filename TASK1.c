#include <stdio.h>

int main() {
    char *units[] = {
        "Introduction to Programming",
        "Data Structures",
        "Computer Networks",
        "Database Systems",
        "Software Engineering"
    };

    int numUnits = sizeof(units) / sizeof(units[0]);

    printf("Units Offered This Semester:\n");

    for (int i = 0; i < numUnits; i++) {
        printf("%d. %s\n", i + 1, units[i]);
    }

    return 0;
}
