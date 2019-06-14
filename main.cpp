#include <iostream>
#include <vector>

using namespace std;

/**
 * Definition for singly-linked list.
 */
 
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:

    bool isPalindrome(vector<int> v) {
      int len = v.size();
      for (int i = 0; i < v.size() / 2; ++i) {
        if (v[i] != v[len-i-1])
          return false;
      }
      return true;
    }

    bool isPalindrome(ListNode* head) {
      vector<int> vi;
      while (head) {
        vi.push_back(head->val);
        head = head->next;
      }
      return isPalindrome(vi);
    }
};


int main() {
  Solution S;

  cout << boolalpha;
  ListNode *l1 = new ListNode(1);
  l1->next = new ListNode(2);

  cout << "f? " << S.isPalindrome(l1) << endl;
  l1->next->next = new ListNode(1);
  cout << "t? " << S.isPalindrome(l1) << endl;

  l1->next->next = new ListNode(2);
  l1->next->next->next = new ListNode(1);
  cout << "t? " << S.isPalindrome(l1) << endl;

  std::cout << "Hello World!\n";
}