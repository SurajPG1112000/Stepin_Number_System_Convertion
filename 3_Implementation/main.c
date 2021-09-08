#include "logic.h"

 int main()
{   
    int choise;
    long long int binaryval;
    long long int binary;
    long long int octal;
    printf("********PRESS THE REQURIED OPTION********\n");
    printf("Press 1 to Convert Hexadecimal Number to Decimal Number\n");
    printf("Press 2 to Convert Binary Number to Decimal Number\n");
    printf("Press 3 to Convert Octal Number to Decimal Number\n");
    printf("Press 4 to Convert Decimal Number to Binary Number\n");
    printf("Press 5 to Convert Decimal Number to Octal Number\n");
    printf("Press 6 to Convert Decimal Number to Hexadecimal Number\n");
    printf("Press 7 to Convert Binary Number to Hexadecimal Number\n");
    printf("Press 8 to Convert Binary Number to Octal Number\n");
    printf("Press 9 to Convert Octal Number to Binary Number\n");
    printf("Press 10 to Convert Hexadecimal Number to Binary Number\n");
    printf("Enter 0 to quit the program \n");
    while(1)
    {
        printf("Enter your choise :");
        scanf("%d",&choise);
        switch(choise)
        {
             default:
                    printf("\n**********Enter Valid Choise***********\n");
                    break;
             case 1:
                    hexTodec();
                    break;
            case 2: 
                    binaryTodecimal();
                    break;
            case 3:
                    octalTodecimal();
                    break;
            case 4:
                    decTobin();
                    break;
            case 5:
                    decTooctal();
                    break;
            case 6:
                    decTohexa();
                    break;
            case 7:
                    
                    printf("Enter the Binary number: ");
                    scanf("%ld", &binaryval);
                    printf("Equivalent hexadecimal value of Binary Number %lld is %llX\n",binaryval, binTohexa(binaryval));
                    break;
            case 8:
                
                    printf("Enter a binary number: ");
                    scanf("%lld", &binary);
                    printf("Octal Equivalent of Binary Number %lld is %lld\n",binary, binary_to_octal(binary));
                    break;
            case 9:
                    
                    printf("Enter an Octal number: ");
                    scanf("%lld", &octal);
                    printf("Binary Equivalent of Octal number %lld is %lld\n", octal, octal_to_binary(octal));
                    break;
            case 10:
                    hexTobin();
                    break;
            case 0:
                    return 0;
             
            
    }
    }
    return 0;
}