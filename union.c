union Data {
   int i;
   float f;
   char str[20];
};
union Data data;

data.i = 10;
printf("data.i : %d\n", data.i);

data.f = 220.5;
printf("data.f : %.2f\n", data.f);

strcpy(data.str, "C Programming");
printf("data.str : %s\n", data.str);
