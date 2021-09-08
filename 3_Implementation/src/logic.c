#include "logic.h"

int hexTodec()
{   
    int ARRAY_SIZE=20;
    char hex[ARRAY_SIZE];
    long long decimal = 0, base = 1;
    int i = 0, value, length;
    /* Get hexadecimal value from user */
    printf("Enter hexadecimal number : ");
    fflush(stdin);
    fgets(hex,ARRAY_SIZE,stdin);
    length = strlen(hex);
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    printf("Decimal number equivalent of Hexadecimal number %s is  %lld\n",hex ,decimal);
    
}


int binaryTodecimal()
{  
    // declare the local variable  
    long long int bin_num, dec_num,bin_num1;  
    printf ("Enter the binary number : ");  
    scanf ("%lld", &bin_num);  
    bin_num1=bin_num;
      
   // dec_num = binaryTodecimal (bin_num); // call the binaryTodecimal() function  
   int decimal_num = 0, temp = 0, rem;  
    while (bin_num != 0)  
    {  
        rem = bin_num % 10;  
        bin_num = bin_num / 10;  
        decimal_num = decimal_num + rem * pow( 2, temp);  
        temp++;  
    }  
    dec_num = decimal_num;
    printf ("Decimal equivalent of Binary number %lld is %lld \n",bin_num1, dec_num);  
}  



int octalTodecimal()
{  
    // declare the local variable  
   long long int oct_num, dec_num,oct_num1;  
    printf ("Enter the Octal Number : ");  
    scanf ("%lld", &oct_num);  
    oct_num1=oct_num;  
   // dec_num = binaryTodecimal (bin_num); // call the binaryTodecimal() function  
   int decimal_num = 0, temp = 0, rem;  
    while (oct_num != 0)  
    {  
        rem = oct_num % 10;  
        oct_num = oct_num / 10;  
        decimal_num = decimal_num + rem * pow( 8, temp);  
        temp++;  
    }  
    dec_num = decimal_num;
    printf ("Decimal equivalent of Octal number %lld is %lld \n",oct_num1, dec_num);  
}  

int decTobin()
{
     long long int number=0, n=0, remainder=0, binary = 0, place = 1,number1;

    printf("Enter a decimal number : ");
    scanf("%lld", &number);
    number1=number;
    n = number;

    while (n > 0)
    {
        remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }
    
    printf("Binary equivalent of Decimal number %lld is %lld \n", number1, binary);

}
 

int decTooctal()
{
   long long decimalnum, remainder, quotient;
int octalNumber[100], i = 1, j;
 
    printf("Enter the Decimal number : ");
    scanf("%lld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent Octal value of Decimal number %lld is ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
    printf("\n");
    return 0;
}

int decTohexa()
{
	long long int decn,rmd,q,dn=0,m,l;
	int i=1,j,tmp;
    char s;
	printf("Enter any Decimal number : ");
	scanf("%lld",&decn);
	q = decn;
        for(l=q;l>0;l=l/16)
               {
		tmp = l % 16;
		if( tmp < 10)
		           tmp =tmp + 48; else
		         tmp = tmp + 55;
                         dn=dn*100+tmp;
	        }
          printf("Equivalent Hexadecimal Number of Decimal Number %lld is ",decn);
         for(m=dn;m>0;m=m/100)
            {
               s=m % 100;
               printf("%c",s);
            }
            printf("\n");
}

int binTohexa(long long int binaryval)
{
    long long int hexadecimalval = 0, i = 1, remainder;
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    return hexadecimalval;
}

int binary_to_octal(long long int binary)
{
 int octal = 0, decimal = 0, i = 0;
 while(binary != 0)
 {
 decimal += (binary%10) * pow(2,i);
 ++i;
 binary/=10;
 }
 i = 1;
 while (decimal != 0)
 {
 octal += (decimal % 8) * i;
 decimal /= 8;
 i *= 10;
 }
 return octal;
}

long long octal_to_binary(long long int octal)
{
 long long int decimal = 0, i = 0;
 double binary = 0;
 while(octal != 0)
 {
 decimal += (octal%10) * pow(8,i);
 ++i;
 octal/=10;
 }
 i = 1;
 while (decimal != 0)
 {
 binary += (decimal % 2) * i;
 decimal /= 2;
 i *= 10;
 }
 return binary;
}

int hexTobin()
{
    char hexNum[100];
	long long int count=0;
	printf("Enter a hexadecimal number : ");
	scanf("%s",hexNum);
	printf("Equivalent Binary value of hexadecimal Number %s is : ",hexNum);
	while(hexNum[count])
	{
		switch(hexNum[count])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid Entry, Please Try Again  %c",hexNum[count]);
		}
		count++;
	}
    printf("\n");
	return 0;
}

