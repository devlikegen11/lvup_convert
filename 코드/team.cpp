#include <iostream>
#include "team.h"

void start(string name)
{
    cout << ("╒═══════════════════════════════════════════════════════════════════╕") << endl;
    cout << ("╎                                                                   ╎") << endl;
    cout << ("║                 여기는   흔들흔들   개발원입니다.                 ║") << endl;
    cout << ("║                                                                   ║") << endl;
    cout << "\t" << name << "님  안녕하세요!   당신은   개발원에   강금당했습니다.  " << endl;
    cout << ("┊              탈출하려면   [ 𝗟𝘃. 𝟵 𝟵 ] 를   달성하세요.            ┊") << endl;
    cout << endl;
    cout << ("║                  Tip : 아메리카노 수혈하세요!☕                   ║") << endl;
    cout << ("║                 잠시 동안 행복해질 수도 있습니다.                 ║") << endl;
    cout << ("╎                                                                   ╎") << endl;
    cout << ("╘═══════════════════════════════════════════════════════════════════╛\n\n") << endl;
    cout << endl;
}

int select(int stage, int event, float event_Exp, long long Exp, int monster_number, int monster_WN, long long Exp_box, int level, int turn, long user)
{
    srand(time(NULL));
    for (stage = 1; stage <= 5; stage++)
    {
        for (event = 0; event < 5; event++)
        {
            event_Exp = Exp_rand;
            if (stage > 1) // 스테이지 올라가면 경험치 배율 상승
            {
                event_Exp += event_Exp * (stage * 50);
            }
            Exp += event_Exp;
            monster set;
            moninfo(&set);
            cout << ("\n\n╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴\n\n");
            cout << "       ♜   제 " << event + 1 << "던전  " << set.name << "  가 나타났습니다." << endl;
            cout << "\t\t"
                 << "공격력은 : " << set.MonDam << " 체력은 : " << set.MonHP << " 입니다" << endl;
            string monster_weak;
            monster_WN = (rand() % 4) + 1;
            if (monster_WN == 1)
            {
                monster_weak = "오른손";
            }
            else if (monster_WN == 2)
            {
                monster_weak = "왼손";
            }
            else if (monster_WN == 3)
            {
                monster_weak = "오른발";
            }
            else
            {
                monster_weak = "왼발";
            }

            cout << "   \t\tTip: " << monster_weak << " 이 약점입니다." << endl;
            if (event_Exp >= 0)
            {
                cout << "\t\t" << set.name << " 를 처치하였습니다." << endl;
                cout << "  \t\t💖 " << event_Exp << " 의 경험치를 획득" << endl;
            }
            else
            {
                cout << "\t\t" << set.name << " 에게 패배했습니다." << endl;
                cout << "  \t\t💔 " << event_Exp << "의 경험치가 차감되었습니다." << endl;
            }
            if (event == 4)
            {
                cout << "\n╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴" << endl;
                cout << "    🧚  \" MinGun TinKerBell \"에게 이상한 사탕을 받았습니다. \n\n";
                cout << "    🍭      경험치에 영향을 미치는 것 같습니다....\n\n\n";
                Exp = Exp * Boss_rand;
            }
        }

        while (Exp > Exp_box)
        {
            level++;

            Exp = Exp - Exp_box;
            Exp_box = Exp_box * Exp_boxrand;

            cout << "✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ✧" << endl;
            cout << "      ▲       𝗟 𝗲 𝘃 𝗲 𝗹  𝗨  𝗣  !  축하합니다! " << endl;
            cout << "      ▲       현재 레벨    [ Lv .  " << level << "  ]" << endl;
            if (level < 99)
                cout << "              Lv. " << level + 1 << " 의 경험치는 MAX 값 : " << Exp_box << endl;
            else if (level >= 99)
            {
                cout << ("전설의 출현! 개발원에서 탈출하셨습니다.!\n");
                exit(EXIT_SUCCESS);
            }
            else
            {
                continue;
            }
            cout << "✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ✧" << endl;
        }

        while (Exp < 0)
        {
            cout << "✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ✧" << endl;
            cout << "      ▼      𝗟 𝗲 𝘃 𝗲 𝗹  𝗗 𝗼 𝘄 𝗻  !  이런...조심하십시오...." << endl;
            level--;
            Exp = Exp_box - Exp;
            Exp_box = Exp_box / Exp_boxrand;
            cout << "      ▼      현재 레벨    [ Lv .  " << level << " ]" << endl;
            cout << "✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ⋆ ⋄ ✧ ⋄ ⋆ ⋅ ✧" << endl;
        }
        turn++;
        cout << endl;
        cout << "╔═══════════════════════════════════════════════════════════════════╗" << endl;
        cout << "╎      현재 경험치  :  " << Exp << endl;
        cout << "├╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌┥" << endl;
        cout << "       현재 레  벨  :       Lv .       " << level << "                            " << endl;
        cout << "╟╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╦─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌╢" << endl;
        cout << "       진행  STAGE  :     " << stage << "   ║     진행 된 턴 수 :   " << turn << " 턴          " << endl;
        cout << "╟╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╩─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌─╌╢" << endl;
        cout << "╎      ▶️  다음 STAGE로 이동 시  :  숫자  [ 𝟙  ] 입력해주세요.       ╎" << endl;
        cout << "│      ▶️  현재 STAGE에 머물 시  :  숫자  [ 𝟚  ] 입력해주세요.       │" << endl;
        cout << "╎      ▶️  이전 STAGE로 이동 시  :  [ 𝟛  ] 이상을 입력해주세요.      ╎" << endl;
        cout << "╚═══════════════════════════════════════════════════════════════════╝" << endl;
        cout << "▶️  " << endl;

        user = get_long();
        if (user == 1)
        {
            cout << ("▶️  다음 STAGE로 이동합니다.\n\n\n");
            if (level == 99 || level < 1)
            {
                break;
            }
            if (stage == 5)
            {
                --stage;
            }
            continue;
        }
        else if (user == 2)
        {
            cout << ("▶️  현재 STAGE를 다시 도전합니다.\n\n\n");
            --stage;
            if (level == 99 || level < 1)
            {
                break;
            }
            continue;
        }
        else
        {
            cout << ("▶️  이전 STAGE로 이동합니다.\n\n\n");
            --stage;
            --stage;
            if (stage <= -1)
            {
                stage = 0;
            }
            if (level == 99 || level < 1)
            {
                break;
            }
            continue;
        }
        cout << endl;
    }
    return level;
}

void moninfo(monster *nem)
{
    int monster_number = (rand() % 4) + 1;
    if (monster_number == 1)
    {
        int hp = 50;
        int deal = 10;
        monster Iron = {"Iron Boy", hp, deal};
        *nem = Iron;
    }
    else if (monster_number == 2)
    {
        int hp = 70;
        int deal = 20;
        monster Onsi = {"Scarlet Onsi", hp, deal};
        *nem = Onsi;
    }
    else if (monster_number == 3)
    {
        int hp = 90;
        int deal = 40;
        monster Juno = {"Juno Panther", hp, deal};
        *nem = Juno;
    }
    else
    {
        int hp = 110;
        int deal = 60;
        monster Ddong = {"Captain Ddong", hp, deal};
        *nem = Ddong;
    }
}

int quarter(int level, int turn, int Exp)
{
    int Replay;
    if (level >= 99)
    {
        cout << ("전설의 출현! 개발원에서 탈출하셨습니다.!\n");
    }
    else if (level < 1)
    {
        cout << ("╔╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╗\n");
        cout << ("┃                       𝕐  𝕆  𝕌       𝔻  𝕀  𝔼                       ┃\n");
        cout << ("┃         당신의 실력으론 아직 부족합니다 6개월 더 공부하세요       ┃\n");
        cout << ("╚╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╝\n\n\n\n");
    }
    if (level >= 99 || level < 1)
    {
        cout << ("╔╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╗\n");
        cout << ("┃      ▶️     다시 시작하는 경우  :  숫자 [7] 입력                   ┃\n");
        cout << ("┃      ▶️     종료를 원하는 경우  :  [7]을 제외한 숫자 입력          ┃\n");
        cout << ("╚╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╴╝\n");
        cout << ("\n▶️  ");
        cin >> Replay;
    }
    return Replay;
}

long get_long()
{
    long input;
    char ch;

    while (!(cin >> input))
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        cout << ": 잘못 입력하셨습니다.\n";
        cout << ": 정수를 입력하여 주십시오.\n";
    }

    return input;
}

long get_replay()
{
    long i;
    char k;

    while (!(cin >> i))
    {
        while ((k = getchar()) != '\n')
            putchar(k);
        cout << (": 잘못 입력하셨습니다.\n");
        cout << (": 정수를 입력하여 주십시오.\n");
    }
    return i;
}
