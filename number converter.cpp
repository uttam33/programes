#include <stdio.h>
#include<string.h>
#define INT_MIN (1)
#define INT_MAX (9999)

void convert(int, int);
void toRoman(int, int);

int main () { 
  
  int n, count = 0, num;

  printf ("CMSC 21: LABORATORY EXERCISE #6\n");
  printf ("Please choose one of the following options:\n");
  printf ("\t(1)Numbers to Words\n");
  printf ("\t(2)Numbers to Roman Numerals\n");
  printf ("\t(3)Roman Numerals to Numbers\n\n");
  printf ("Option: ");
  scanf ("%d", &n);
  
  if (n == 1) {
    printf ("\nNUMBERS TO WORDS\n");
    printf ("This is a program that converts and prints a number to its equivalent words.\n\n");
    
    if ( n >= INT_MIN && n <= INT_MAX ) {
      printf ("Enter number to convert: ");
      scanf ("%d", &n);
      printf ("Equivalent in words: ");
  
      int num = n;
  
      while (num != 0) {
      num /= 10;
      ++count;
    }
  
      convert(n, count);
    }
    
    else 
      printf ("Invalid. Please enter another number.\n");
  }
  
  else if ( n == 2) {
    printf ("\nNUMBERS TO ROMAN NUMERALS\n");
    printf ("This is a program that converts and prints a number its equivalent Roman Numeral.\n\n");
    
    if (1 <= n <= 3000) {
      printf ("Enter number to equivalent: ");
      scanf ("%d", &n);
      printf ("Equivalent in Roman Numerals: ");

      num = n;
  
      while (num != 0) {
        num /= 10;
        ++count;
        }
  
      toRoman(n, count);
  }
    else if ( n >= 3001) {
      printf ("INVALID.\n"); }
  }
  
  else if ( n == 3 ) {
    printf ("\nROMAN NUMERALS TO NUMBERS\n");
    printf ("This is a program that converts and prints a string (Roman Numeral form) into its equivalent number (Hindu-Arabic form).\n\n");
    printf ("Enter Roman Numeral string to convert: ");
  
  }
  
  else 
    printf ("\n");

  return 0;  
}


void convert (int a, int b) {
  
  int n, e, d;
  char singledigit[10][6] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight","Nine"};
  char tens[10][10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
  char tensmultiple[10][8] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Fixty", "Seventy", "Eighty", "Ninety"};
  
  if (b == 1 ) {
    printf ("%s ", *(singledigit+a));
  }
  else if (b == 2 && a <= 19) {
    printf ("%s ", *(tens+(a-10)));
  }
  
  else if (b == 2 && a >= 20){
    n = a / 10;
    printf ("%s ", *(tensmultiple+n));
    int d = a % 10;
    printf ("%s ", *(singledigit+d));
  }
  
  else if ( b == 3 ) {
    n = a / 100;
    printf ("%s ", *(singledigit+n));
    printf ("hundred ");
    int d = (a%100) / 10;
    printf ("%s ", *(tensmultiple+d));
    int e = a % 10;
    printf ("%s ", *(singledigit+e));  
  }
  
  else if ( b == 4) {
    n = a / 1000;
    printf ("%s ", *(singledigit+n));
    printf ("Thousand ");
    d = (a % 1000) / 100;
    printf ("%s ", *(singledigit+d));
    printf ("Hundred ");
    e = (a % 100)/10;
    printf ("%s ", *(tensmultiple+e));
    n = ((a % 1000) % 100 ) % 10;
    printf ("%s ", *(singledigit+n));
  
  }}

void toRoman(int a, int b) {
   
  int n, e, g, h;
    char c[10][5] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}; 
    char d[10][5] = {"","X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char f[10][5] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char i[4][4] = {"", "M", "MM", "MMM"};
    
    if (b == 1) {
      printf ("%s", *(c+a));
  }
  
  else if (b == 2) {
    n = a / 10;
    printf ("%s", *(d+n));
    e = a % 10;
    printf ("%s", *(c + e));  
  }
  
  else if (b == 3){
    n = a / 100;
    printf ("%s", *(f+n));
    g = (a % 100)/ 10;
    printf ("%s", *(d+g));
    h = a % 10;
    printf ("%s", *(c+h));
      
  }
  
  else if (b==4){
    if ( a >= 3001) {
      printf ("INVALID.\n");
    }
    else {
      n = a / 1000;
      printf ("%s", *(i+n));
      n = (a % 1000)/ 100;
      printf ("%s", *(f+n));
      n = (a % 100) / 10;
      printf ("%s", *(d+n));
      n = ((a%1000)%100)%10;
      printf ("%s", *(c+n));
    }
  
  }

}
