#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a letter: " << endl;
    cin >> ch;

    ch = tolower(ch);

    switch(ch)
    {
    //case 0:
       // {
       //     cout << "Zero" << endl;
      //      break;
      //  }

   // case 1:
   //     {
   //         cout << "One" << endl;
   //         break;
   //     }

   // case 2:
   //     {
   //         cout << "Two" << endl;
   //         break;
   //     }

    //case 3:
     //   {
     //       cout << "Three" << endl;
     //       break;
     //   }

   //case 4:
    //    {
    //        cout << "Four" << endl;
    //        break;
    //    }

   // case 5:
      //  {
     //       cout << "Five" << endl;
       //     break;
     //   }

    //case 6:
        //{
          //  cout << "Six" << endl;
          //  break;
        //}

   // case 7:
      //  {
      //      cout << "Seven" << endl;
     //       break;
       // }


    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

        {
            cout << "Vowel" << endl;
            break;
        }

        default:
        {
            cout << "Consonent" << endl;
        }

    }


    getch();
}
