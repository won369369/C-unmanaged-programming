struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student s1;
strcpy(s1.name, "John Doe");
s1.roll = 12;
s1.marks = 89.5;

//Initialization by declaration
struct Student s2 = {"Jane Doe", 22, 91.5};

