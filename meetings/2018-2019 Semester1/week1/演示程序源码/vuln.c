#include<stdio.h>
void func()
{
    char buf[0x50];
    read(0, buf, 0x100);
    write(1, buf, 0x100);
}
int main()
{
    func();
    return 0;
}
