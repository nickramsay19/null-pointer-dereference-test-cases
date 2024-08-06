#define NULL (void*)0

int main() {

    int* p;
    int x;

    p = NULL;

    if (p != NULL) {
        x = *p;
    }

    return 0;
}