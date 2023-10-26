#include <stdio.h>
#include <stdlib.h>
char convertGrade(float);

int main()
{
float numberGrade;
char letterGrade;
printf("enter your number grade:");
scanf("%f",&numberGrade);
letterGrade = convertGrade(numberGrade);
printf("%f numberGrade is %c",numberGrade,letterGrade);

    return 0;
}
char convertGrade(float numberGrade)
{
char letterGrade;
if(numberGrade>=0 && numberGrade<1.0)
{
letterGrade='F';
}
else if (numberGrade<2.0)
{
letterGrade='D';
}
else if (numberGrade<2.5)
{
letterGrade='C';
}
else if (numberGrade<3.0)
{
letterGrade='B';
}
else
{
letterGrade='A';
}
return letterGrade;
}

