#include <iostream>

class Node
{
    public:
        int data;
        Node *next;
        
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
    Node* head;


    public:
        SLL()
        {
         // std::cout << "Init SLL" << std::endl;
            this->head = nullptr;
        }

        void insertNode(int data)
        {
          //std::cout << "Inserting Node" << std::endl;
        //declaring the new node with the intended data
        Node *newNode = new Node(data);

        //if the head of the linked list is empty then set to new node
        if(head == NULL)
        {
            head = newNode;
            return;
        }

        //declaring placeholder node pointer pointing to the head
        Node *placeholder = head;

        //traverse the entire linked list
        while(placeholder->next != NULL)
        {
            placeholder = placeholder->next;
        }

        //insert new node to the end
        placeholder->next = newNode;
        //std::cout << "Node inserted" << std::endl;
        }

        void deleteNode(int nodeDelete)
        {
          std::cout << "Deleting Node" << std::endl;
        //declaring 2 pleaceholder nodes and a length variable
        Node *placeholder1 = head, *placeholder2 = nullptr;
        int Len = 0;

        //if head ptr is Null then exit
        if(head == NULL)
        {
            std::cout<< "List empty" << std::endl;
            return;
        }

        //determine length of Linked List
        while(placeholder1 != NULL)
        {
            placeholder1 = placeholder1->next;
            Len++;
        }

        //use length of list to determine if out of range
        if(Len < nodeDelete)
        {
            std::cout << "Index out of range" << std::endl;
            return;
        }

        placeholder1 = head;
        //if node to be deleted is the first node then change the
        //head and delete the placeholder
        if(nodeDelete == 1)
        {
            head = head->next;
            delete placeholder1;
            return;
        }

        //traverse Linked List until target node is reached
        while(nodeDelete-- > 1)
        {
            placeholder2 = placeholder1;
            placeholder1 = placeholder1->next;
        }

        //Link left and right nodes from target and delete target
        placeholder2->next = placeholder1->next;
        delete placeholder1;

          std::cout << "Node Deleted" << std::endl;
        }

        void printList()
        {
          //std::cout << "Printing contents" << std::endl;
        Node *placeholder = head;
          
        while(placeholder->next != NULL)
        {
          printf("%d, ",placeholder->data);
          placeholder = placeholder->next;
            
        }
          printf("%d, ",placeholder->data);
          //std::cout << "Done printing contents" << std::endl;
        }
        
        void printLength()
        {
          //std::cout << "Printing length" << std::endl;
        Node *placeholder = head;
        int length = 0;
        while(placeholder->next != NULL)
        {
            length++;
            placeholder = placeholder->next;

        }
          length++;
          printf("\nLength: %d, ",length);
        }

};

// int main()
// {
//     //std::cout << "Hello World" << std::endl;
//     SLL list;

//     list.insertNode(100);
//     list.insertNode(200);
//     list.insertNode(300);
//     list.insertNode(400);
  
//     list.printList();
//     list.printLength();
  
//     list.deleteNode(3);

//     list.printList();
//     list.printLength();
// ;    return 0;
// }