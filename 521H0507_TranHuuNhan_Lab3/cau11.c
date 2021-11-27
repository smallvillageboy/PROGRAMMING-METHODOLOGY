#include <stdio.h>
#include <math.h>
int fml[3];

int cau10(int x);
int cau11(int x);

int main()
{
    int num;
    printf("nhap so >=0 ");
    scanf("%d", &num);

    if (cau11(num)==1)
        printf("no");
    else
        printf("yes");
    return 0;
}

int cau10(int x) {
    if (x<10)
        return x;
    else {
            int d=0;
            while (x>0)
            {
                d = d * 10 + x % 10;
                x = x / 10;
            }
            return d;
    }
}
int cau11(int x) {
    if (x==cau10(x)) {
        return 0;
    }
    else {
        return 1;
    }
}