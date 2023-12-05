#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
void days_to_week(void);
void convert(void);
void pattern(void);
void pyramid(void);
void squaring(void);
void write_eight(void);
void print_twos(void);
void invest(void);
void friends(void);
void count(void);
void convert_to(void);
void output(void);
void letter_count(void);
void answer_search(void);
int main(void)
{
  // int done = 0;
  // while(!done){
  //   printf("Enter the time in minutes:\n > ");
  //   double minutes;
  //   scanf("%lf", &minutes);
  //   int hours = minutes / 60; 
  //   int left = minutes - (hours* 60);
  //   printf("\nYour time in seconds is %.2f , which equals to %d hours and %d minutes.\n", minutes, hours, left);

  //   printf("Do you want to continue? If yes press \"y\"");
  //   char answer;
  //   scanf("%c", &answer);
  //   if(answer == 'y'){
  //     done = 1;
  //   }else{
  //     done = 0;
  //   }
  // }
  // days_to_week();
  // convert();
  // pattern();
  // pyramid();
  // squaring();
  // write_eight();
  // print_twos();
  // invest();
  // friends();5
  // printf("The boolean values are: %i, %i", true, false);
  // count();
  // convert_to();
  // output();
  // letter_count();
  answer_search();
}
void answer_search(void)
{
  char answer;
  printf("Welcome to the guessing game!!!!\n");
  printf("Guess any number between 1 and 100\n");
  printf("Let me guess...\n");

  // printf("Is your number %d?", num);
  // scanf("%c", &answer);
  // int number = 0;
  // if(answer == 'y')
  // {
  //   printf("Your number was: %d", num);
  // }else{
  //   number = sort(num);
  // }
  // printf("Your number was %d", number);
  int lower = 1, upper = 100, guess = 0, available_guesses = 0;
  bool done = false;
  do{
    if(available_guesses == 6)
    {
      break;
    }
    guess = (upper + lower )/ 2;
    printf("Is your number %d?", guess);
    scanf("%c", &answer);
    getchar();
    if(answer == 'y'){
      printf("Your number was %d", guess);
      done = true;
    }
    printf("Is your number higher or lower than %d", guess);
    scanf("%c", &answer);
    getchar();
    if(answer == 'h'){
      lower = guess + 1;
    }
    if(answer == 'l')
    {
      upper = guess - 1;
    }
  ++available_guesses;
  }while(!done && available_guesses < 7);
  printf("Your number was %d", guess);
  //   printf("Is it higher (h) or lower (l) than %d", num);
  //   scanf("%c", answer);
  //   if(answer == 'h')
  //   {
  //     num = num + num / 2;
  //   }else if(answer == 'l')
  //   {
  //     num = num - num / 2;
  //   }
  // }
}

void letter_count(void)
{
  printf("Type here(& to quit):\n > ");
  char c;
  int word = 0, words = 0, length = 0;
  bool done = false;
  double total = 0;
  while((c = getchar()) !=EOF && done == false)
  {
    if(!isalpha(c) && word == 1)
    { 
      ++words;
    }
    if(isalpha(c))
    {
      word = 1;
      ++length;
    }
    if(!isalpha(c)){
      word = 0;
      total += length;
      length = 0;
    }
    if(c == '&')
    {
      done = true;
    }

  }
  float average = total / words;
  printf("%f", average);
}




void output(void)
{
  printf("Enter the text here(to quit press qq):\n > ");
  char c;
  int letters = 0, digits = 0, uppercase = 0 , lowercase = 0;
  bool done = false;
  while(((c = getchar()) != EOF) && !done)
  {
      // printf("%c", c);
      if(c == '!'){
        printf("Exiting...");
        done = true;
      }
      if(isalnum(c))//if our character is either a number or a letter
    {
      if(isdigit(c))
      {
        // before;
        ++digits;
      }else if(isalpha(c))
      {
        ++letters;
      }
      
      if(isupper(c))
      {
        ++uppercase;
      }else if(islower(c))
      {
        ++lowercase;
      }
      
    }

  }
}
void convert_to(void)
{
  bool quit = false;
  printf("Write the text here:\n > ");
  char c;
  while(((c = getchar()) != EOF) && !quit){
    switch(c){
      case('\n'): 
      {
        printf("<\\n>, value <10>\n");
        break;
      }
      case(' '):
      {
        printf("< >, value <32>\n");
        break;

      }
      case('\t'): 
      {
        printf("<\\t>, value <9>\n");
        break;

      }
      case('q'):{
        quit = true;
        break;
      }
      default: {
        printf("<%c>, value: <%d>\n", c, c);
      }
    }
  }
  printf("Output terminated!");

}


void count(void)
{
  //
  int word_s = 0;
  int quit = 0;

  int words = 0, characters = 0, whitespaces = 0, lines = 0;
  printf("Start typing (press :q to quit):\n > ");
  char c;
  while((c = getchar()) != EOF)
  {
    if(c == ':'){
      quit = 1;
    }else if(c == ' ' || c == '\t' )
    {
      if(word_s == true)
      {
        words++;
        word_s = false;
      }
    }
    if(quit == 1 && c == 'q'){
      break;
    }else if(c == ' ' || c == '\t'){
      whitespaces++;
      ++words;
    }else if(c == '\n')
    {
      lines++;
    }
    characters++;
    //words:
    if(isalpha(c) && word_s){
      
      word_s = true;
    }
    if(isalpha(c)){
      //if the character is alphabetic ec. a-z A-Z
      word_s = true;
    }
  }
  printf("The characters in text: words: %d, letters: %d, whitespaces: %d, lines: %d\n", words, 
  characters, whitespaces, lines);
}
void friends(void)
{
  int initial_amount = 5;
  int weeks = 20;
  for(int i = 1; i <= weeks; i++)
  {
    initial_amount -= i;//first operation
    initial_amount *= 2;
  }
  printf("The amount of friends at the end of the %d'th week is: %d", weeks, initial_amount);
}


void invest(void)
{
  int d_s = 100;
  // int invest_percent = .1;//increases every single year
  //10% of the original investment is:
  int value = 100 * .1;//
  int p_s = 100;
  // int percent = .05;
  //the first year the investment will be:
  
  int years = 0;
  while(1)
  {
  d_s = d_s + value;//times years;
  p_s = p_s + ( .05 * p_s);
  ++years;
  if(p_s > d_s)
  {
    break;
  }
  }
  printf("The amount of years it takes to be more lucrative is: %d", years);

}
void print_twos(void)
{
  int integer[9];
  // int result = 1;
  for(int i = 0; i < 8; i++)
  {
    int result = 1;
    for(int k = 0; k < i; k++)
    {
      result *= 2;
      
    }
    integer[i] = result;
    
  }
  for(int j = 0; j < 8; j++){
    if(j == 7){
    printf("%d\n", integer[j]);
    break;
    }
    printf("%d, ", integer[j]);
  }
}


void write_eight(void)
{
  int arr[9];
  for(int i = 0; i < 8; ++i)
  {
    printf("\nEnter the number: ");
    scanf("%d", &arr[i]);
  }
  //print them in reverse order:
  for(int i = 8; i >= 0; --i)
  {
    printf("%d, ", arr[i]);
  }
}
void squaring(void)
{ 
  while(1){
    printf("Enter lower and upper integer limits:");
    int limit_1 = 0, limit_2 = 0;
    scanf("%d %d", &limit_1, &limit_2);
    int sq = limit_1 * limit_1;
    int sq_2 = limit_2 * limit_2;
    //compute the sum:
    double sum = 0;
    while(limit_1 <= limit_2){
      int square = limit_1 * limit_1;
      sum += square;
      limit_1++;
    }
    printf("The sums of the squares form %d to %d is %.0f\n", sq, sq_2, sum);
  }
}



void pattern(void)
{
  char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  //no more than 5 will be needed;
  int k = 0;//offset
  for(int i = 0; i < 6; i++){
    for(int times = 0;times <= i; ++times)
    {
      printf("%c", lets[k]);
      k++;
    }
   printf("\n");
  }
  // for(int i = 0 ;i < 5; i++){
  //    for(; k <= i; k++)
  //    {
  //     char str[6];
  //     str[k] = lets[k];
  //      printf("%s\n", str);
  //    }

  // }
}
void convert(void)
{
  int dig_1, dig_2;
  printf("This program computes moduli.\n");
  printf("Enter an integer to serve as the second operand: ");
  scanf("%d", &dig_1);
  printf("Now enter the first operand: ");
  scanf("%d", &dig_2);
  int result = dig_1 % dig_2;
  printf("%d %% %d is %d", dig_1, dig_1, result);

  while(1)
  {
    printf("\nEnter next number for first operand (<= 0 to quit)");
    scanf("%d", &dig_2);
    if(dig_2 <= 0)
    {
      break;
    }
    printf("\n%d %% %d is %d", dig_1, dig_2, dig_1 % dig_2);
  }
}
void pyramid(void){
  char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char str[11];// at most six characters
  printf("Please enter your character here: \n > ");
  char letter;
  scanf("%c", &letter);
  //find the index in the array of our letter:
  int index = 0; 
  int j = 0;
  while(letter != lets[j]){
    ++index;
    j++;
  }
  int offset = 5;
  int index_c = index;
  for(int k = 0; k < 4; k++)
  {
    for(int i = 0; i <= k;i++)
    {
      //check if our index is bigger than 26, and if it is, reset it:
      if(index > 26){
        index -= 26;
      }
      str[i + k] = lets[index];
      str[k - i] = lets[index];
      
      index++;
    }
    index = index_c;//start from the original letter;
    for(int l = 0; l < offset;l++){
      printf(" ");
    }
    printf("%s\n", str);
    --offset;
  }
  
 
}


void days_to_week(void)
{
  printf("Enter the amount of days:\n > ");
  int days = 0;
  scanf("%d" ,&days);
  int remainder = days % 7;
  int weeks = days /7;
  printf("The converted value is following: week(s): %d, day(s): %d", weeks, remainder);
}