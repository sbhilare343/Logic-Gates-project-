//Calculator to find logic gates outputs for 2 variables.

#include<stdio.h>
#include<stdlib.h>

//Display function:
void Display(int A[4],int B[4],int result[4],char operation)
{
    printf("\n| A | B | A%cB |\n",operation);
    for (int i = 0; i < 4; i++)
    {
        printf("| %d | %d |  %d  |\n",A[i],B[i],result[i]);
    }
    
}

//AND gate function:
void AND(int A[4],int B[4])
{
    char op='^';
    int product[4];
    for (int i = 0; i <4; i++)
    {
        product[i]=A[i]*B[i];
    }
    printf("\nAND:\n");
    Display(A,B,product,op);
}

//OR gate function:
void OR(int A[4],int B[4])
{
    char op='v';
    int sum[4];
    for (int i = 0; i <4; i++)
    {
        if (A[i]==1 || B[i]==1)
        {
            sum[i]=1;
        }
        else
        {
            sum[i]=0;
        }
        
    }
    printf("\nOR:\n");
    Display(A,B,sum,op);
}

//NAND gate function:
void NAND(int A[4],int B[4])
{
    char op='*';
    int nand[4];
    for (int i = 0; i <4; i++)
    {
        if (A[i]==0 || B[i]==0 )
        {
            nand[i]=1;
        }
        else
        {
            nand[i]=0;
        }
        
    }
    printf("\nNAND:\n");
    Display(A,B,nand,op);
}

//NOR gate function:
void NOR(int A[4],int B[4])
{
    char op='+';
    int nor[4];
    for (int i = 0; i <4; i++)
    {
        if (A[i]==1 || B[i]==1 )
        {
            nor[i]=0;
        }
        else
        {
            nor[i]=1;
        }
        
    }
    printf("\nNOR:\n");
    Display(A,B,nor,op);
}

//XOR gate function:
void XOR(int A[4],int B[4])
{
    char op='<';
    int xor[4];
    for (int i = 0; i <4; i++)
    {
        if (A[i]==1 && B[i]==0 || A[i]==0 && B[i]==1 )
        {
            xor[i]=01;
        }
        else
        {
            xor[i]=0;
        }
        
    }
    printf("\nXOR:\n");
    Display(A,B,xor,op);
}

//XNOR gate function:
void XNOR(int A[4],int B[4])
{
    char op='>';
    int xnor[4];
    for (int i = 0; i <4; i++)
    {
        if (A[i]==1 && B[i]==0 || A[i]==0 && B[i]==1)
        {
            xnor[i]=0;
        }
        else
        {
            xnor[i]=1;
        }
        
    }
    printf("\nXNOR:\n");
    Display(A,B,xnor,op);
}

int main()
{
int A[4]={0,0,1,1};
int B[4]={0,1,0,1};

int choice;
printf("Operations:\n1 for AND\n2 for OR\n3 for NAND\n4 for NOR\n5 for XOR\n6 for XNOR\nAny for EXIT\n");

while(1)
{
printf("\nEnter your choice:\n");
scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        AND(A,B);
        break;

    case 2:
        OR(A,B);
        break;
    
    case 3:
        NAND(A,B);
        break;

    case 4:
        NOR(A,B);
        break;

    case 5:
        XOR(A,B);
        break;
    
    case 6:
        XNOR(A,B);
        break;

    default:
        exit(0);
        break;
    }
}
return 0;
}