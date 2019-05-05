 class student
 {
     private :
     int age;

     public :
         char *name;

     student (int age,char *name)
     {
         this -> age = age;
         //shallow copy
         this -> name = new char [strlen(name) + 1];  //source
         strcpy(this->name,name);  //destination
     }

     student(student const &s)
     {
         this -> age = s.age;
         this -> name = new char[strlen(s.name) + 1];
         strcpy(this->name, s.name);
     }

     void display () {
        cout << name << age <<endl;
     }
 };
