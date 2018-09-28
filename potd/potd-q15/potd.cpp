#include "potd.h"
#include <iostream>

using namespace std;

string stringList(Node *head) {
  if (head == NULL){
    return "Empty list";
  }
  Node* temp = head;
  int i = 0;
  string fini;
  while(temp!= NULL ){
    
    fini = fini + "Node " + to_string(i) + ": " + to_string(temp->data_) + "->" ;
    temp = temp->next_;
  }

return fini ;
}
