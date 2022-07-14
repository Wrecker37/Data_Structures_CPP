#include <iostream>

class Node
{
  public:
    Node *next;
    int data;

    Node()
    {
      this->data = 0;
      this->next = nullptr;
    }
    Node(int data)
    {
      this->data = data;
      this->next = nullptr;
    }

};

class SLL
{
  Node *head;

  public:
  SLL()
  {
    this->head = nullptr;
  }

  void insertNode(int data){
    Node *newNode = new Node(data);

    if(head == nullptr){
      head = newNode;
      return;
    }

    Node *placeholder = head;
    while(placeholder->next != nullptr){
      
      placeholder = placeholder->next;
      
    }

    placeholder->next = newNode;
  }

  void deleteNode(int deleteOffset){
    //declaring placeholder variables
    Node *placeholder1 = head, *placeholder2 = nullptr;
    int Len = this->getLength();

    //if the head of a list is null then return since it is empty
    if(head == nullptr){
      std::cout << "list empty" << std::endl;
      return;
    }

    //if the length is less than the node to be deleted return
    if(Len < deleteOffset){
      std::cout << "Index out of range" << std::endl;
      return;
    }


    //start addressing special cases
    //if node to be deleted is the first one then
    //change the head to the next one on the list
    if(deleteOffset == 1){
      head = head->next;
      delete placeholder1;
      return;
    }

    //traverse until node to be deleted is reached
    while(deleteOffset-- > 1){
      
      placeholder2 = placeholder1;
      placeholder1 = placeholder1->next;
    }
    //link left and right nodes of target node and delete target
    placeholder2->next = placeholder1->next;
    delete placeholder1;
  }

  void printList(){
    Node *placeholder = head;

    //while end of list is not reached move to the next node and print data
    while(placeholder != nullptr){
      printf("%d, ",placeholder->data);
      placeholder = placeholder->next;
    }
    delete placeholder;
  }

  int getLength(){
    Node *placeholder = head;
    int Len = 0;
    while(placeholder != nullptr){
      Len++;
      placeholder = placeholder->next;
    }
    return Len;
  }

  void ReverseList(){
    Node *prev = nullptr, *curr = head, *next = nullptr;

    while(curr != nullptr){
      next = curr->next;
      curr->next = prev;

      prev = curr;
      curr = next;
    }

    head = prev;

    
  }

};

// int main(){

//   SLL list;

//   list.insertNode(100);
//   list.insertNode(200);
//   list.insertNode(300);
//   list.insertNode(400);
//   list.insertNode(500);
  
//   list.printList();
//   list.ReverseList();

//   list.printList();  
  
  


//   return 0;
// }