<h1 align="center">CRC32使用说明</h1>


## 参数模型
- 模型名称：CRC-32 (x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1)
- 生成项：0x104C11DB7
- 初始值：0xFFFFFFFF(需要以参数方式传入)

## 示例
```
unsigned char data[] = "This is a test code.";
int main(void)
{
    unsigned int crc = 0xFFFFFFFF;

    crc = crc32(crc, data, sizeof(data));
    printf("crc1:0x%08x\r\n", crc);
    crc = crc32(crc,(unsigned char *)&crc, 4);
    printf("crc2:0x%08x\r\n", crc);

    return 0;
}

运行结果：
crc1:0xdf90e243
crc2:0x00000000
```
