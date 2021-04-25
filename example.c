//
//  main.c
//  example_week3
//
//  Created by bui danh tung on 12/04/2021.
//

 #include <stdio.h>

 int main()
 {
    /*exemple 1*/
 printf( "%d\n", 455 );
 printf( "%i\n", 455 );/*i same as d*/
 printf( "%d\n", +455 );
 printf( "%d\n", -455 );
 printf( "%hd\n", 32000 );
 printf( "%ld\n", 2000000000 );
 printf( "%o\n", 455 );
 printf( "%u\n", 455 );
 printf( "%u\n", -455 );
 printf( "%x\n", 455 );
 printf( "%X\n", 455 );

     /*example 2*/
     printf( "%e\n", 1234567.89 );
     printf( "%e\n", +1234567.89 );
     printf( "%e\n", -1234567.89 );
     printf( "%E\n", 1234567.89 );
     printf( "%f\n", 1234567.89 );
     printf( "%g\n", 1234567.89 );
     printf( "%G\n", 1234567.89 );
     /* example 3*/
     
     char character = 'A';
      char string[] = "This is a string";
      const char *stringPtr = "This is also a string";
     
      printf( "%c\n", character );
      printf( "%s\n", "This is a string" );
      printf( "%s\n", string );
      printf( "%s\n", stringPtr );
     /*example 4*/
     int *ptr;
      int x = 12345, y;
     
      ptr = &x;
      printf( "The value of ptr is %p\n", ptr );
      printf( "The address of x is %p\n\n", &x );
      printf("Total characters printed on this line is:%n",&y );
      printf( " %d\n\n", y );
     
      y = printf( "This line has 28 characters\n" );
      printf( "%d characters were printed\n\n", y );
     
      printf( "Printing a %% in a format control string\n" );
     /*example 5 */
     int i = 873;
      double f = 123.94536;
      char s[] = "Happy Birthday";
     
      printf( "Using precision for integers\n" );
      printf( "\t%.4d\n\t%.9d\n\n", i, i );
      printf( "Using precision for floating-point numbers\n" );
      printf( "\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f );
      printf( "Using precision for strings\n" );
      printf( "\t%.11s\n", s );
     /*example 6*/
     
      printf( "%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23 );
      printf( "%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23 );
 return 0;
 }
