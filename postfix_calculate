#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *data;
    int size;
    int top;
} Stack;

Stack *stack;
char *postfix;

void initialize()
{
    stack->data = (char *)malloc(sizeof(char));
    stack->size = 1;
    stack->top = -1;

    if (stack->data != NULL)
    {
        for (int i = 0; i < stack->size; i++)
        {
            stack->data[i] = '\0';
        }
    }
}
void push(int value)
{
    if (stack->top == stack->size)
    {
        stack->size *= 2;
        stack->data = (char *)realloc(stack->data, sizeof(char) * stack->size);
    }
    stack->data[++stack->top] = value;
}

int pop()
{
    if (stack->top == -1)
    {
        printf("empty");
        return -1;
    }
    return stack->data[stack->top--];
}

void calculate()
{
    int i = 0;
    while (postfix[i] != '\0')
    {
        switch (postfix[i])
        {
            int data2;
            int data1;
        case '+':
            data2 = pop();
            data1 = pop();
            push(data1 + data2);
            break;
        case '-':
            data2 = pop();
            data1 = pop();
            push(data1 - data2);
            break;
        case '*':
            data2 = pop();
            data1 = pop();
            push(data1 * data2);
            break;
        case '/':
            data2 = pop();
            data1 = pop();
            push(data1 / data2);
            break;
        case '%':
            data2 = pop();
            data1 = pop();
            push(data1 % data2);
            break;
        default:
            push(postfix[i] - '0');
            break;
        }
        i++;
    }
    printf("result-> %d", stack->data[stack->top]);
}

int main()
{
    postfix = (char *)malloc(100);
    stack = (Stack *)malloc(sizeof(Stack));

    printf("input the postfix->");
    initialize();
    scanf("%s", postfix);

    calculate();

    free(stack->data);
    free(stack);
    free(postfix);
    return 0;
}
