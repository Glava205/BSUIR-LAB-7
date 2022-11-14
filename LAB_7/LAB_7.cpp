#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
   

    char st[100];
    cout << "Enter string: ";
    cin.getline(st, 100);

    int counterror = 0;
    int count1 = 0;
    

    for (int i = 0; st[i]; i++)
    {
        if (st[i] == '1') //01110 i=1
        {
            for (int j = i; st[j]; j++) // 01110 
            {
                if (st[j] == '0')   //j=4
                {
                    if ((i + j+1) % 2 == 0)  //7%2!=0 True
                    {
                        count1++; //1
                    }
                    i = j-1;
                    break;//i=4
                }
            }
        }
        else if ((st[i]!='0') && (st[i]!='1')) counterror++; /// Как контроль на ошибки.
    }

    cout << "count = " << count1 << "\n";
    if (counterror) cout << "There are incorrect characters\n";

    return 0;
}