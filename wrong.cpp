ListNode* build_ll(vector<int>& myvec) {
  ListNode* head = nullptr;
  ListNode* node = nullptr;
  if(myvec.size() >= 1) {
    head = new ListNode(myvec[0]);
    node = head->next;
  }
  for(size_t i = 1; i < myvec.size(); i++) {
    node = new ListNode(myvec[i]);
    node = node->next;
  }
  return head;
}
