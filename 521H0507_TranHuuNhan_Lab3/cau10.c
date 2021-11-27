#include <stdio.h>

int cau10(int x) {
    if (x<10)
        return x;
    else {
            int d = 0;
            while (x>0)
            {
                d = d * 10 + x % 10;
                x = x / 10;
            }
            return d;
    }
}

int main()
{
    int num;
    printf("nhap so >=0 ");
    scanf("%d", &num);

    printf("các chữ số sau khi đảo của %d là %d", num, cau10(num));
    return 0;
}