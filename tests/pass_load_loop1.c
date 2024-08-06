#define NULL (void*)0

int main() {
    int i;
    int* p;

    p = &i;

    for (i = 0; i < *p; ++i) {
        p = NULL;
    }

    return 0;
}