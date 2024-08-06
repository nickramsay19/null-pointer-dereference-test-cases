#define NULL (void*)0

int main() {
    int x;
    int* arr = { &x, NULL };

    *arr[1] = 0;

    return 0;
}