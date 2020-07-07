#include <stdio.h>
#define escapes "\"\\\n"
int main() {
char s[] = "#include <stdio.h>%c#define escapes %c%c%c%c%c%cn%c%cint main() {%cchar s[] = %c%s%c;%cprintf(s, escapes[2], escapes[0], escapes[1], escapes[0], escapes[1], escapes[1], escapes[1], escapes[0], escapes[2], escapes[2], escapes[0], s, escapes[0], escapes[2], escapes[2]);%c}";
printf(s, escapes[2], escapes[0], escapes[1], escapes[0], escapes[1], escapes[1], escapes[1], escapes[0], escapes[2], escapes[2], escapes[0], s, escapes[0], escapes[2], escapes[2]);
}