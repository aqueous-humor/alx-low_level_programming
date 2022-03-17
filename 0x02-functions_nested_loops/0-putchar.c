#include "main.h"

/**
 *main - entry point.
 *Description: prints "_putchar" followed by a new line.
 *Return: 0 on success.
*/
int main(void)
{
char str[8] = "_putchar";
  
int i;
  
  for (i = 0; i < 9; i++)
    
  {
   _putchar(str[i]);    
  }
  
_putchar("\n");

return (0); 
}
