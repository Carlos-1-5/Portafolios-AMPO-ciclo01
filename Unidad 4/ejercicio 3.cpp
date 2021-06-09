// autor: carlos alberto garcia benitez

#include <iostream>
#include <cstdint>

using namespace std;

struct node{
	int key_value;
	node *left;
	node *right;
};

class btree{
	public:
		btree();
		~btree();
		void insert(int key);
		node *search(int key);
		void destroy_tree();
		node *get_root();
		private:
			void destroy_tree(node *leaf);
			void insert(int key, node *leaf);
			node *search(int key, node *leaf);
			node *root;		
};

btree::btree(){
	root = NULL;
}
btree::~btree(){
	destroy_tree();
}

void btree::destroy_tree(node *leaf){
	if(leaf!=NULL){
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void btree::insert(int key, node *leaf){
	if(key < leaf->key_value){
		if(leaf->left!=NULL){
			insert(key, leaf->left);
		}else {
			leaf->left=new node;
			leaf->left->key_value=key;
			leaf->left->left=NULL;			
			leaf->left->right=NULL;
		}
	} else if(key >= leaf->key_value){
		if(leaf->right!=NULL){
			insert(key, leaf->right);
		}else{
			leaf->right=new node;
			leaf->right->key_value=key;
			leaf->right->left=NULL;
			leaf->right->right=NULL;
		}
	}
}

node *btree::search(int key, node *leaf){
	if(leaf!=NULL){
		if(key==leaf->key_value){
			return leaf;
		} else if(key < leaf->key_value){
			return search(key, leaf->left);
		} else{
			return search(key, leaf->right);
		}
	} else{
	    return NULL;	
	}
}

void btree::insert(int key){
	if(root!=NULL){
		insert(key, root);
	} else {
		root = new node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

node *btree::search(int key){
	return search(key, root);
}

void btree::destroy_tree(){
	destroy_tree(root);
}

node *btree::get_root(){
	return root;
}

int main(){
	btree arbol;
	arbol.insert(19);
	arbol.insert(27);
	arbol.insert(9);
	arbol.insert(2);
	arbol.insert(17);
	arbol.insert(22);
	arbol.insert(25);
	arbol.insert(11);
	arbol.insert(7);
	arbol.insert(4);
	arbol.insert(1);
	arbol.insert(69);
	cout << "\n\t\t          (" << arbol.get_root()->key_value << ") \n" ;
	cout << "\n\t\t       /        \\ \n" ;
	cout << "\n\t\t    /              \\ \n" ;
	cout << "\n\t\t  (" << arbol.get_root()->left->key_value <<")" <<  "              (" << arbol.get_root()->right->key_value << ")\n" ;
	cout << "\n\t\t/     \\" ;
	cout << "\t\t  /     \\\n";
	cout << "\n\t      (" << arbol.get_root()->left->left->key_value <<")" <<  "     (" << arbol.get_root()->left->right->key_value  << ")";
	cout << "\t(" << arbol.get_root()->right->left->key_value << ")" << "    (" << arbol.get_root()->right->right->key_value << ")\n" << endl;
	cout << "	     /   \\ \n";
	cout << "\n	   (" << arbol.get_root()->left->left->left->key_value << ")" << "   (" << arbol.get_root()->left->left->right->key_value << ")\n";
	
	cout << arbol.search(1) << endl;
	cout << arbol.search(1)->key_value << endl;
	cout << arbol.search(69) << endl;
	cout << arbol.search(69)->key_value << endl;
	cout << arbol.search(25) << endl;
	cout << arbol.search(25)->key_value << endl;
	cout << arbol.search(0) << endl;
	cout << arbol.search(0)->key_value << endl;
	
	
return 0;
}













