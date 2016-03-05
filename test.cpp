#include <vector>
#include "linked_list.h"

using namespace std;

int main(int argc, char* argv[]) {
  int arr[] = {3,1,5,2,7,8,4};
  vector<int> myvec(arr, arr + 7);
  //for(int x : myvec) cout << x << " "; cout << endl;
  ListNode* head = build_ll(myvec);
  print_ll(head);
  add_back(head, 12);
  print_ll(head);
  destroy_ll(head);
  getchar();
}
