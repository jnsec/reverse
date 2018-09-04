### 编译选项

gcc -m32 vuln.c -o vuln -O0 -fno-stack-protector -z execstack

### 运行条件

系统关闭地址随机化保护 

echo 0 > /proc/sys/kernel/randomize_va_space