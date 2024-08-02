#include <iostream>
#include "team.h"
#include "team.cpp"

int main()
{
  string name;
  float event_Exp = 0;
  long long Exp_box = 30000, Exp = 0;
  int level = 1, turn = 0, user = 0, stage = 0, event = 0, monster_number = 0, monster_WN = 0, Replay;

  srand(time(NULL));
  cout << ("▶   이 름 을    입 력 해 주 세 요.\n") << endl;
  cout << ("▶   ");
  getline(cin, name);
  start(name);
  sleep(2);
  while (1)
  {
    if (level == 1 && turn == 0)
    {
      Exp_box = 30000;
    }
    level = select(stage, event, event_Exp, Exp, monster_number, monster_WN, Exp_box, level, turn, user);
    if (level >= 99)
    {
      cout << ("전설의 출현! 개발원에서 탈출하셨습니다.!\n");
      break;
    }
    cout << endl;
    Replay = quarter(level, turn, Exp);
    if (Replay == 7)
    {
      level = 1;
      turn = 0;
      Exp = 0;
      continue;
    }
    else
    {
      break;
    }
  }
  cout << ("게임을 종료합니다!\n");
  return 0;
}
