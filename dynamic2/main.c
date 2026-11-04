#include <stdio.h>
int main()
{
    char vowels[5]={'a','e','i','o','u'};
    //int n_v =5;
    //int n_d = 10;
    char digi[10] = {'1','2','3','4','5','6','7','8','9','0'};
    char spl[11]={'~','!','@','#','$','%','^','&','*','(',')'};
    char value;
    int made=0;
     //printf("Enter a vowels:");

    //for(int i=0; i<n_v; i++)
    //{

       // scanf(" %c",&vowels[i]);
    //}
    //printf("Enter a digits:");

    //for(int i=0; i<n_d; i++)
    //{

      //  scanf(" %c",&digi[i]);
    //}

    printf("Enter a vowl,digit, or consoent:");

    for(int i=0; i<1;i++)
    {
        scanf("%c",&value);
    }
     if(value==' ')
    {
        printf("Its a space");
    }
    for(int i=0;i<5;i++)
    {
        if(vowels[i]==value)
        {
            printf("value is vowl");
            made = 1;
            break;
        }
    }

    for(int i=0;i<10;i++)
    {
        if(digi[i]==value)
        {
            printf("value is digi");
            made = 1;
            break;
        }
    }
    for(int i=0;i<11;i++)
    {
        if(spl[i]==value)
        {
            printf("value is special");
            made = 1;
            break;
        }
    }


    if(made==0&&value!=' ')
    {
        printf("Its a consoent");

    }


}
