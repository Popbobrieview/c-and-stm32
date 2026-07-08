#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001 > nul");

   ///* int i = 1;
   // int input = 0;
   // */

  /*  while (i <= 100)
    {
        input = input + i;
        i = i + 1;

    }*/

    ////for  loop
    //int sum = 0;
    //for (int i = 1;i <= 100;i = i + 1)
    //{
    //    if (i % 2 == 0)
    //        sum = sum - i;
    //    else if (i % 2 == 1)
    //        sum = sum + i;
    //    else
    //        sum = sum;

    //for (int line = 1;line <= 9;line++)
    //{
    //     







    //    for (int order = line ;order <= 9;order++)/*由于外循环规定了上限，
    //        大概是先走外循环，走完一次切内循环，然后再回到外循环依次类推*/
    //    { 
    //        
    //        
    //        
    //        printf("%d ", order);


    //}

    //printf("\n");

    //}

    for (int i = 1; i <= 9;i++)
    {
        for (int j = 1; j <= i;j++)
            printf("%d * %d= %d ", i, j, i * j);





        printf("\n");

    }


   
   





    return 0;
}