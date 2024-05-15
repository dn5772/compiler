bison -d yacc.y
lex lex.l
gcc yacc.tab.c lex.yy.c print.c -w