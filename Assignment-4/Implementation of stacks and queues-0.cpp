/*  stack using arrray

#include<bits/stdc++.h>

using namespace std;

struct st {
    int top;
    int a[100];
    st() {
        top = -1;
    }
}s;

void push(int ele) {
    if(s.top == 99) {
        return;
    }
    s.a[s.top++] = ele;
}

int pop() {
    int x = -1;
    if(s.top == -1) {
        return x;
    }
    x = s.a[s.top--];
    return x;
}

int peek() {
    if(s.top == -1) {
        return -1;
    }
    return s.a[s.top];
}

int main() {

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);

    cout<<pop();
    cout<<pop();

    cout<<peek;
}


stack using linked lsit

#include<iostream>
using namespace std;

struct stack {
	int data;
	struct stack *next;
}*top=NULL;

void push(struct stack *st, int ele) {
	struct stack *t = new struct stack();
	if(t==NULL) {
		cout<<"stack overflow"<<"";
	} else {
		t->data = ele;
		t->next = top;
		top = t;
	}
}

int pop(struct stack *st) {
	if(top==NULL) {
		cout<<"stack underflow";
	}
	else {
		top=top->next;
	}
}

void display(struct stack *st) {
	while(top!=NULL) {
		cout<<top->data;
		top=top->next;
	}
}

int main() {
	struct stack st;

	push(&st, 10);
	push(&st, 20);
	push(&st, 30);
	push(&st, 40);

	display(&st);
}



queue using array

#include<iostream>
using namespace std;

struct queue {
	int size;
	int front;
	int rear;
	int *qu;
};

void creating(struct queue *q) {
	cout<<"enter size"<<endl;
	cin>>q->size;
	q->front = q->rear = -1;
	q->qu = new int[q->size];
}

void push(struct queue *q, int ele) {
	if(q->rear == q->size-1) {
		cout<<"queue is full"<<endl;
	} else {
		q->rear++;
		q->qu[q->rear] = ele;
	}
}

int pop(struct queue *q) {
	int x = -1;
	if(q->front > q->rear) {
		cout<<"queue is empty"<<endl;
	} else {
		x = q->qu[q->front];
		q->front++;
	}
	return x;
}

void display(struct queue *q) {
	q->front++;
	int g = q->front;
	while(g <= q->rear) {
		cout<<q->qu[g++]<<endl;

	}
}

int main() {
	struct queue q;
	creating(&q);
	push(&q, 15);
	push(&q, 14);
	push(&q, 13);
	display(&q);
}



queue using Linked list


#include<iostream>
using namespace std;

struct queue{
	int data;
	struct queue *next;
}*front=NULL,*rear=NULL;

void push(int ele) {
	struct queue *t = new struct queue();
	t->data = ele;
	if(rear==NULL) {
		t->next=NULL;
		rear = t;
		front = t;
	} else {
		rear->next = t;
		t->next = NULL;
		rear = t;
	}
}

int pop() {
    int x = -1;
	if(front == NULL) {
		cout<<"queue is empty"<<endl;
    } else {
        x = front->data;
        front = front->next;
	}
	return x;
}

void display() {
	struct queue *node;
	node = front;
	while(node != NULL) {
		cout<<node->data;
		node = node->next;
	}
}

int main() {
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
}

