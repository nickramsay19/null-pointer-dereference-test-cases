#define NULL (void*)0

int main() {
    int x;
    int* p;
    int i;
    int y;
    
    x = 0;
    p = &x;

    for (i = 0; i < 5; ++i) {
        p = NULL;
    }

    y = *p;
}