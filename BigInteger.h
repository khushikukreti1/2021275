#ifndef BigInteger_H
#define BigInteger_H
struct node
{
    int data;
    struct node *next;
};

struct BigInteger
{
    struct node *head;
    char sign;
    long int size;
};

struct BigInteger initialize(char *str);
struct BigInteger add(struct BigInteger num1, struct BigInteger num2);
struct BigInteger sub(struct BigInteger num1, struct BigInteger num2);
struct BigInteger mul(struct BigInteger n1,struct BigInteger n2);
struct BigInteger div1(struct BigInteger dividend,struct BigInteger divisor);
struct BigInteger mod(struct BigInteger dividend,struct BigInteger divisor);
void display(struct BigInteger);

#endif