//
//  main.cpp
//  Inorder_tree_traversal_list_implementation
//
//  Created by Devang Papinwar on 05/03/21.
//

#include <iostream>
using namespace std;

struct Person
{
    int data;
    Person *left;
    Person *right;
};

void inOrder(Person *parent)
{
    struct Person* node = parent;
    if( node == NULL)
        return;
    inOrder(node->left) ;
    cout << " Node : " << node->data;
    inOrder(node->right) ;
}

void preOrder(Person *parent)
{
    struct Person* node = parent;
    if( node == NULL )
        return;
    cout << " Node : " << node->data;
    preOrder(node->left) ;
    preOrder(node->right) ;
}

void postOrder(Person *parent)
{
    struct Person* node = parent;
    if( node == NULL )
        return;
    postOrder(node->left) ;
    postOrder(node->right) ;
    cout << " Node : " << node->data;
}

int main(int argc, const char * argv[])
{
    // Creation of Nodes of Tree
    struct Person* node1=(struct Person*)malloc(sizeof(struct Person));
    node1->data = 10;
    struct Person* node2=(struct Person*)malloc(sizeof(struct Person));
    node2->data = 20;
    struct Person* node3=(struct Person*)malloc(sizeof(struct Person));
    node3->data = 30;
    struct Person* node4=(struct Person*)malloc(sizeof(struct Person));
    node4->data = 40;
    struct Person* node5=(struct Person*)malloc(sizeof(struct Person));
    node5->data = 50;

    // For assigning left and right child node to a particular node
    node1->left = node2;
    node1->right = node3;
    node2->left = NULL;
    node2->right = node5;
    node3->left = NULL;
    node3->right = node4;
    node4->left = NULL;
    node4->right = NULL;
    node5->left = NULL;
    node5->right = NULL;
    
    struct Person* parent = node1;
    cout << endl << " INORDER TRAVERSAL " ;
    inOrder(parent);
    cout << endl << " PREORDER TRAVERSAL " ;
    preOrder(parent);
    cout << endl << " POSTORDER TRAVERSAL " ;
    postOrder(parent);
    cout << endl;
}
