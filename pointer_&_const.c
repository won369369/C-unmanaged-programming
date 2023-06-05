//pointer to constant
const int val = 10;
int const val2 = 20;
const int *ptr = &val;

ptr = &val2; // This is fine, you can change where ptr points
*ptr = 30; // Error, you can't change the value of what ptr points to

//constant pointer
int val = 10;
int val2 = 20;
int *const ptr = &val;

ptr = &val2; // Error, you can't change where ptr points
*ptr = 30; // This is fine, you can change the value of what ptr points to

//Constant pointer to a constant
const int val = 10;
const int val2 = 20;
const int *const ptr = &val;

ptr = &val2; // Error, you can't change where ptr points
*ptr = 30; // Error, you can't change the value of what ptr points to
