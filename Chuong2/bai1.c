//Kiem tra so nhap vao la chan hay le.

#include <stdio.h>

int main()
{
  int a;

  printf("Moi ban nhap: ");
  scanf("%i",&a);

  if(a%2==0)
  {
    printf("So %i ban vua nhap la so chan. \n",a);
  }
  else
  {
    printf("So %i ban vua nhap la so le. \n",a);
  }
  
  return 0;
}
