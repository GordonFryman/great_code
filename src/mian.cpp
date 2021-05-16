char mojiretsu[1000];
int mojisuu = 0;
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif
int main() 
{
  for(inti = 1;i<= 1000;i++)
  {
     if(i % 15 == 0)
  {
    printf("%d FizzBuzz\n",i);
  }
  else if(i % 3 == 0)
  {
    printf("%d Fizz\n",i);
  }
  else if(i % 5 == 0)
  {
    printf("%d Buzz\n",i);
  }
    else
    {
      printf("%d\n",i);
    }
  }
}
