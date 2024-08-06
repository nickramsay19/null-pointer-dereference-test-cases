#define NULL (void*)0

int main() {
    int x;
    int* p;
    int i;
    int y;
    
    x = 0;
    p = NULL;

    for (i = 0; i < 0; ++i) {
        p = &x;
    }

    y = *p;
}