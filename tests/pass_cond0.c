#define NULL (void*)0

int main() {

    int* p;
    int x;
    int y;

    x = 0;
    p = NULL;

    if (x == 1) {
        y = *p;
    }

    return 0;
}