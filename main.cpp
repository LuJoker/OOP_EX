#include <iostream>
#include <string>
#include "algorithm.h"

using namespace std;

int main()
{
    vector<int> vec;
  while(1)
    {
        cout << "Please choose what you want to do:" << endl;
        cout << "1.Add integer to vector" << endl;
        cout << "2.Show each integer in vector" << endl;
        cout << "3.Calculate all of integers in vector with value 2" << endl;
        cout << "4.Clean the vector" << endl;
        cout << "5.Exit" << endl;
        int index;
        cin >> index;
        if (index == 5)
            break;
        switch (index)
        {
            case 1:
                cout << "Please input value:";
                int input;
                cin >> input;
                vec.push_back(input);
                break;
            case 2:
                for_each(vec, [](int i){cout << i << " ";});
                cout << endl;
                break;
            case 3:
                cout << "Please input operator:";
                char ope;
                cin >> ope;
                switch (ope)
                {
                    case '+':
                        all_of(&vec, [](int i){return i+2;});
                        break;
                    case '-':
                        all_of(&vec, [](int i){return i-2;});
                        break;
                    case '*':
                        all_of(&vec, [](int i){return i*2;});
                        break;
                    case '/':
                        all_of(&vec, [](int i){return i/2;});
                        break;
                }
                break;
            case 4:
                vec.clear();
                break;
        }
    }
    return 0;
}
