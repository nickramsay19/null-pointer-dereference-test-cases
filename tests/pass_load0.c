int main() {
    int x;
    int* p;

    x = 5;
    p = &x;
    (void*) *p;

    return 0;
}