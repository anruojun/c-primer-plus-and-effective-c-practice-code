#include <iostream>
// windows下导入windows.h ， linux下倒入unistd.h 才能使用对应的库函数
//#include <unistd.h>
#include <windows.h>
// 通过使用命名空间防止出现不同库文件下的命名冲突
using namespace std;
int main() {
    /**
     *     char v1 = 0, v2 = 0; char类型输入计算ascii码，程序不会退出
     *     char v1 = 0;int v2 = 0; int 可以和其他类型混合计算
     */
    //int v1 = 0 , v2 = 0;
    //cin >> v1 >> v2;
    /**
     * int 类型输入字符会导致程序直接结束
     */
    //cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

//    int sum = 0 , val = 1;
//    while(1)
//    {
//        sum += val;
//        val++;
//        std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;
//        睡眠一秒
//        sleep(1);
//        睡眠一秒，以微秒为单位
//        usleep(1000000);
//    }


//    while (val <= 10)
//    {
//        sum += val;
//        val ++ ;
//    }
//    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;

    int sum = 0 , value =0;
    while(std::cin >> value)
    {
        sum += value;
        std::cout << "value is " << value << endl;
    }
    char ad[2][6] = {};
    cout << sizeof(ad[0]) << endl;
    std::cout << "sum is " << sum << endl;
    return 0;
}
