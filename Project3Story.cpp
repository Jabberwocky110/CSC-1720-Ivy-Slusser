#include "Project3Story.h"
#include <iostream>
#include <stack>

void TriffidStory::PageNavigation(bool direction)
{
   if (direction)
   {
      PreviousPages.top() = CurrentNextPages.top();
      CurrentNextPages.pop();
   }
   else
   {
      CurrentNextPages.top() = PreviousPages.top();
      PreviousPages.pop();
   }
}