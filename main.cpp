#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next = nullptr;
};  



int main() {
  

  Node* head = new Node;

  Node* aux = head;
  for(int i = 0; i < 10; i++) {
 
     aux->data = i;
     aux->next = new Node;
     aux = aux->next;    
  
  }

  cout << "Hello World jeje jiji jaja" << endl;


  Node* it = head;
  while(it != nullptr) {
    
    cout << it->data << endl;
    it = it->next;
  }

  return 0;
}
