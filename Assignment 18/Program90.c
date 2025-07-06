//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept N numbers from User and display all such elements which are
//                      multiples of 11
//
// Input  : N : 6
//         Elements : 85 66 3 55 93 88
// output :  66 55 88
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (((Arr[iCnt] % 11) == 0) )
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *P = NULL;

    printf("Enter number of elements :\n");
    scanf("%d", &iSize);

    P = (int *)malloc(iSize * sizeof(int));

    if (P == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &P[iCnt]);
    }

    Display(P, iSize);

    free(P);

    return 0;
}