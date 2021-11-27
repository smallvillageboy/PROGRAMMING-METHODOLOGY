#include <stdio.h>
void reverse_array(int *_p, int _size) {
        _size=_size-1;
        for (int i=0; i< (_size/2); i++)
        {
            int tmp = *(_p+i);
            *(_p+i) = *(_p+(_size-i));
            *(_p+(_size-i)) = tmp;
        }
            
}
int main() {
    printf("enter size of array ");
    int size, *p;
    scanf("%d", &size);
    for (int i=0; i<size; i++) {
        scanf("%d", &*(p+i));
    }
    reverse_array(p, size);
    for (int i=0; i< size; i++) {
        printf("%d ", *(p+i));
    }
    return 0;
}