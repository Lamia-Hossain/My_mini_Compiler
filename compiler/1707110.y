/*bison file*/
/*c declaration*/
%{
#include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
int yylex(void);
int sym[26],store[100];
int var,check;
float degree = 3.1416/180;
%}
/*bison declare */ 
%token START END NUM VAR PRINT INT FLOAT CHAR HI BYE MAIN
%token NOT LOG10 LN REVERSE SIN COSEC COS SEC TAN COT FACTORIAL ROOT SUM TO MAX MIN GCD LCM FIBONACCI LEAP PALINDROME MUL
%token WHILE FOR MOVE CASE BREAK DEFAULT IF ELSE ELSE_IF 
%token INC DEC MULC DIVC POWC GREATER_THAN LESS_THAN
%nonassoc IFX
%nonassoc ELSE_IFX
%nonassoc ELSE
%left '<' '>'
%left '+' '-'
%left '*' '/'

/*simple gram rules*/
%%
program: MAIN ':' HI cstatement BYE { printf("\nWOOOHHOOOOOO \nOperation Successful \n"); }
 ;

cstatement : /*empty*/
	|cstatement statement
	|cstatement cdeclare
;

cdeclare : TYPE ID ';' { 
	if($1==1) printf("Valid declare for Int type\n"); 
	else if($1==2)	printf("Valid declare for Float type\n");
	else			printf("Valid declare for Char type\n");
	}
;

TYPE :INT	{ $$ = 1; }
	| FLOAT	{ $$ = 2; }
	| CHAR	
;

ID : ID ',' VAR  {
		if(store[$3]==1)	printf("%c variable is already declared \n",$3);
		else				store[$3]=1;
	}
    |VAR { 
		if(store[$1]==1)	printf("%c variable is already declared \n",$1);
		else				store[$1]=1;
	}
;

statement: ';'			
	| exp ';' 				{ printf("Value of Operation: %d\n", $1); $$=$1; var=$$; }
	
	| VAR '=' exp ';' { 
		sym[$1] = $3; 
		printf("Value of the variable: %d\t\n",$3);
		$$=$3;
	} 
   
	| PRINT '(' exp ')' ';' { printf("Value is : %d\n",$3,$3); }

	| s_operations

/*if else*/
	| ifelse

/*if elif else*/
	| ifelifelse

/*if*/
	| IF '(' exp ')' START exp ';' END %prec IFX{
		if($3)				printf("Value of expression in JODI: %d\n",$6);
		else				printf("Condition is not true in JODI block\n");
		}

/*if(if else) elif else*/
	| IF '(' exp ')' START ifelse  END ELSE_IF '(' exp ')' START exp ';' END ELSE START exp ';' END {
		if($3)				printf("");
		else if($11)		printf("Value of expression in NAHOY_JODI : %d\n",$14);
		else				printf("Value of expression in NAHOY : %d\n",$18);
	}

/*if(if elif else) elif else*/
	| IF '(' exp ')' START ifelifelse  END ELSE_IF '(' exp ')' START exp ';' END ELSE START exp ';' END {
		if($3)				printf(""); 
		else if($11)		printf("Value of expression in NAHOY_JODI : %d\n",$14);
		else				printf("Value of expression in NAHOY : %d\n",$18);
	}

/*if elif(if else) else*/
	| IF '(' exp ')' START exp ';' END ELSE_IF '(' exp ')' START ifelse END ELSE START exp ';' END {
		if($3)				printf("Value of expression in JODI : %d\n",$6);
		else if($11)		printf("");
		else				printf("Value of expression in NAHOY : %d\n",$18);
	}

/*if elif(if elif else) else*/
	| IF '(' exp ')' START exp ';' END ELSE_IF '(' exp ')' START ifelifelse END ELSE START exp ';' END{
		if($3)				printf("Value of expression in JODI : %d\n",$6);
		else if($11)		printf("");
		else				printf("Value of expression in NAHOY : %d\n",$18);
	}

/*for loop plus*/
	| FOR NUM TO NUM exp START VAR '=' VAR INC NUM ';' END {
		int i,j=$5,first=$2,last=$4;
		printf("\n");
		if(first<last){
			for(i=$2;i<=$4;i++) {
			j = j+$11;
			printf("For Loop statement for %d : %d\n",i,j);
			}
		}
		else{
			for(i=$4;i<=$2;i++) {
			j = j+$11;
			printf("For Loop statement for %d : %d\n",i,j);
			}
		}
		
		printf("FOR LOOP DONE FOR PLUS\n");
	}

/*for loop mul*/
	| FOR NUM TO NUM exp START VAR '=' VAR MULC NUM ';' END {
		int i,j=$5;
		printf("\n");
		for(i=$2;i<=$4;i++) {
			j = j*$11;
			printf("For Loop statement for %d : %d\n",i,j);
		}
		printf("FOR LOOP DONE MULTIPLICATION\n");
	}

/*for loop div*/
	| FOR NUM TO NUM exp START VAR '=' VAR DIVC NUM ';' END {
		int i,j=$5;
		printf("\n");
		for(i=$2;i<=$4;i++) {
			j = j/$11;
			printf("For Loop statement for %d : %d\n",i,j);
		}
		printf("FOR LOOP DONE DIVISION\n");
	}

/*for loop minus*/
	| FOR NUM TO NUM exp START VAR '=' VAR DEC NUM ';' END {
		int i,j=$5;
		printf("\n");
		for(i=$2;i<=$4;i++) {
			j = j-$11;
			printf("For Loop statement for %d : %d\n",i,j);
		}
		printf("FOR LOOP DONE FOR MINUS\n");
	}

/*for loop power*/
	| FOR NUM TO NUM exp START VAR '=' VAR POWC NUM ';' END {
		int i,j=$5;
		printf("\n");
		for(i=$2;i<=$4;i++) {
			j = pow(j,$11);
			printf("For Loop statement for %d : %d\n",i,j);
		}
		printf("FOR LOOP DONE FOR POWER\n");
	}

/*WHILE LOPP greater than*/
	| WHILE '(' S_VAR '>' S_VAR ')' START exp ';' END { 
		if($3>$5){
			printf("While condition is true for greater than sign.\nWHILE loop no :\n");
			int last=$5;
			while($3>last){
				printf("%d\n",last);
				last++;
			}
			printf("WHILE LOOP DONE DONE DONE\nResult is %d\n\n",$8);
		}
	}

/*WHILE LOPP less than*/
	| WHILE '(' S_VAR '<' S_VAR ')' START exp ';' END { 
		if($3<$5){
			printf("While condition is true for less than sign.\nWHILE loop no :\n");
			int first=$3;
			while(first<$5){
				printf("%d\n",first);
				first++;
			}
			printf("WHILE LOOP DONE DONE DONE\nResult is %d\n\n",$8);
		}
	}

/*WHILE LOPP not */
	| WHILE '(' S_VAR NOT S_VAR ')' START exp ';' END { 
		if($3!=$5){
			printf("While condition is true for not sign.\n");
			if($3>$5){
				printf("FIRST one is greater than the SECOND.\nWHILE loop no :\n");
				int last=$5;
				while($3>last){
					printf("%d\n",last);
					last++;
				}
				printf("WHILE LOOP DONE DONE DONE\nResult is %d\n\n",$8);
			}
			else{
				printf("SECOND one is greater than the FIRST.\nWHILE loop no :\n");
				int first=$3;
				while(first<$5){
					printf("%d\n",first);
					first++;
				}
				printf("WHILE LOOP DONE DONE DONE\nResult is %d\n\n",$8);
			}
		}
	}

/*SWITCH LOOP*/
	| MOVE '(' S_VAR ')' START S_stmnt END { printf("SWITCH LOOP DONE DONE DONE\n\n"); }
;
 

S_VAR : NUM			{ var = $1; }
| VAR				{ $$ = sym[$1]; var = $$; }
| S_VAR '+' S_VAR	{ var = $1 + $3; }
| S_VAR '-' S_VAR	{ var = $1 - $3; }
| S_VAR '*' S_VAR	{ var = $1 * $3; }
| S_VAR '/' S_VAR	{ if($3)	var = $1 / $3; else	var = 0; }
| S_VAR '%' S_VAR	{ if($3)	var = $1 % $3; else	var = 0; }
| S_VAR '^' S_VAR	{ var = pow($1 , $3); }
| ROOT S_VAR		{ $$ = sqrt($2); var = $$; }
| S_VAR INC			{ var = $1 + 1; }
| S_VAR DEC			{ var = $1 - 1; }
| FACTORIAL S_VAR {
			int start_from=1,i=1;
			for(i=1;i<=$2;i++) start_from = start_from*i;
			var = start_from; 
			}
| SUM S_VAR TO S_VAR {
			int i,initially = 0;
			for(i=$2;i<=$4;i++) initially = initially + i;
			var=initially;
			}
| MUL S_VAR TO S_VAR {
			int i, initially = 1;
			for(i=$2;i<=$4;i++) initially = initially * i;
			var=initially;
			}
;


S_stmnt	: C
	| C D
;

C   : C C
	| CASE NUM ':' exp ';' BREAK ';' {
			if(var == $2){
			printf("\nCASE no : %d and the Output is : %d\n",$2,$4);
			check=1;
			}
	}
;

D   : DEFAULT ':' exp ';' BREAK ';' {
			if(check!=1)	printf("\nDefault value is : %d\n",$3);
	}


ifelse : IF '(' exp ')' START exp ';' END ELSE START exp ';' END {
			if($3){
				printf("Value of expression in JODI: %d\n",$6);
				$$ = $6;
			}
			else{
				printf("Value of expression in NAHOY: %d\n",$11);
				$$ = $11;
			}
	}


ifelifelse : IF '(' exp ')' START exp ';' END ELSE_IF '(' exp ')' START exp ';' END ELSE START exp ';' END {
				if($3)			printf("Value of expression in JODI : %d\n",$6);
				else if($11)	printf("Value of expression in NAHOY_JODI : %d\n",$14);
				else			printf("Value of expression in NAHOY : %d\n",$19);
	}


exp : NUM 
|VAR		  { $$ = sym[$1]; }
|VAR '=' exp  { $$ = $3; }
|exp '+' exp  { $$ = $1 + $3; }
|exp '-' exp  { $$ = $1 - $3; }
|exp '*' exp  { $$ = $1 * $3; }
|exp '/' exp  {
		if($3) $$ = $1 / $3;
  		else{
     			$$ = 0;
     			printf("Divided by 0\t"); }
    	}
|exp '%' exp  { 
		if($3) $$ = $1 % $3;
		else{
			$$ = 0;
			printf("Mod by zero\t"); } 	
		}
| exp '^' exp  { $$ = pow($1 , $3); }
| exp '<' exp  { $$ = $1 < $3; }	
| exp '>' exp  { $$ = $1 > $3; }
|'(' exp ')'   { $$ = $2; }
;

s_operations :
	PALINDROME exp {
		int flip = 0,reminder,n=$2;
		while ($2>0) {
			reminder = $2 % 10;
			flip = (flip * 10)+reminder;
			$2 = $2 / 10;
		}
		if (n == flip)		printf("%d is a palindrome number.\n", n);
		else				printf("%d is not a palindrome number.\n", n);
	}

	| REVERSE exp {
		int r=0;
		while($2!=0){
			r = r * 10;
			r = r + $2%10;
			$2 = $2/10;
		}
		printf("Reverse of the number = %d\n", r);
	}

	| LEAP exp {
		int year=$2;
		if($2%400 == 0)			printf("%d is a LEAP YEAR.\n",$2);
		else if($2%100 == 0)	printf("%d is not a LEAP YEAR.\n",$2);
		else if($2%4 == 0)		printf("%d is a LEAP YEAR.\n",$2);
		else					printf("%d is not a LEAP YEAR.\n",$2);
	}

	| FACTORIAL exp {
		int start_from=1,i=1;
		for(i=1;i<=$2;i++)		start_from = start_from*i;
		$$ = start_from;
		printf("Factorial of %d : %d\n",$2,$$);
	}
	| MAX exp exp  {
		if($2>$3)	$$ = $2;
		else		$$ = $3;
		printf("Maximum between %d and %d : %d\n",$2,$3,$$);
	}
	| MIN exp exp	{
		if($2<$3)	$$ = $2;
		else		$$ = $3;
		printf("Minimum between %d and %d : %d\n",$2,$3,$$);
	}
	| GCD exp ',' exp{
		int i,gcd;
		for(i=1;i<=$2;++i)
			if($2%i==0 && $4%i==0)	gcd = i;
		printf("G.C.D of %d and %d : %d\n", $2, $4, gcd);
	}
	| LCM exp ',' exp{
		int i,gcd,lcm;
		for(i=1;i<=$2 && i<=$4;++i)
			if($2%i==0 && $4%i==0)	gcd = i;
		lcm = ($2*$4)/gcd;
		printf("L.C.M of %d and %d : %d\n", $2, $4, lcm);
	}
	| FIBONACCI exp {
		int i,t1=0,t2=1,n;
		n = $2-2;
		int nextTerm = t1+t2;
		printf("Fibonacci Series : %d %d ",t1,t2);
		for(i=1;i<=n;++i){
			printf("%d ",nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1+t2;
		}
		printf("\n");
		$$ = $2;
	}
	| SUM exp TO exp {
		int i,initially = 0;
		for(i=$2;i<=$4;i++)		initially = initially + i;
		$$=initially;
		printf("Summation of %d to %d : %d\n", $2, $4,$$);
	}
	| MUL exp TO exp {
		int i,initially = 1;
		for(i=$2;i<=$4;i++)		initially = initially * i;
		$$=initially;
		printf("Multiplication of %d to %d : %d\n", $2, $4,$$);
	}
	| ROOT exp     { printf("Square root of %d = %d\n",$2,sqrt($2)); }
	| exp INC	   { printf("Increment of %d = %d\n",$1,$1+1); }
	| exp DEC	   { printf("Decrement of %d = %d\n",$1,$1-1); }
	| exp NOT exp  { 
		if($1==$3)		printf("%d is equals to %d	So the statement is wrong\n",$1,$3); 
		else			printf("%d is not equals to %d	So the statement is true\n",$1,$3) 
	}
	| LOG10 exp	   { printf("Value of Log10(%d) : %lf\n",$2,log10($2)); }
	| LN exp 	   { printf("Value of Ln(%d) : %lf\n",$2,log($2)); }
	| SIN exp	   { printf("Value of sin(%d) : %lf\n",$2,sin($2*degree)); }
	| COSEC exp	   { printf("Value of cosec(%d) : %lf\n",$2,1/sin($2*degree)); }
	| COS exp	   { printf("Value of cos(%d) : %lf\n",$2,cos($2*degree)); }
	| SEC exp	   { printf("Value of sec(%d) : %lf\n",$2,1/cos($2*degree)); }
	| TAN exp	   { printf("Value of tan(%d) : %lf\n",$2,tan($2*degree)); }
	| COT exp	   { printf("Value of cot(%d) : %lf\n",$2,1/tan($2*degree)); }
	| exp GREATER_THAN exp {
		if($1>$3)	printf("%d is greater than %d	So the statement is true.\n",$1,$3);
		else	printf("%d is not greater than %d	So the statement is wrong.\n",$1,$3);
	
	}
	| exp LESS_THAN exp {
		if($1<$3)	printf("%d is less than %d So the statement is true.\n",$1,$3);
		else	printf("%d is not less than %d So the statement is wrong.\n",$1,$3);
	}

%%

yyerror(char *s){
	printf( "%s\n", s);
}