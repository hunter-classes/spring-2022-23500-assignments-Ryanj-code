#include <iostream>
#include "BSTree.h"

BSTree::BSTree(){
  root = nullptr;
}

void BSTree::insert(int d){ 

}

std::string BSTree::get_debug_string(){
  std::string tmp = "";

  if(root == nullptr){
    return "";  
  } else { 
    return std::to_string(root->getData());
  }

  return tmp + "nullptr"; 
}


void BSTree::setup(){
  Node *n = new Node(10);
  root = n;
  n = new Node(20);
  root->setRight(n);
  Node *n2 = new Node(30);
  n->setRight(n2);
  n2 = new Node(15);
  n->setLeft(n2);
  n2 = new Node(5);
  root->setLeft(n2);
  n = new Node(3);
  n2->setLeft(n);
  n = new Node(7);
  n2->setLeft(n);
  
}
