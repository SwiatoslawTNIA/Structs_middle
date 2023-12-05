#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>
typedef unsigned long long lie;
void search(void);
// int main(void){
//   struct Book{
//     char name[20];
//     char author[20];
//     int pages;
//   };
//   //array of books:
//   struct Book library[20];
//   // library[4].name = "Body Rich";
//   // for(int i = 0; i < 20; i++){

//   //   printf("The value of the library.name of the third structure is: %s\n", library[i].name);//now it is undefine
//   //   //ed because we didn't set any value to it, now what if we did:

//   // }
//   int done = 0;
//   int count = 0;
//   while(!done){
//     printf("Enter the name of your %d book: ", count + 1);
//     scanf("%s", library[count].name);
//     printf("Enter the author of the book: ");
//     scanf("%s", library[count].author);
//     printf("Enter the number of pages: ");
//     scanf("%d", &library[count].pages);
//     count++;
//     printf("Do you want to continue?(If no, press 1) ");
//     int c;
//     c = getchar();
//     printf("%d",c );
//     // c = atoi(&c);
//   //   if(c - '0' == 10) {
//   //     break;
//   //   }
//   // }
//   // //print all the data:
//   // for(int i = 0; i < 20; i++){
//   //   printf("The author of the %d book is: %s", i, library[i].author);
//   //   printf("The name of the %d book is: %s", i, library[i].name);
//   //   printf("The amount of pages of the %d book is: %d", i, library[i].pages);

//   // }
//   // return 0;
  
// }
int main(void){
  search();
  //pointer and pointer to pointer:
  // char letter = 'P';
  // char *p = &letter;
  // printf("The address of the letter is: %s, the address of a pointer is: %s ", &letter, p);
  // printf("The value of the pointer: %c", *p);
  //if we use pointers with characters, they behave as with arrays and strings, so we could directly use
  //a pointer to access another character, wow, that is a little bit wierd!!!
  // int integer = 28;
  // int *p = &integer;
  // printf("The address of the letter is: %p, the address of a pointer is: %p ", &integer, p);
  // printf("The value of the pointer: %d", *p);
  // int *p_1 = p;//a copy of our previous:
  // printf("The address of p_1 is: %p, the value: %d\n", p_1, *p_1);
  // //their addresses match
  // int **pp = &p;//we must give the address of the first pointer
  // printf("The address of pp is: %p", pp);
  // printf("The value of pp is: %d\n", **pp);
  // printf("<%d>", INT_MAX);
  // printf("<%d>", CHAR_MAX);
  // printf("<%llu>", ULLONG_MAX);
  // printf("%llu", FLT_EPSILON);
  // float a = 14.222;
  // float b = .2300123;
  // printf("%a",a ); //prints the 
  // printf("%e", b);
  // int c = -4;//if we print c as unsigned it trasforms it to the other format, so the number will be very big.
  // printf("\n%i, %u", c, c);
  // printf("I will become 100%% the best programmer in the world.");
  // double d = 123456.123456123;
  // // int *p = &c;
  // printf("%3.2f", d);
  // printf("%f\n", d);
  // // printf("%tl", p);
  // double e = 55.44;
  // printf("*%4.2f*", e);
  // printf("*%-20f*", e);

  // char text[]  = "The text";
  // printf("%25s", text);
  // //let's ananyze the return value of the printf function:
  // int res = printf("Congratulations! You've just won a new car!\n");
  // printf("%d\n\n", res);//the result is 44, which means that the function printed 44 characters.
  // printf("Here is the way"
  //         " to print a long string");
  // char word[20];
  // scanf("%10s", word);
  // printf("%20s", word);
  // int integer = 12345;
  // printf("Enter the length of the digit: ");
  // unsigned int dig;
  // scanf("%d", &dig);
  // printf("The number is: %*d", dig, integer);
  printf("Enter arbtitrary three digits: > ");
  int num = 0;
  scanf("%*d %d %*d", &num);
  printf("The second digit was %d", num);
  lie hub = 123479023809123;
  printf("%lu", sizeof(lie));
  printf("\n<%llu>\n", hub);
}
int NUM_ADS = 7;
char *ADS[] = {
  "William: SBM GSOH likes sports, TV, dining",
  "Matt: SWM NS likes art, movies, theater",
  "Luis: SLM ND likes books, theater, art",
  "Mike: DWM DS likes trucks, sports and bieber",
  "Peter: SAM likes chess, working out and art",
  "Josh: SJM likes sports, movies and theater",
  "Jed: DBM likes theater, books and dining"
};
void search(void){
  puts("\n----------------------------------------\n");
  for(int i = 0; i < NUM_ADS; i++){
    if(strstr(ADS[i], "sport") && !strstr(ADS[i], "bieber")){
      printf("%s\n", ADS[i]);
    }
  }
  puts("\n----------------------------------------");

}

