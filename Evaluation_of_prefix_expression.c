#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
 int s[30],i,a,b,top=-1; 
 char p[30]; 
 printf("\n enter your expretion:"); 
 gets(p); 
 strcat(strrev(p),"("); 
 printf("%s",p); 
 for(i=0;p[i]!='(';i++) 
 { 
 if(p[i]=='+'||p[i]=='-'||p[i]=='*'||p[i]=='/'||p[i]=='^') 
 { 
 a=s[top]; 
 top--; 
 b=s[top]; 
 printf("\n%d\t%d",a,b); 
 switch(p[i]) 
 { 
 case '+': 
 s[top]=a+b; 
 printf("\t%d",s[top]); 
 break; 
 
 case '-': 
 s[top]=a-b; 
 printf("\t%d",s[top]); 
 break; 
 
 case '*': 
 s[top]=a*b; 
 printf("\t%d",s[top]); 
 break; 
 
 case '/': 
 s[top]=a/b; 
 printf("\t%d",s[top]); 
 break; 
 
 case '^': 
 s[top]=a^b; 
 printf("\t%d",s[top]); 
 break; 
 } 
 } 
 else 
 { 
 top++; 
 s[top]=p[i]-48; 
 } 
 } 
 printf("%d",s[top]); 
 getch(); 
} 
