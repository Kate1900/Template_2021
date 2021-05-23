#include <iostream>

#include "list.h"

using namespace std;

int main()
{
    List my_list;

    my_list.push(1);
  
    my_list.push(2);
  
    my_list.push(3);
  
    my_list.push(4);

   
  
    my_list.head->next->next->next->next = my_list.head->next->next->next;

  

    if (my_list.HareTurtleLoopDetect())
        cout << "There is a loop";
  
    else
        cout << "There is no loop";

    cout << endl;

    if (my_list.ReverseLoopDetect())
        cout << "There is a loop";
  
    else
        cout << "There is no loop";

    return 0;
}
