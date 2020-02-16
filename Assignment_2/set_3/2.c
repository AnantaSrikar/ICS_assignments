#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    float abc, pab, pbc, pca;

    scanf("%d, %d, %d, %d, %d, %d, %d, %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    abc = abs((x1 * (y2- y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));

    pab = abs((x1 * (y2- y4) + x2 * (y4 - y1) + x4 * (y1 - y2)));

    pbc = abs((x4 * (y2- y3) + x2 * (y3 - y4) + x3 * (y4 - y2)));

    pca = abs((x1 * (y4- y3) + x4 * (y3 - y1) + x3 * (y1 - y4)));

    if(abc == (pab + pbc + pca))
        printf("YES");

    else
        printf("NO");

    return(0);
}