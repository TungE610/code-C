//
//  main.c
//  Tuan2
//
//  Created by bui danh tung on 30/03/2021.
//
/*Bui Danh Tung IT-E6-02*/
#include <stdio.h>
#define PI 3.142
int main(){
    printf("welcome to C\n");
    printf("Programing Introduction.\n");
    /*2.5*/
    printf("My name is Bui Tung\n");
    printf("Nice to meet you\n");
    printf("Hope you will have happy time \n");
    /*2.6*/
    double r, c, ac, as, v;
    r = 5.678;
    printf("Radius = %f\n", r);
    c = 2.0 * PI * r;
    printf("Circle's circumference = %f\n", c);
    ac = PI * r * r;
    printf("Circle's area = %f\n", ac);
    as = 4.0 * PI * r * r;
    printf("Sphere's area = %f\n", as);
    v = 4.0/3.0 * PI * r * r * r;
    printf("Sphere's volume = %f\n", v);
    /*2.7*/
    printf("The name of person who sitting next to me:\n ");
    printf("Le Quang Nghia\n");
    /*Bài toán loại bỏ phần tử bị trùng trong dãy mà vẫn giũ nguyên thứ tự*/
    int i, j, n, k, dem = 0;
    float a[100];
        printf("nhap so phan tu cua mang:");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("a[%d]=", i + 1);
            scanf("%f", &a[i]);
        }
        printf("mang da nhap:\n");
        for (i = 0; i < n; i++)
        {
            printf(" %0.2f ", a[i]);
        }
        for (i = 1; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                {
                    for (k = i; k < n; k++)
                    {
                        a[k] = a[k + 1];
                        n--;
                        i--;
                    }
                }
            }
        }
        printf("\nmang sau khi xoa la:\n");
        for (i = 0; i < n; i++)
        {
            printf(" %0.2f ", a[i]);
        }
    return 0;
    /*Bài toán Tháp Hà Nội*/
}
