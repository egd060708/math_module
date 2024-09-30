#include "../include/mathPrint.h"

/* 打印向量 */
void printV(std::string _n, double* _v, int _len)
{
    std::cout << _n << " :  [";
    for (int i = 0; i < _len; i++)
    {
        if (i != _len - 1)
        {
            std::cout << " " << _v[i] << ",";
        }
        else
        {
            std::cout << " " << _v[i] << "]" << std::endl;
        }
    }
}

/* 打印矩阵 */
void printM(std::string _n, double** _m, int _row, int _col)
{
    std::cout << _n << " :  [";
    for (int i = 0; i < _row; i++)
    {
        for (int j = 0; j < _col; j++)
        {
            if (j != _col - 1)
            {
                std::cout << " " << *((double*)_m + _col * i + j) << ",";
            }
            else
            {
                if (i != _row - 1)
                {
                    std::cout << " " << *((double*)_m + _col * i + j) << ";";
                }
                else
                {
                    std::cout << " " << *((double*)_m + _col * i + j) << "]" << std::endl;
                }
            }
        }
    }
}