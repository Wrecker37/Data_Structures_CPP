#include <iostream>

class Node{
  public:
    int data;
    Node *Left, *Right;
    
    Node(int val){
      this->data = val;
      this->Left = nullptr;
      this->Right = nullptr;
    }
  
    void inorder(Node *root){
      if(root != nullptr){
        inorder(root->Left);
        std::cout << root->data << " ";
        inorder(root->Right);
        
      }
    }

    void preorder(Node *root){
      if(root != nullptr){
        std::cout << root->data << " ";
        preorder(root->Left);
        preorder(root->Right);
      }
    }

    void postorder(Node *root){
      if(root != nullptr){
        postorder(root->Left);
        postorder(root->Right);
        std::cout << root->data << " ";
      }
    }
};

int main(){
  Node *root = new Node(1);

  //Children
  root->Left = new Node(2);
  root->Right = new Node(3);

  //Grand Children
  root->Left->Left = new Node(4);
  root->Left->Right = new Node(5);

  root->Right->Left = new Node(6);
  root->Right->Right = new Node(7);

  root->inorder(root);
  std::cout << std::endl;
  root->preorder(root);
  std::cout << std::endl;
  root->postorder(root);


  return 0;
}