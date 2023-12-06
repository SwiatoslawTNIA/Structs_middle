#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
void operation(void);
void copy_arr(double arr1[], double source[], int size);
 void copy_ptr(double *target2, double *source, int size);
void count(void);
void copy_ptrs(double *target3, double *source, const double *end_source);
double largest(double *pt,int length);
int indexing(double *p, int length);
void reverse(double *p, int length);
// double **initialize(int rows, int columns);
void copy_2dArray(int rows, int columns, double arr1[rows][columns], double arr2[rows][columns]);
void copy(int columns, double arr1[columns], double arr2[columns]);
int *compose(int *arr1, int *arr2,int length);
// int main(void)
// {
//   // operation();
//   // count();
//   char character = 'Z';
//   char arr[] = {'a', 'b', 'c', 'd'};
//   // char *p = arr;//this assigns a pointer to point to the first element of the array
//   // printf("%c ", *p);
//   // //increment the pointer:
//   // p++;
//   // printf("%c ", *p);
//   // //reassign the value of the pointer to point to another value:
//   // p = &character;
//   // printf("%c", *p);
//   char* const p = arr;//in this case the pointer cannot be changed to point to another value
//   printf("%c ", *p);
//   //increment the pointer:
//   // p++;//cannot change the reference of the pointer
//   printf("%c %c", *p, character);
//   //reassign the value of the pointer to point to another value:
//   // p = &character;//cannot change the pointer to point to another value
//   printf("%c", *p);
//   // const char* const p = arr;//in this case neither pointer nor the value it points to can be changed
//   // printf("%c ", *p);
//   // //increment the pointer:
//   // p++;//not allowed
//   // printf("%c ", *p);
//   // //reassign the value of the pointer to point to another value:
//   // p = &character;//not allowed
//   // printf("%c", *p);
//   const float arr1[] = {1.1, 1.11, 1.111, 1.1111};
//   // //this means that we can't change the values of each element of that array:
//   // float *p_1 = arr1;//discards qualifiers to not allow them to change the values;
//   // printf("%f", *p_1);
//   // p_1++;//point to the next element
//   // printf("%f", *p_1);
//   // *p_1 = 2.222;
//   // printf("%f", p_1);

//   return 0;
// }

// int main(void)
// {
  // double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  // double target1[5];
  // double target2[5];
  // double target3[5];
  // copy_arr(target1, source, 5);
  // copy_ptr(target2, source, 5);
  // copy_ptrs(target3, source, source + 5);
 
  // for(int i = 0; i < 5; i++)
  // {
  //   printf("<%f>", target1[i]);

  // }
  // printf("\n");
  //  for(int i = 0; i < 5; i++)
  // {
  //   printf("<%f>", target2[i]);

  // }
  // printf("\n");

  //  for(int i = 0; i < 5; i++)
  // {
  //   printf("<%f>", target3[i]);
  // }
  // printf("\n");

  // return 0;
  // double arr[] = {12.323, 12.434, 1.2332, 1123, 123.344};
  // double large = largest(arr, 5);
  // printf("%f", large);
  // int index_max = indexing(arr, 5);
  // printf("%d", index_max);
  // reverse(arr, 5);
  // for(int i = 0; i < 5; i++)
  // {
  //   printf("<%f>", arr[i]);
  // }
  // printf("\n");
  // double **res = initialize(4,5);
  // double arr2[4][5];
  // for(int i = 0; i < 4; i++)
  // {
  //   // arr2[i] = *(res + i) 
  //   copy_ptr(arr2[i], res[i], 5);
  // }
// }
// double **initialize(int rows, int columns)
// {
//   double arr[rows][columns];
//   for(int i = 0; i < rows; ++i)
// //   {
//     for(int j = 0; j < columns; ++j)
//     {
//       arr[i][j] = 4;
//     }
//   }
//   // double arr[0] = {12.323, 12.434, 1.2332, 1123, 123.344};
//   // //the same as double *arr;
//   // for(int i = 1; i < columns; ++i)
//   // {
//   //   copy_arr(arr[i], arr[0], 5);
//   // }
//   double **p = arr;
//   return *p;
// }


int main() {
  // const int ROWS = 3;
  // const int COLS = 4;
  //   double sourceArray[3][4] = {
  //       {1.1, 2.2, 3.3, 4.4},
  //       {5.5, 6.6, 7.7, 8.8},
  //       {9.9, 10.0, 11.1, 12.2}
  //   };
    
  //   double destinationArray[ROWS][COLS];

  //   // Copy the source array to the destination array
  //   copy_2dArray(ROWS, COLS, sourceArray, destinationArray);

  //   // Display the content of the destination array to verify the copy
  //   printf("Copied Array:\n");
  //   for (int i = 0; i < ROWS; i++) {
  //       for (int j = 0; j < COLS; j++) {
  //           printf("%.1f ", destinationArray[i][j]);
  //       }
  //       printf("\n");
  //   }
  // int arr1[] = {1,2,3,4,5,6,7};
  // int arr2[] = {1,2,34,4,5,6,7};
  // int arr3[7];
  // for(int i = 0; i < 7; ++i)
  // {
  //   arr3[i] = arr1[i] + arr2[i];
  // }

  // // int *result = compose(arr1, arr2, 7);
  // for(int i = 0; i < 7; ++i)
  // {
  //   printf(" %d ", arr3[i]);
  // }
  int count = 0;
  double arr[3][6];
  double total_ = 0, largest = 0;
  while(count < 3)
  {
    double e[5];
    printf("\nEnter the set of five doubles, please:\n > ");
    scanf("%lf %lf %lf %lf %lf", &e[0], &e[1], &e[2], &e[3], &e[4]);
    double average = 0;
    for(int i = 0; i < 5; ++i)
    {
      if(largest < e[i])
      {
        largest = e[i];
      }
      total_ += e[i];
      average += e[i];
      arr[count][i] = e[i];
    }
    average = average / 5;
    arr[count][5] = average;
    ++count;
  }
    total_ = total_ / 15;
    // arr[0][6] = total_;
    printf("The total average is: %lf\nThe largest double value is: %lf\n\n", total_, largest);
    
    for(int i = 0; i < 3; i++){
      printf("\tThe average of %d row is: %lf\n",i, arr[i][5]);
    }
    return 0;
}
int *compose(int *arr1, int *arr2,int length)
{
  return NULL;
}
void  copy_2dArray(int rows, int columns, double arr1[rows][columns], double arr2[rows][columns])
{
  for(int i = 0; i < rows; i++)
    copy(columns, arr1[i], arr2[i]);
}
void copy(int columns, double arr1[columns], double arr2[columns])
{
  for(int i = 0; i < columns; ++i)
  {
    arr2[i] = arr1[i];
  }
}









void reverse(double *p, int length)
{
  //create a copy of the reference:
  double *p_c = p;
  //copy:
  double arr[length];
  for(int i = 0; i < length; i++)
  {
    arr[i] = *p_c;
    p_c++;
  }
  p_c = p_c - length;
  double *p_c2 = arr;
  for(int i = 0; i < length; ++i)
  {
    *(p_c + i) = *(p_c2 + length -1 - i);
  }
}
int indexing(double *p, int length)//right + 
{
  double current_biggest = *p;
  int b_index = 0, index = 0;
  for(int i = 0; i < length; i++, p++)
  {

    if(*p > current_biggest)
    {
      current_biggest = *p;
      b_index = index;
    }
      ++index;
  }
  return b_index;
}
double largest(double *pt,int length)
{
  double current_biggest = *pt;
  for(int i = 0; i < length; i++, pt++)
  {
    if(*pt > current_biggest)
      current_biggest = *pt;
  }
  return current_biggest;
}
void copy_ptrs(double *target3, double *source, const double *end_source)
{ 
  for(int i = 1; *end_source > 1; i++)
  {
    *(target3 + 5 - i) = *(source + 5 - i);
    --end_source;
  }
}
 void copy_ptr(double *target2, double *source, int size)
 {
  for(int i = 0; i < size; ++i, target2++,source++)
  {
    *target2 = *source;
  }
 }

void copy_arr(double arr1[], double source[], int size)
{
  for(int i = 0; i < size; ++i)
  {
    arr1[i] = source[i];
  }
}
void count(void)
{
  int num_1 = 0, num_2 = 0;
  printf("Enter the character:\n > ");
  char c;
  scanf("%c", &c);
  while((c = getchar())!= '\n')
  {
    ;
  }//move to the end of the line;
  printf("Enter the first number:\n > ");
  while(scanf("%d", &num_1) != 1)
  {
    printf("Not a valid input! Please enter the right answer.");
    while((c = getchar())!= '\n')
    {
      ;
    }
  }
  printf("Enter the second number:\n > ");
  while(scanf("%d", &num_2) != 1)
  {
    printf("Not a valid input! Please enter the right answer.");
    while((c = getchar())!= '\n')
    {
      ;
    }
  }
  //print the character n times n:
  for(int i = 0; i < num_1; i++)
  {
    for(int j = 0; j < num_1;++j)
    {
      printf("%c",c);
    }
    printf("\n");
  }
  
}


void operation(void)
{
  char c, operation;
  double num1 = 0, num2 = 0, result = 0;
  bool done = false;
  while(!done)
  {
    printf("Enter the operation of your choice:\n" "a. add" "\t\t\ts. subtract\n" "m. multiply\t\t"
    "d. divide\n" "q. quit\n");
    scanf("%c", &c);
    if(c == 'q'){
      done = true;
      break;
    }
    getchar();
    printf("Enter the first number: ");
    while((scanf("%lf", &num1) != 1) && done == false)
    {
      printf("%f is not a number.", num1);
      printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
      scanf("%lf", &num1);
      // getchar();
    }
    printf("Enter the second number: ");

    while((scanf("%lf", &num2) != 1) && done == false)
    { 
      printf("%f is not a number.", num2);
      printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
      scanf("%lf", &num2);
      // getchar();
    }
   switch(c)
    {
      case('a'):
      {
        result = num1 + num2;
        operation = '+';
        break;
      };
      case('s'):
      {
        result = num1 - num2;
        operation = '-';
        break;
      };
      case('m'):
      {
        result = num1 * num2;
        operation = '*';
        break;
      };
      case('d'):
      {
        operation = '/';
        result = num1 / num2;
        break;
      };
      case('q'):
      {
        done = true;
      }
    }
   printf("%.2f %c %.2f = %.2f\n", num1, operation, num2, result);
  }
  printf("Bye.");
}