/*c declarations */

%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include<conio.h>
	#include "1707110.tab.h"
	extern int yylval;
%}

declare				[a-zA-Z]([a-zA-Z0-9])*
digit				[-]?[0-9]+
header				"#import"[ ][<][^\n]+[.h][>]
SingleLineComment	!s_cmnt!.*
MultipleLineComment	!m_cmnt![a-zA-z0-9\n ~`\t@#$%^&*<>?,()./":;['{}\|+=_-]*!m_cmnt!
keyword				while|move|when|out|otherwise|for|leap|reverse|mul|palindorme|fib|root|lcm|gcd|min_between|max_between|sum|to|fact|sin|cosec|cos|sec|tan|cot|Log10|Ln|print|HI|BYE|main|jodi|nahoy|nahoy_jodi


%%
"Int"			{return INT; }
"Char"			{return CHAR; }
"Float"			{return FLOAT; }

print			{return PRINT; }
Log10			{return LOG10; }
Ln				{return LN; }
sin				{return SIN; }
cosec			{return COSEC; }
cos				{return COS; }
sec				{return SEC; }
tan				{return TAN; }
cot				{return COT; }
fact			{return FACTORIAL; }
sum				{return SUM; }
to				{return TO; }
max_between		{return MAX; }
min_between		{return MIN; }
gcd				{return GCD; }
lcm				{return LCM; }
root			{return ROOT; }
fib				{return FIBONACCI; }
palindrome		{return PALINDROME; }
mul				{return MUL; }
reverse			{return REVERSE; }
leap			{return LEAP; }

"++"			{return INC; }
"--"			{return DEC; }
"**"			{return MULC; }
"//"			{return DIVC; }
"^^"			{return POWC; }
"<<"			{return LESS_THAN; }
">>"			{return GREATER_THAN; }
"!"				{return NOT; }

jodi			{return IF; }
nahoy			{return ELSE; }
nahoy_jodi		{return ELSE_IF; }

for				{return FOR; }

move			{return MOVE; }
when			{return CASE; }
out				{return BREAK; }
otherwise		{return DEFAULT; }

while			{return WHILE; }

"{"				{return START; }
"}"				{return END; }
[-+/*<>=,_():;%^]	{yylval = yytext[0];	return *yytext; }

[a-z]			{ yylval=*yytext ;	return VAR; }

{SingleLineComment}	{printf("~~Single Line Comment~~ \n");}
{MultipleLineComment}	{printf("~~Multiple Line Comment~~ \n");}
{header}		{printf("Its Header........ \n");}
HI		   		{printf("Hi.......... \n\n");  return HI;}
BYE 		  	{printf("\nOk bye........ \n");  return BYE;}
"main" 			{return MAIN; }
{digit}			{ yylval = atoi(yytext); return NUM; }
{declare}		{ yylval = *yytext-'a'; return VAR; }
\n				{}
.				{}

%%
int yywrap()
{
return 1;
}
int main()
{
printf(".....Final Show Begins.....\n");
freopen("in.txt","r",stdin);
yyparse();

return 0;
}