#include "mathTool.h"
#include "mathPrint.h"

int main()
{
    double v3[3] = {1.,2.,3.};
    double v3a[3] = {2.,4.,6.};
    double result = dot_v3d_v3d(v3,v3a);
    printVd("v3",v3,3);
    printf("result: %f",result);
    system("pause");
    return 0;
}