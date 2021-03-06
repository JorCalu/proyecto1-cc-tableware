#pragma once
#include "Node.hh"
#include "tableware.hh"

class Stack
{
  private:
    Node* head{nullptr};

  public:
    Stack();
    ~Stack();
    void Pop(); 
    void Push(List*& List);
    bool IsEmpty() const;
    void Print();
};

