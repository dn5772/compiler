bison -d -o y.tab.c yacc.y
lex lex.l
# gcc y.tab.c lex.yy.c print.c -w