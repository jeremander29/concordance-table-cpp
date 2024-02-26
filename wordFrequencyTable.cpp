//Jeremiah Ibarra
//Concordance Table


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//location of file
//jingleBells.txt

#include "BST.h"
#include "Struct.h"



int main()
{
    BST<word> myArray[26];
    word temp;
    char answer = 'y';

    ifstream file;
    string address;
    cout << "Enter Address of File you want to open or enter in 'jingleBells.txt' for pre saved file: ";
    getline(cin, address);
    file.open(address);
    if (!file.is_open())
    {
        cout << "No file to open. Rerun program to try again.";
        exit(0);
    }

    while (file >> temp.name)
    {
       
        
        

        for (int i = 0; i < temp.name.size(); i++)
        {
            temp.name[0] = tolower(temp.name[0]);

            if (temp.name[i] < 'a' || temp.name[i] > 'z')
            {
                temp.name.erase(i, 1);
                i--;
            }
        }
        


        if (temp.name.empty())
        {
            continue;
        }

        int num = temp.name[0] - 97;
        myArray[num].insert(temp);

        int lineNum = file.peek();

        if (lineNum == '\n')
        {
            temp.line++;
        }

        
  }
    

    while (answer == 'y')
    {
        word tmp;
        char ans;
        cout << endl << endl << "Enter word you are searching for: ";
        cin >> tmp.name;
        tmp.name[0] = tolower(tmp.name[0]);

        if (myArray[tmp.name[0] - 97].search(tmp))
        {
            cout << "Word exists on text file." << endl;
        }
        else
        {
            cout << "Word does NOT exist on text file" << endl;
        }

        cout << "Would you like to search another word? enter 'Y' to continue 'N' to exit: " << endl;
        cin >> ans;
        answer = tolower(ans);
    }
    cout << endl << "Word Frequency Table for given file: " << endl;
    for (int i = 0; i < 26; i++)
    {
        myArray[i].inorder(cout);

    }

    return 0;

}

