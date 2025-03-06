int main() {
    int a, b;

    printf("Enter first numbers: ");
    scanf(" %d", &a);
    printf("Enter first numbers: ");
    scanf(" %d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a - b;
    b = a + b;
    a = b - a;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
