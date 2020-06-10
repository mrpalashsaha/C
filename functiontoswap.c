int main () {
int a [10];
printf ("address of a = %p\n", &a);
int i = 0;
while (i <10) {

printf ("address of a [%d]= %p\n",i,  &a[i]);
i++;
}

return 0;
}
