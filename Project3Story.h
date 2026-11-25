#ifndef TRIFFIDSTORY_H
#define TRIFFIDSTORY_H

#include <stack>

using namespace std;

class TriffidStory
{
   private:
           stack<int> PreviousPages;
           stack<int> CurrentNextPages;
   public:
          void PageNavigation(bool direction);
          void ReadStoryFile();
          void StoryChoice();
          void PrintText();
};

#endif