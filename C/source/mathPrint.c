#include "mathPrint.h"

/* 打印向量 */
void printVd(char* _n, double* _v, int _len)
{
    printf("%s : [",_n);
    for (int i = 0; i < _len; i++)
    {
        if (i != _len - 1)
        {
            printf(" %f,",_v[i]);
        }
        else
        {
            printf(" %f]\n",_v[i]);
        }
    }
}

/* 打印向量 */
void printVi(char* _n, int* _v, int _len)
{
    printf("%s : [",_n);
    for (int i = 0; i < _len; i++)
    {
        if (i != _len - 1)
        {
            printf(" %d,",_v[i]);
        }
        else
        {
            printf(" %d]\n",_v[i]);
        }
    }
}

/* 打印矩阵 */
void printMd(char* _n, double** _m, int _row, int _col)
{
    printf("%s : [",_n);
    for (int i = 0; i < _row; i++)
    {
        for (int j = 0; j < _col; j++)
        {
            if (j != _col - 1)
            {
                printf(" %f,",*((double*)_m + _col * i + j));
            }
            else
            {
                if (i != _row - 1)
                {
                    printf(" %f;",*((double*)_m + _col * i + j));
                }
                else
                {
                    printf(" %f]\n",*((double*)_m + _col * i + j));
                }
            }
        }
    }
}

/* 打印矩阵 */
void printMi(char* _n, int** _m, int _row, int _col)
{
    printf("%s : [",_n);
    for (int i = 0; i < _row; i++)
    {
        for (int j = 0; j < _col; j++)
        {
            if (j != _col - 1)
            {
                printf(" %d,",*((double*)_m + _col * i + j));
            }
            else
            {
                if (i != _row - 1)
                {
                    printf(" %d;",*((double*)_m + _col * i + j));
                }
                else
                {
                    printf(" %d]\n",*((double*)_m + _col * i + j));
                }
            }
        }
    }
}