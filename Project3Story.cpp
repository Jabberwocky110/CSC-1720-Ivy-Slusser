#include "Project3Story.h"
#include <iostream>
#include <stack>

void TriffidStory::PageNavigation(bool direction)
{
   if (direction)
   {
      PreviousPages.push(CurrentNextPages.top());
      CurrentNextPages.pop();
   }
   else
   {
      CurrentNextPages.push(PreviousPages.top());
      PreviousPages.pop();
   }
}