# abinaya6
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{ char dict[]; char wrd[20];
puts("Enter paragraph to be stored);
gets(dict);
puts("Enter word to be checked");
gets(wrd);
for(int i=0; i!='\0'; i++)
{ if(wrd[i]==dict[i])
{ puts("No error found"); }
else {
puts("Error at position:"i"in word entered"wrd[i]);
cout<<"Corrected word is:"<<dict[i];
}
}
}
