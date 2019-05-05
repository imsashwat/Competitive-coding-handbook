#include<iostrea>
using namespace std;
int main()
{


Topics


Character Arrays and 2D Arrays
Deadline
Jan 1, 1970
Lecture
98.5%

Score 640.00/650

String Palindrome
40.0/40

Replace Character
40.0/40

Trim Spaces
40.0/40

Find All Substrings
80.0/80

Reverse Each Word
80.0/80

Column Wise Sum
40.0/40

Declare 2D array
10.0/10

Invalid statement
0/10

Fill the output
10.0/10

Fill the output
10.0/10

What is the output
10.0/10

Largest Row or Column
80.0/80

Wave Print
80.0/80

Spiral Print
120.0/120


ASK DOUBT


SOLUTION

Problem
Result
String Palindrome
Send Feedback
Given a String s, check it its palindrome. Return true if string is palindrome, else return false.
Palindrome strings are those, where string s and its reverse is exactly same.
Input Format :
 String S
Output Format :
"true" if S is palindrome, else "false"
Sample Input 1 :
abcdcba
Sample Output 1 :
true
Download Test Cases


1
​
2
bool checkPalindrome(char str[]){
3
​
4
​
5
  /* Don't write main().
6
   *  Don't read input, it is passed as function argument.
7
   *  Return output and don't print it.
8
   *  Taking input and printing output is handled automatically.
9
   */
10

11
​
12
}
13
​

CUSTOM INPUT


SUBMIT


PREVIOUS


NEXT

Java (SE 1.8)
C (gcc 5.4)
C++ (g++ 5.4)

1
​
2
int length(char str[]){
3
  int len = 0;
4
  int i = 0;
5
  while(str[i] != '\0'){
6
    i++;
7
  }
8
  return i;
9
}
10
​
11
bool checkPalindrome(char str[]){
12
​
13
​
14
  /* Don't write main().
15
   *  Don't read input, it is passed as function argument.
16
   *  Return output and don't print it.
17
   *  Taking input and printing output is handled automatically.
18
   */
19
​
20
    int i = 0, j = length(str) - 1;
21
        while(i < j){
22
            if(str[i] != str[j]){
23
                return false;
24
            }
25
            i++;
26
            j--;
27
        }
28
        return true;
29
}
30
​


}
