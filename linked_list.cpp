#include <iostream>
#include <vector>
#include "linked_list.h"

using namespace std;

ListNode* build_ll(vector<int>& myvec) {
  ListNode* head = nullptr;
  ListNode* node = nullptr;
  if(myvec.size() >= 1) {
    head = new ListNode(myvec[0]);
    node = head;
  }
  for(size_t i = 1; i < myvec.size(); i++) {
    node->next = new ListNode(myvec[i]);
    node = node->next;
  }
  return head;
}

void destroy_ll(ListNode* head) {
  ListNode* temp = nullptr;
  while(head) {
    temp = head;
    head = head->next;
    delete temp;
  }
}

ListNode* add_back(ListNode* head, int value) {
  ListNode* temp = head;
  if(!temp) {
    temp = new ListNode(value);
    return temp;
  }
  while(temp->next) {
    temp = temp->next;
  }
  temp->next = new ListNode(value);
  return head;
}

void print_ll(ListNode* head) {
  ListNode* temp = head;
  while(temp) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
