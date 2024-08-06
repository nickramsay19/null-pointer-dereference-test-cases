#define NULL (void*)0

int main() {
    int i;
    int* p;    
    int arr[5] {1, 2, 3, 4, 5};
    int x;

    p = NULL;
    
    for (i = 0; i < 5; ++i) {
        if (arr[i] == 3) {
            ptr = &arr[i];
        }
        *ptr = 0;
    }

    return 0;
}