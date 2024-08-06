#define NULL (void*)0

int main() {

    int* p;
    int x;

    p = NULL;

    if (p == NULL || *p) {
        x = 0;
    }

    return 0;
}