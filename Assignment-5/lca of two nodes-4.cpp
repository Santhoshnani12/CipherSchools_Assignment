
#include<bits/stdc++.h>

using namespace std;

struct node {
	int data;
	node* left;
	node* right;
	node (int k){
		data = k;
		left = right = NULL;
	}
};

int lca(node* root, int n1, int n2) {
	if(root==NULL) {
		return NULL;
	}
	if(root->data == n1 || root->data == n2) {
		return root->data;
	}
	int lc1 = lca(root->left,n1,n2);
	int lc2 = lca(root->right,n1,n2);
	if(lc1 != NULL && lc2 != NULL) {
		return root->data;
	}
	if(lc1 !=NULL) {
		return lc1;
	} else {
		return lc2;
	}
}

int main() {
	struct node * root = new node(20);
	root->left = new node(8);
	root->left->left = new node(3);
	root->left->right = new node(5);
	root->right = new node(12);

	cout<<lca(root, 5,12);

}
