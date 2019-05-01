#include <signal.h>
#include <setjmp.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void add(int i);  unsigned int *address(void);  int advance(char *lp, char *ep);
int append(int (*f)(void), unsigned int *a);  int backref(int i, char *lp);
void blkio(int b, char *buf, long (*iofcn)(int, void*, unsigned long));
int cclass(char *set, int c, int af);  void compile(int eof);
void error(char *s);  int execute(unsigned int *addr);  void exfile(void);
void filename(const char* cs); char *getblock(unsigned int atl, int iof); int getchr(void);
int getcopy(void);  int getfile(void);  char *getline_blk(unsigned int tl);  int getnum(void);
void global(int k);  void init(void);
void newline(void);  void nonzero(void);  void onhup(int n);
void onintr(int n);  char *place(char *sp, char *l1, char *l2);  void print(void);  void putchr_(int ac);
void putd(void);  void putfile(void);  int putline(void);  void puts_(char *sp); void quit(int n);
void grep_read(const char* cs); void reverse(unsigned int *a1, unsigned int *a2);
void setwide(void);  void setnoaddr(void);  void squeeze(int);
void greperror(char);  void grepline(void);
void ungetch_(int c);
void search(const char* re);
int getch_(void);
void search_file(const char* filename, const char* searchfor);
void process_dir(const char* dir, const char* searchfor, void (*fp)(const char*, const char*));
void printcommand(void);
