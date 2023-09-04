#include <stdio.h>
#include <string.h>

typedef struct {
    int top;
    char stack[50];
} Undo;

typedef struct {
    int top;
    char stack[50];
} Redo;

void do_undo(Undo *s1, Redo *s2) {
    s1->top--;
    s2->stack[s2->top] = s1->stack[s1->top];
    s2->top++;
}

void do_redo(Undo *s1, Redo *s2) {
    s2->top--;
    s1->stack[s1->top] = s2->stack[s1->top];
    /* s1->top++; */
}

int main()
{
    char proc[] = {
        'W',
        'W',
        'W',
        'U',
        'U',
        'R',
        'W',
        'W',
        'U',
        'R'
    };

    FILE *fp = fopen("undo-redo.txt", "w+");
    char ch = 'A';
    int i;

    Undo my_undo;
    my_undo.top = 0;

    Redo my_redo;
    my_redo.top = 0;

    for (i = 0; i < 10; i++) {
        if (proc[i] == 'W') {
            fputc((int)ch, fp);
            my_undo.stack[my_undo.top] = ch;
            my_undo.top += 1;
            ch++;
        }
        else if (proc[i] == 'U') {
            do_undo(&my_undo, &my_redo);
            fseek(fp, -1, SEEK_END);
        }
        else {
            do_redo(&my_undo, &my_redo);
            fputc((int)(my_undo.stack[my_undo.top]), fp);
            my_undo.top++;
        }
        printf("%d ", i);
    }

    fclose(fp);

	return 0;
}

