//incrementing a pointer
int arr[5] = {10, 20, 30, 40, 50};
int *p = arr;
p++;  // Now p points to the second element, 20

//Adding an integer to a pointer
int arr[5] = {10, 20, 30, 40, 50};
int *p = arr;
p += 3;  // Now p points to the fourth element, 40

//Subtracting on pointer from another. 
int arr[5] = {10, 20, 30, 40, 50};
int *p1 = &arr[0];  // Pointer to the first element
int *p2 = &arr[3];  // Pointer to the fourth element
int diff = p2 - p1;  // diff is now 3
