#ifndef TRIFFID_H
#define TRIFFID_H
//Include string for strings
#include <string>
using namespace std;

class Triffid
{
   private:
          int MonsterNumber;
   public:
          Triffid(int number);
          ~Triffid();
          void ReadMonsterFile();
          void AddHeroCharacter();
          void DeleteTriffid();
          void BattleTriffids();
};

#endif
