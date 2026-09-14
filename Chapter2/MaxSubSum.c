#include <stdio.h>
double MaxSubSum4(const double[], int);

int main(void) {
    double a[4] = {1, 3, -2, 4};
    double max = MaxSubSum4(a, 4);
    printf("%f\n", max);
    return 0;
}

double MaxSubSum4(const double a[], int N) {
    double max = 0, temp = 0;
    if (N == 1) {
        return a[0];
    }
    // 以a[4]={1,3,-2,4}为例
    for (int i = 0; i < N; i++) {
        temp += a[i];
        if (temp > max) {
            max = temp;
        } else if (temp < 0) {
            temp = 0;
        }
    }

    return max;
}
