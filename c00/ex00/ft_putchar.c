#include <unistd.h>

void ft_putchar(char c)
{
 write(1,&c,1);
}

int main(void){
ft_putchar('s');
ft_putchar('u');
ft_putchar('c');
ft_putchar('c');
ft_putchar('e');
ft_putchar('s');

}
