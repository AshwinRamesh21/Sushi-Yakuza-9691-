#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
    int value;
    struct node *next;
};
struct node *start = NULL;

int main()
{
    struct node *new_node, *current;
    new_node = (struct node *) malloc(sizeof(struct node));
    cout<<"Enter the data:\n";
    cin>>*new_node->value;
    new_node->next = NULL;
    if(start == NULL)
    {
        start = new_node;
        current = new_node;
    }
    else
    {
        current->next = new_node;
        current = new_node;
    }
    getch();
    return 0;
}
