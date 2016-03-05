#pragma once
#include <vector>

using namespace std;

class ListNode {
 public:
  int val;
  ListNode* next;
 ListNode(ListNode* node): val(node->val), next(nullptr) {};
 ListNode(int value): val(value), next(nullptr) {};
};

ListNode* build_ll(vector<int>& myvec);
void destroy_ll(ListNode* head);
ListNode* add_back(ListNode* head, int value);
void print_ll(ListNode* head);
