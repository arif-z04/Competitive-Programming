#include <cstdio>

int main() {
    char buffer[100];
    int age = 21;
    float gpa = 3.75;

    sprintf(buffer, "Age: %d, GPA: %.2f", age, gpa);

    printf("%s\n", buffer); // Output: Age: 21, GPA: 3.75

    return 0;
}
