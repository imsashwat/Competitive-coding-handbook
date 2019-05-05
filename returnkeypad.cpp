#include <string>
using namespace std;
int helper(int num , string output[], string mapping)
{
 string newOutput[10000];
 int s = helper(num/10 , newOutput , mapping);
}


int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    string mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return helper(num,output,mapping);


}
