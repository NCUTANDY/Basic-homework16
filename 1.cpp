#include <stdio.h> 

#include <stdlib.h>

#include <string.h>



int main()

{

    char number[10][3]={"�s","��","�L","��","�v","��","��","�m","��","�h"};

    char ch[3][3]={"�a","��","�B"};

    char bigger[3][3]={"��","��","�U"};

    int num, num1, len, group, start, num2, num3=0, flag=0;

    char n[20];

    printf("�п�J�@�Ӿ��(���ƻݭn�p��16���)�G" );

    scanf("%s",n); 

    len = strlen(n);

    if (len>16)  

    {

                printf("����ƪ��׶W�L16���, �L�k�ഫ...\n");

                exit(0);

    }

    group=(len-1)/4+1;

    printf("�ഫ�᪺���G�G");

    for(num=0;num<group;num++)

    {

                        flag=0;

                        if (num==0) start=(4-len%4)%4;

                        else start=0;

                        for (num1=start;num1<4;num1++)

                        {

                            num2=n[num3++]-48;

                            if(num2==0) continue; 

                            printf("%s", number[num2]);

                            if(num1!=3) 

                             printf("%s",ch[num1]);

                             flag=1;

                        }

                        if (group!=1 && num!=group-1 && flag!=0)

                        {

                                     printf("%s",bigger[4-group+num]);

                        }

    }

    printf("\n");

    system("pause");

    return 0;

}
