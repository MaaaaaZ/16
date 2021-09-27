#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    float A = 0;
//    float B = 0;
//    scanf("%f %f", &A, &B);
//    if (B > 0)
//    {
//        float C = 0;
//        C = A / B;
//        printf("%.0f/%.0f=%.2f", A, B, C);
//    }
//    else if (B < 0)
//    {
//        float C = 0;
//        C = A / B;
//        printf("%.0f/(%.0f)=%.2f", A, B, C);
//    }
//    else
//    {
//        printf("%.0f/%.0f=Error", A, B);
//    }
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	if (a < 15)
//	{
//		float b = 0;
//		b = a * 4 / 3;
//		printf("%.2f", b);
//	}
//	else
//	{
//		float b = 0;
//		b = (2.5 * a) - 17.5;
//		printf("%.2f", b);
//	};
//
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//main()
//{
//    int hh, mm, depart, arrive;
//
//    scanf("%d%d", &depart, &arrive);
//
//    hh = arrive / 100 - depart / 100;  
//
//    mm = arrive % 100 - depart % 100; 
//
//    if (mm < 0)               
//    {
//        mm = 60 + mm;  
//        hh = hh - 1;
//    }
//
//
//    printf("%02d:%02d\n", hh, mm);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	double a, c;
//	int b;
//	scanf("%lf%d", &a, &b);
//	if (a < 3)
//	{
//		if (b < 5)
//		{
//			c = 10;
//			printf("%.0lf", c);
//		}
//		else
//		{
//			c = (b / 5) + 10;
//			printf("%.1lf", c);
//		}
//	}
//	else if (a > 3 && a < 10)
//	{
//		if (b < 5)
//		{
//			c = 10 + (a - 3) * 2;
//			printf("%.0lf", c);
//		}
//		else
//		{
//			c = 10 + (a - 3) * 2 + 2 * (b/5);
//			printf("%.1lf", c);
//		}
//	}
//	else
//	{
//		if (b < 5)
//		{
//			c = 10 + 7 * 2 + (a - 10) * 3;
//			printf("%.1lf", c);
//		}
//		else
//		{
//			c = (10 + 7 * 2) + ((a - 10) * 3) + (b / 5) * 2 ;
//			printf("%.0lf", c);
//		}
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a == b)
//	{
//		printf("C");
//	}
//	else if (a == c)
//	{
//		printf("B"); 
//	}
//	else
//	{
//		printf("A");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int x, z;
//    scanf("%d", &x);
//    x = x / 10;
//    switch (x) {
//    case 10:
//    case 9:printf(“A”); break;
//    case 8:printf(“B”); break;
//    case 7:printf(“C”); break;
//    case 6:printf(“D”); break;
//    default:printf(“E”); break;
//    }
//    return 0;
//}

//#include <stdio.h>
//
//#include <stdlib.h>
//
//
//
//void score()
//
//{
//
//    int score, mark;
//
//    printf("请输入分数为:");
//
//    scanf("%d", &score);
//
//    mark = score / 10;
//
//    switch (mark)
//
//    {
//
//    case 10:
//
//    case 9:printf("%dA\n", score); break;
//
//    case 8:printf("%dB\n", score); break;
//
//    case 7:printf("%dC\n", score); break;
//
//    case 6:printf("%dD\n", score); break;
//
//    case 5:
//
//    case 4:
//
//    case 3:
//
//    case 2:
//
//    case 1:
//
//    case 0:printf("%dE\n", score); break;
//
//    default:printf("InputError!");
//
//    }
//
//}
//
//int main()
//
//{
//
//    score();
//
//}
//
//#include <stdio.h>
//
//#include <stdlib.h>
//
//
//
//void score()
//
//{
//
//    int score;
//
//    printf("请输入分数为:");
//
//    scanf("%d", &score);
//
//    if (score > 100 || score < 0)
//
//    {
//
//        printf("Error!");
//
//    }
//
//    else if (score >= 90)
//
//        printf("A");
//
//    else if (score >= 80)
//
//        printf("B");
//
//    else if (score >= 70)
//
//        printf("C");
//
//    else if (score >= 60)
//
//        printf("D");
//
//    else if (score < 60)
//
//        printf("E");
//
//}
//#include<stdio.h>
//int main()
//{
//    int fs;
//    scanf("%d", &fs);
//    if (fs >= 90)
//        printf("A");
//    else if (fs >= 80)
//        printf("B");
//    else if (fs >= 70)
//        printf("C");
//    else if (fs >= 60)
//        printf("D");
//    else
//        printf("E");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double s, w;
//	scanf("%lf", &s);
//	if (s < 50)
//	{
//		w = 50 * 0.53;
//		printf("cost = %lf", w);
//	}
//	else
//	{
//		w = 50 * 0.53 + (s - 50) * 0.58;
//		printf("cost = %lf", w);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	scanf("%d", &count);
//	double cost;
//
//	if (count > 0)
//	{
//		if (count <= 50)
//		{
//			cost = count * 0.53;
//		}
//		else
//		{
//			cost = 50 * 0.53 + (count - 50) * (0.53 + 0.05);
//		}
//
//		printf("cost = %.2f\n", cost);
//	}
//	else
//	{
//		printf("Invalid Value!\n");
//	}
//
//	return 0;
//}










