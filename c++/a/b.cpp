#include <iostream>

using namespace std;

int main()
{
//    std::cout << "\a" << std::endl
//    int a = 27;
//    int &b = a;
//    a += 1;
//    int *c = &a;
//    int *d = c;
//    std::cout << c << std::endl;
//    std::cout << *d << std::endl;
//    int a = 0;
//    int *p = nullptr;
//    cout << p <<endl;
//    const int bufsize = 512;
//    bufsize = 512;
//    int a = 31;
//    int &b = a;
//    b = 32;
//    cout << a << endl;
//    int num = 0;
//    int *const p = &num;
//    *p = 5;
//    cout << num <<endl;
//    int b = 8;
//    p = &b;
    int i = 0;
    int *p = &i;
    cout << p << endl;
    *p = 1;
    cout << p << endl;
    int b = 8;
    p = &b;
    cout << p << endl;
    return 0;
}
