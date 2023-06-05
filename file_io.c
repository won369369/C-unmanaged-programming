FILE *fptr = fopen("file.txt", "r");
FILE *filePointer = fopen("example.txt", "r");
int character = fgetc(filePointer);
fputc('A', filePointer);
fclose(filePointer);
