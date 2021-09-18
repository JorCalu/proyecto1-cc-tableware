#pragma once
#include "tableware.hh"

class Node
{
  private:
    List* list{};

  public:
    Node* next{};
    Node(List*& list);
    ~Node();
    List* GetList() const;
    
};
