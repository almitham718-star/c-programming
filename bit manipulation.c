#include <stdio.h>

unsigned char modifyRegister(unsigned char reg)
{
    reg = reg | (1 << 2);      // Set 3rd bit
    reg = reg & ~(1 << 5);     // Clear 6th bit
    reg = reg ^ (1 << 0);      // Toggle 1st bit

    return reg;
}

int main()
{
    unsigned char reg = 0x00;

    reg = modifyRegister(reg);

    printf("Modified register = %d\n", reg);

    return 0;
}