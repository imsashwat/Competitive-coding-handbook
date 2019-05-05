 #include <iostream>
 using namespace std;
 #include "shallowuse.cpp"
  #include<cstring>
 int main()
 {
     char name[] = "abcd";
     student s1(20,name);
     s1.display();

     char name[2] = 'e';
     student s2(21,name);
     s2.display();
 }
