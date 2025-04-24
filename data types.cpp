#include <cstdio>  // For scanf and printf

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Read input values
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // Print each on a new line
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);         // 3 decimal places
    printf("%.9lf\n", d);        // 9 decimal places

    return 0;
}

