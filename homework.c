//




//#include <stdio.h>
//int main() {
//    int a = 5;
//    int b = 2;
//    float c = a / b;
//    printf("c = %f\n", c);
//    return 0;
//}
//
//



//


//#include <stdio.h>
//int main() {
//    int a = 10;
//    float b = 3.5;
//    char c = 'A'; // ASCII码为65
//
//    double result = a + b + c;
//    printf("result = %lf\n", result);
//
//    int int_result = result;
//    printf("int_result = %d\n", int_result);
//
//    return 0;
//}









 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void) 
{
    system("chcp 65001 > nul");
 

//char number = 0;
//   scanf("%c", &number);
//
//if (number >= 'a' && number <= 'z')
//{
//    printf("%c是小写字母\n", number);
//}
//else if (number >= 'A' && number <= 'Z')
//{
//    printf("%c是大写字母\n", number);
//}
//else if (number >= '0' && number <= '9')
//{
//    printf("%c是数字\n", number);
//}
//else
//{
//    printf("%c是其他符号\n", number);
//}

    /*int run_nian = 0;
    scanf("%d", &run_nian);
     
    if (run_nian % 4 == 0 && run_nian % 100 != 0)
    {
        printf("%d是闰年", run_nian);
    }
          
     else if (run_nian % 400 == 0)
    {
        printf("%d是闰年", run_nian);
    }

     else
    {
        printf("%d不是闰年",run_nian);
    }

*/

   /* int pass_word = 0;
    int load_word = 0;
    printf("请设置密码\n");
    scanf("%d", &pass_word);
    printf("请输入密码\n");
    scanf("%d", &load_word);

    if (load_word == pass_word)
    {
        printf("输入正确，欢迎使用");

    }*/
     
   /* int number1 = 0;
    int number2 = 0;
    
    printf("请依次输入两个整数。\n");
    scanf("%d %d", &number1, &number2);
    if (number1 - number2 > 0)
        printf("number1 >number2 ");
    else if (number1 - number2 == 0)
        printf("number1 = number2 ");
    else 
    {
        printf("number1 <  number2 ");
    }*/
    /*int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1,&num2);
    if (num1 * num2 > 5000)
        printf("大于5000");
    else if (num1 * num2 < 5000)
        printf("小于5000");
    else
        printf("等于5000");*/

  /*  int score = 0;
     
    scanf("%d", &score);

    if (score >= 90)
        printf("A");
    else if (score >= 80 && score <= 90)
        printf("B");
    else if (score >= 70 && score <= 80)
        printf("C");
    else if (score >= 60 && score <= 70)
        printf("D");
    else
        printf("E");
*/

   /* int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    if (a % b == 0)
    {
        printf("b是a的除数");
    }

    else if (b % a == 0)
    {
        printf(" a是b 的除数");
    }

*/
//char  psw1[20];//一串数组，一段空间
//char  psw2[20];
//
//scanf("%s", psw1);//这里的psw1不需要&符号，由于psw1本身自带地址！
//scanf("%s", psw2);
//
//
//if (strcmp(psw1, psw2) == 0)
//printf("密码输入一致！");
//else
//printf("密码输入不一致！");
//#include <stdio.h>
//
//int main() {
    //double num1, num2, result;
    //char operator;

    //// 1. 输入第一个数字
    //printf("请输入第一个数字: ");
    //// 注意：这里一定要用 & 取地址符！
    //if (scanf("%lf", &num1) != 1) {
    //    printf("输入错误，请输入有效的数字。\n");
    //    return 1;
    //}

    //// 2. 输入运算符
    //printf("请输入运算符 (+, -, *, /): ");
    //// 【关键点1】：%c 前面加一个空格！用来跳过之前输入数字时留下的"回车符"
    //scanf(" %c", &operator);

    //// 3. 输入第二个数字
    //printf("请输入第二个数字: ");
    //if (scanf("%lf", &num2) != 1) {
    //    printf("输入错误，请输入有效的数字。\n");
    //    return 1;
    //}

    //// 4. 使用 switch-case 进行分支判断计算
    //int isValid = 1; // 标记是否合法
    //switch (operator) 
    //{
    //case '+':
    //    result = num1 + num2;
    //    break;
    //case '-':
    //    result = num1 - num2;
    //    break;
    //case '*':
    //    result = num1 * num2;
    //    break;
    //case '/':
    //    // 【关键点2】：除法一定要考虑分母为 0 的情况，否则会程序崩溃
    //    if (num2 == 0) {
    //        printf("错误：除数不能为 0！\n");
    //        isValid = 0;
    //    }
    //    else {
    //        result = num1 / num2;
    //    }
    //    break;
    //default:
    //    // 输入了其他非法字符
    //    printf("错误：无效的运算符！\n");
    //    isValid = 0;
    //    break;
    //}

    //// 5. 输出结果（只有计算合法时才输出）
    //if (isValid) {
    //    printf("计算结果: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
    //}
//int num1 = 0;
//int num2 = 0;
//int result = 0;
//char logic = 0;
//
////please load the first number 
//printf("please load the first number ");
//scanf("%d", &num1);
////
//
//printf("please choose your logic ");
//scanf("\n%c", &logic);
//
//
//
//
//printf("please load the  second number ");
//scanf("%d", &num2);
//
//
//switch (logic)
//{
//case   '+' : 
//    result = num1 + num2;
//   
//    break;
//case   '-':
//    result = num1  - num2;
//     
//    break;
//default:
//    printf("INVALID!");
//    break;
//
//
//     
//
//
//}
//
//
//
//
//printf("%d", result);
//
//
//
//
///*
//挺多坑的
// switch （变量）{
//
// case 1(代表变量的赋值):
//    sentence;
//
//
//
// }
//
//
//
//
//
//
//
//*/
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
int num = 0;
int score = 0;
scanf("%d", &score);
//这里不用score，将十进制转为个位数字，然后比较
num = score / 10;
switch ( num)
{
 case 10:
     printf("A");
     break;
case 9:
    printf("A");
    break;


default:
    printf("Z");

}













































    return 0;
}
