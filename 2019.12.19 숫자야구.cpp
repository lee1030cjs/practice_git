// 2019.12.19 숫자야구.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int nNum1, nNum2, nNum3;
    int nSplit1, nSplit2, nSplit3;
    int nNumber;
    int nStrike;
    int nBall;
    int nOut;


    srand(time(NULL));                                    
    while (true)
    {
        nNum1 = rand() % 10;
        nNum2 = rand() % 10;
        nNum3 = rand() % 10;
        if (nNum1 == nNum2 || nNum3 == nNum2 || nNum1 == nNum3 )
        {

        }
        else
            break;
        
        }

    for (int i = 0; i < 10; i++)
    {   
        nStrike = nBall = nOut = 0;
        cout << nNum1 << nNum2 << nNum3 << endl;
        cout <<"숫자를 말해주세요. (3자리):";
        cin >> nNumber;
        
        if (nNumber > 1000)
        {
            cout << "잘못입력하셨습니다. 3자리 수를 입력해주세요"  << endl;
        }
        

        nSplit1 = nNumber/100;
        nSplit2 = (nNumber - (nSplit1 * 100))/10;
        nSplit3 = nNumber - ((nSplit1 * 100) + (nSplit2 * 10));
 
        cout << nNumber << " " << nSplit1 << " " << nSplit2 << " " << nSplit3 << endl;
  
       
         
            

            if (nNum1 == nSplit1)
            {
                nStrike++;
            }
            if (nNum2 == nSplit2)
            {
                nStrike++;
            }
            if (nNum3 == nSplit3)
            {
                nStrike++;
            }

            if (nNum1 == nSplit2)
            {
                nBall++;
            }
            else
            {
                nOut++;
            }

            if (nNum1 == nSplit3)
            {
                nBall++;
            }
            else
            {
                nOut++;
            }

            if (nNum2 == nSplit3)
            {
                nBall++;
            }
            else
            {
                nOut++;
            }
            cout << "S :" << nStrike << "  " << "B :" << nBall << "  " << "O :" << nOut << endl;
           
       if(nStrike == 3)
       {
           cout << "축하합니다. 승리하셨습니다!" << endl;
           break;
       }
    }
}

        
    
    



