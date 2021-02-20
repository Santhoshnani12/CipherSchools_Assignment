#include<iostream>
#include<string>
using namespace std;

struct stack {
	char data;
	struct stack *next;
}*top = NULL;

void push(char ele) {
	struct stack *t = new struct stack();
	t->data = ele;
	t->next = top;
	top = t;
}

char pop() {
	char x = NULL;
	if(top!=NULL) {
		x = top->data;
		top = top->next;
	}
	return x;
}

void isBalanced(string exp) {
	for(int i=0;exp[i] != '\0';i++) {
		if(exp[i] == '(') {
			push(exp[i]);
		}
		if(exp[i] == ')') {
			if(top != NULL) {
			    pop();
			} else {
				cout<<"not posiible"<<endl;
			}
		}
	}
	if(top == NULL) {
		cout<<"balanced"<<endl;
	}
	else {
		cout<<"Not balanced"<<endl;
	}
}

main() {
	struct stack st;
	char *exp = "((a+b))*((a-b))";

	isBalanced(exp);
}
