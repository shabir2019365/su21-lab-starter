#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
     /* TODO: Implement ll_has_cycle */
  node *slow_ptr = head;
  node *fast_ptr = head;

  while (fast_ptr && fast_ptr->next) {
    slow_ptr = slow_ptr->next;  // Advance slow_ptr by one node
    fast_ptr = fast_ptr->next->next;  // Advance fast_ptr by two nodes

    if (slow_ptr == fast_ptr) {
      return 1;  // Cycle detected
    }
  }

  return 0;  // No cycle found
}
