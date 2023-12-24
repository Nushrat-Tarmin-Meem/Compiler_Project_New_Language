%{
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "meem83.tab.h"
#include <stdlib.h>
int yyparse();
int yyerror();
%}

variable [a-zA-Z_$][a-zA-Z0-9_]*

%%

[-+]?[0-9]+ { 
  yylval.iv=atoi(yytext);
     return PNINT;
}
[-+]?[0-9]*"."[0-9]+ { 
  yylval.fv=atof(yytext);
     return PNFLOAT;
}

"="         {return ASSIGN;}
"int"       {return INT;}
"float"     {return FLOAT;}
"char"      {return CHAR;}
"switch"    {return SWITCH;}
"case"      {return CASE;} 
"loop"      {return Loop;}
"function"  {return Fun;}
"default"   {return DEFAULT;}
"screen"    {return SHOW;}
"-->"       {return st;}
"<--"       {return et;}
"+"         {return PLUS;}
"/"         {return DIV;}
"*"         {return MULT;}
"-"         {return MINUS;}
"csum"      {return SUM;}
"cmultiply" {return Multiply;}
"even~odd"  {return eo;}
"fil"       {return IF;}
"fill"      {return ELSE;}
"leap~year" {return YEAR;}
"division"  {return division;}
"prime~no"  {return Prime;}
"factorial" {return FACTORIAL;}
"power" 	   {return powerf;}
"TRIGON"    {return trigo;}
"SIN"       {return sine;}
"COS"       {return cose;}
"TAN"       {return tane;}
"("         {return LP;}
")"         {return RP;}
"Begin"     {return LB;}
"Finish"    {return RB;}
"<"         {return LT;}
">"         {return GT;}
","         {return CM;}
";"         {return SM;}
":"         {return CC;}
"++"        {return incre;}
"--"        {return decre;}
">="        {return gteq;}
"<="        {return lteq;}
"&&"        {return and;}
"||"        {return or;}
"=="        {return equal;}
"!="        {return notequal;}

{variable} {yylval.sv=strdup(yytext);
return VARIABLE;
}

"PROGRAM LOADING" {return MAIN_FUNCTION;}

[ \t\n]* ;

. {
    yyerror("Unknown Character!\n");
 }
%%

int yywrap(){
return 1;
}
int yyerror(char *s)
{
fprintf(stderr,"%s\n",s);
}

int main()
{
yyin=freopen("meem_i.txt","r",stdin);
yyout=freopen("meem_o.txt","w",stdout);
yyparse();
}