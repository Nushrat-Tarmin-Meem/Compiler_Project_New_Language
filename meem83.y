%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
void yyerror();
int yylex();
struct {
float tfloat;
int tint;
char *tstr;
}store[900];
int yylex(void);
int indexx=0;
%}

%union
{
int iv;
float fv;
char *sv;
}

%token INT CHAR FLOAT Fun LB st et  RB LP RP CM SM MAIN_FUNCTION ASSIGN PLUS MINUS MULT DIV GT LT Loop SWITCH CASE DEFAULT SHOW CC IF ELSE eo Multiply SUM IEC Prime powerf division YEAR FACTORIAL trigo sine cose tane incre decre lteq gteq and or equal notequal 
%token<sv> VARIABLE
%token<fv> PNFLOAT
%token<iv> PNINT
%type <iv> expr 
%type <fv> floatv
%nonassoc IF
%nonassoc ELSE
%right ASSIGN equal notequal
%left and or
%left LT GT lteq gteq  
%left PLUS MINUS
%left MULT DIV
%right incre decre

%%
program: MAIN_FUNCTION st et LB firststatement RB    { printf("\n---> Execution Successfully Done <---\n"); }
;

firststatement :  
|firststatement declaration
|firststatement assignop SM
|firststatement  secondstatement 
;

declaration : TYPE ID SM 
;

TYPE :INT 
| FLOAT 
|CHAR
;

ID : ID CM id1 
|id1
;

id1:VARIABLE { int f=0,k=0;
              for(k=0;k<indexx;k++)
              {
              if(strcmp(store[k].tstr,$1)==0)
              { 
              printf("\nError!!! %s  Variable Already Exists!\n",store[k].tstr);
              f=1;
              break;
              }
              }
              if(f==0)
              {
              store[indexx].tstr=$1;
              printf("Successful Declaration of Variable:  %s\n",store[indexx].tstr);
              indexx++;
              }
            }

|VARIABLE ASSIGN PNFLOAT { int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
printf("\nError!!! %s  Variable Already Exists!\n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
store[indexx].tstr=$1;
store[indexx].tfloat=$3;
printf("\nValue of Variable %s is:  %f\t %d\n",store[indexx].tstr,store[indexx].tfloat);
indexx++;
}
}

|VARIABLE ASSIGN PNINT { int f=0,k=0;

for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
store[k].tint=$3;
printf("\nError!!! %s  Variable Already Exists!\n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
store[indexx].tstr=$1;
store[indexx].tint=$3;
printf("\nValue of Variable %s is:  %d\n",store[indexx].tstr,store[indexx].tint);
indexx++;
}
}
;


assignop: assignop CM assign
|assign
;


assign:VARIABLE ASSIGN PNFLOAT {
int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
store[k].tfloat=$3;
printf("\nValue of Variable %s is:  %f \n",store[k].tstr,store[k].tfloat);
f=1;
break;
}
}
if(f==0)
{
printf("\nError!!! Undeclared Variable!\n");
}
}

|VARIABLE ASSIGN PNINT {
int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
store[k].tint=$3;
printf("\nValue of Variable %s is:  %d \n",store[k].tstr,store[k].tint);
f=1;
break;
}
}
if(f==0)
{
printf("\nError!!! Uneclared Variable!\n");
}
}
;


secondstatement : SM
| expr SM { printf("\nValue of Exprssion is: %d \n",$1); }

|floatv SM { printf("\nValue of Exprssion is: %f \n",$1); }

| SWITCH LP expr RP LB CASE expr CC SHOW LP expr RP SM  CASE expr CC  SHOW LP expr RP SM  DEFAULT CC  SHOW LP expr RP SM   RB
{
if($7==$3)
{
printf("\nValue in Switch-Case is: %d\n",$11);
}
else if($15==$3)
{
printf("\nValue in Switch-Case is: %d\n",$19);
}
else{
printf("\nValue in Switch-Case is: %d\n",$26);
}
}
| SWITCH LP expr RP LB CASE expr CC SHOW LP expr RP SM CASE expr CC SHOW LP expr RP SM  CASE expr CC  SHOW LP expr RP SM  DEFAULT CC  SHOW LP expr RP SM   RB
{
if($7==$3)
{
printf("\nValue in Switch-Case is: %d\n",$11);
}
else if($15==$3)
{
printf("\nValue in Switch-Case is: %d\n",$19);
}
else if($23==$3){
printf("\nValue in Switch-Case is: %d\n",$27);
}
else{
printf("\nValue in Switch-Case is: %d\n",$34);
}
}
| SWITCH LP expr RP LB CASE expr CC SHOW LP expr RP SM CASE expr CC SHOW LP expr RP SM  CASE expr CC  SHOW LP expr RP SM  CASE expr CC  SHOW LP expr RP SM  DEFAULT CC  SHOW LP expr RP SM   RB
{
if($7==$3)
{
printf("\nValue in Switch-Case is: %d\n",$11);
}
else if($15==$3)
{
printf("\nValue in Switch-Case is: %d\n",$19);
}
else if($23==$3){
printf("\nValue in Switch-Case is: %d\n",$27);
}
else if($31==$3){
printf("\nValue in Switch-Case is: %d\n",$35);
}
else{
printf("\nValue in Switch-Case is: %d\n",$42);
}
}


| Fun VARIABLE LP RP LB IF LP expr RP LB expr SM RB ELSE LB expr SM RB RB
{
  printf("Function Starts Here...");
 if($8)
     { 
       printf("\nValue in IF Block is:  %d\n",$11);
    }
 else
    {
       printf("\nValue in IF Block is:  %d\n",$11);
    }
  printf("Function Ends Here...");
}


|eo st expr et SM  {
	       int  n=$3;   

			if(n%2==0){
			printf("%d is an Even Number \n",$3);
}
else{
printf("%d is an Odd Number \n",$3);

}


	     }


|Multiply st expr CM expr et SM {
int n=$3;
int rem=$5;
int mul=1,i;

			for(i=n;i<=rem;i++){
	                                 mul*=i;			
			}
		
			printf("Continuous Multiplication from %d to %d is:  %d\n", $3, $5,mul);
}


|SUM st expr CM expr et SM  {
	         int n=$3;
int rem=$5;
int f=0,i;

			for(i=n; i<=rem; i++)
			{
				f+=i;			
			}
			printf("Continuous Summation from %d to %d is:  %d\n", $3, $5,f);
	     }


|IF LP expr RP LB expr SM RB
{
 if($3)
     { 
       printf("\nValue of Exprssion in IF Block is:  %d\n",$6);
    }
 else
    {
      printf("\nCondition Value is Zero in IF Block\n");
    }
}
|IF LP expr RP LB IF LP expr RP LB expr SM RB ELSE LB expr SM RB expr SM RB
{
  printf("\nIf-Else within If\n");
}

|IF LP expr RP LB expr SM RB ELSE LB expr SM RB{

 if($3) 
   {
    printf("\nValue of Exprssion in IF Block is:  %d\n",$6);
   }
 else
   { 
     printf("\nValue of Exprssion in ELSE Block is:  %d\n",$11);
   }
}



|Loop list
|Prime st expr et SM {
int n=$3;
int prime=0,i;
for(i=2;i<n;i++){
  if(n%i==0){
  prime=1;
  break;
  }			
}
		if(n==1){
		printf("%d is Neither a  Prime Number Nor a Composite\n", $3);
    }
    else if(prime==0){
    printf("%d is a Prime Number\n", $3);
    }
    else{
    printf("%d is Not a Prime Number\n", $3);
    }
}


|powerf st expr CM expr et SM {
int n=$3;
int nn=$5;
			
			printf("%d ^ %d :   %lf\n", $3, $5,pow(n,nn));
}


|FACTORIAL st expr et SM  {
	        int n=$3,i,fac=1;   

			for(i=n; i>=2; i--)
			{
				fac*=i;			
			}
			
			printf("Factorial of %d is:  %d\n",$3,fac);
	     }


|YEAR st expr et SM {
if($3 % 4==0){
printf("%d is a Leap Year\n", $3);
}
else{
printf("%d is Not a Leap Year \n",$3);
}
}


|division   st expr CM expr et SM {
int n; 
if($5!=0)
    {
     n = $3 / $5;
     printf("\nResult of Divison is:  %d\n",n);
    }
    else
    {
     n = 0;
     printf("\nError!!! Division by Zero!\n");
    }
}


|SHOW LP expr RP SM {printf("\nScreen Display:  %d\n",$3);}
|SHOW LP floatv RP SM {printf("\nScreen Display Value of Expression is:  %f\n",$3);}
|trigo st angle et  SM 
;



list:LP expr CM expr RP LB expr ASSIGN expr MULT expr SM RB {
int n=$2;
int rem=$4;
int l=$9;
int r=$11;
int k=$7,o,p;
for(p=n;p<=rem;p++){	
k=k*$11;
printf("Multiple Value Inside Loop is:  %d\n", k);	
}
for(o=0;o<indexx;o++){
if($7==store[o].tint){
store[o].tint=k;
break;
}
}
}
|LP expr CM expr RP LB IF LP expr RP LB expr SM RB  RB
{
  printf("\nIF BLOCK within Loop\n");
}

|LP expr CM expr RP LB expr ASSIGN expr PLUS expr SM RB {
int n=$2;
int rem=$4;
int l=$9;
int r=$11;
int k=$7,o,p;
for(p=n;p<=rem;p++){	
k=k+$11;
printf("Summation Value Inside Loop is:  %d\n", k);	
}
for(o=0;o<indexx;o++){
if($7==store[o].tint){
store[o].tint=k;
break;
}
}
}
;


angle : sine LP expr RP   {
	           

			
			printf("Sine of %d Degree is :  %lf \n",$3,sin($3*3.1416/180));
}
|cose LP expr RP   {
	           

			
			printf("Cosine of %d Degree is :  %lf \n",$3,cos($3*3.1416/180));
}
|tane LP expr RP   {
	           

			
			printf("Tangent of %d Degree is :  %lf \n",$3,tan($3*3.1416/180));
}
;


floatv:PNFLOAT {store[indexx].tfloat=$1;
$$=store[indexx].tfloat;
indexx++;
} 
|floatv PLUS floatv { $$ = $1 + $3; }
|floatv MINUS floatv { $$ = $1 - $3; }
|floatv MULT floatv { $$ = $1 * $3; }
|floatv DIV floatv {
  if($3)
    {
     $$ = $1 / $3;
   }
  else
    {
     $$ = 0;
     printf("\nError!!! Division by Zero!\n");}
    }
|floatv LT floatv { $$ = $1 < $3; }
|floatv GT floatv { $$ = $1 > $3; }
|LP floatv RP   { $$ = $2; }
|floatv incre  {$$ = $1 + 1;}
|floatv decre   {$$ = $1 - 1;}
|floatv lteq floatv {$$ = $1 <= $3;}
|floatv gteq floatv {$$ = $1 >= $3;}
|floatv or floatv {$$ = $1 || $3;}
|floatv and floatv {$$ = $1 && $3;}
|floatv equal floatv {$$ = $1 == $3;}
|floatv notequal floatv {$$ = $1 != $3;}
;
expr :PNINT {store[indexx].tint=$1;
$$=store[indexx].tint;
indexx++;
}


|VARIABLE   { int j=0,f=0;
for(j=0;j<indexx;j++)
{
if(strcmp(store[j].tstr,$1)==0)
{
$$=store[j].tint;
f=1;
break;
}
}
if(f==0)
{
printf("\nError!!! Uneclared Variable!\n");
}
 } 
|expr PLUS expr { $$ = $1 + $3; }
|expr MINUS expr { $$ = $1 - $3; }
|expr MULT expr { $$ = $1 * $3; }
|expr DIV expr {
  if($3)
    {
     $$ = $1 / $3;
   }
  else
    {
     $$ = 0;
     printf("\nError!!! Division by Zero!\n");}
    }
|expr LT expr { $$ = $1 < $3; }
|expr GT expr { $$ = $1 > $3; }
|LP expr RP   { $$ = $2; }
|expr incre {$$ = $1 + 1;}
|expr decre  {$$ = $1 - 1;}
|expr lteq expr {$$ = $1 <= $3;}
|expr gteq expr {$$ = $1 >= $3;}
|expr or expr {$$ = $1 || $3;}
|expr and expr {$$ = $1 && $3;}
|expr equal expr {$$ = $1 == $3;}
|expr notequal expr {$$ = $1 != $3;}
;
%%
