// Week5Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int max = 5;
    int age[max] = { 4,99,10,9,5 };
    int temp= 0, choice = 0;
    string sTemp, school = "Yoobee";;
    string name[max] = { "beyatch", "Uncle Roger", "auntie helen", "MSG", "Zebra" }; 
    string items[max];
    float price[max];

again:

    /*cout << "Press 1 to run the sort String A-Z program" << endl
        << "Press 2 to run the sort String Z-A program" << endl
        << "Press 3 to run the sort Integer Lowest to Highest program" << endl
        << "Press 4 to run the sort Integer Highest to Lowest program" << endl
        << "Press 5 to run loop through strings program" << endl*/
        cout << "Press 6 to run Supermarket program" << endl
        << "Press any number to exit" << endl << endl
        << "Choice a program to run: ";
    cin >> choice;
    cout << endl << endl;

    switch(choice) {
        case 1:
            cout << "Unsorted names: beyatch, Uncle Roger, auntie helen, MSG, Zebra" << endl;
            //sorting Strings A to Z
            for (int i = 0; i < max; i++) { // sort
                for (int x = 0; x < max; x++) {
                    if (tolower(name[i][0]) < tolower(name[x][0])) {
                        sTemp = name[i];
                        name[i] = name[x];
                        name[x] = sTemp;
                    }
                }
            }
            //Print sorted names
            cout << "\n\nSorted Names\n\n" << endl;
            for (int i = 0; i < max; i++) {
                cout << name[i] << endl;
            }
            break;
        case 2:
            //sorting Strings Z to A
            cout << "Unsorted names: beyatch, Uncle Roger, auntie helen, MSG, Zebra" << endl;
            for (int i = 0; i < max; i++) { // sort
                for (int x = 0; x < max; x++) {
                    if(tolower(name[i][0]) > tolower(name[x][0])) {
                        sTemp = name[i];
                        name[i] = name[x];
                        name[x] = sTemp;
                    }
                }
            }
            //Print sorted names
            cout << "\n\nSorted Names\n\n";
            for (int i = 0; i < max; i++) {
                cout << name[i] << endl;
            }
            break;
        case 3:
            //sorting Integers Lowest to Highest
            for (int i = 0; i < max; i++) { // sort
                for (int x = 0; x < max; x++) {
                    if (age[i] < age[x]) {
                        temp = age[i];
                        age[i] = age[x];
                        age[x] = temp;
                    }
                }
            }

            for (int i = 0; i < max; i++) {
                //  cout << "\n \nName of person: " << name[i] << endl
                cout << "Age of person: " << age[i] << endl;
            }
            break;
        case 4:
            //sorting Integers Highest to Lowest
            for (int i = 0; i < max; i++) { // sort
                for (int x = 0; x < max; x++) {
                    if (age[i] > age[x]) {
                        temp = age[i];
                        age[i] = age[x];
                        age[x] = temp;
                    }
                }
            }

            for (int i = 0; i < max; i++) {
                //  cout << "\n \nName of person: " << name[i] << endl
                cout << "Age of person: " << age[i] << endl;
            }
            break;
        case 5:
            //Looping through Strings
             for (int i = 0; i < school.length(); i++) {
                 if(i == 2)
                     school[i] = 'u';
                 cout << school[i] << endl;
             }
            break;
        case 6:
            for (int i = 0; i < max; i++) {
                cout << "Enter Item Name: ";
                cin >> items[i];
                cout << "Enter Price: ";
                cin >> price[i];
            }

            cout << "\n\nMarket Items \n\n";
            for (int i = 0; i < max; i++) {
                //  cout << "\n \nName of person: " << name[i] << endl
                cout << "Item name: " << items[i] << " Item price: " << price[i] << endl;
            }

            cout << "\n\n";
            //sorting Strings A to Z
            for (int i = 0; i < max; i++) { // sort
                for (int x = 0; x < max; x++) {
                    if (tolower(items[i][0]) < tolower(items[x][0])) {
                        sTemp = items[i];
                        items[i] = items[x];
                        items[x] = sTemp;

                        temp = price[i];
                        price[i] = price[x];
                        price[x] = temp;
                    }
                }
            }

            cout << "\n\nSorted Items A- Z \n\n";
            //Print sorted names
            for (int i = 0; i < max; i++) {
                //  cout << "\n \nName of person: " << name[i] << endl
                cout << "Item name: " << items[i] << " Item price: " << price[i] << endl;
            }

            //sorting Integers Lowest to Highest
            for (int i = 0; i < max; i++) { // sort
                for (int x = 0; x < max; x++) {
                    if (price[i] > price[x]) {
                        temp = price[i];
                        price[i] = price[x];
                        price[x] = temp;

                        sTemp = items[i];
                        items[i] = items[x];
                        items[x] = sTemp;
                    }
                }
            }

            cout << "\n\nSorted Items Price Highest-Lowest \n\n";
            //Print sorted names
            for (int i = 0; i < max; i++) {
                //  cout << "\n \nName of person: " << name[i] << endl
                cout << "Item name: " << items[i] << " Item price: " << price[i] << endl;
            }

            cout << "\n\nItems under $10\n\n" << endl;
            for (int i = 0; i < max; i++) {
                //  cout << "\n \nName of person: " << name[i] << endl
                if(price[i] < 10)
                    cout << "Item name: " << items[i] << " Item price: " << price[i] << endl;
            }

            break;
        default:
            return 0;
    }

    cout << endl;
    system("pause");
    system("cls");
    goto again;

    return 0;
}
/*for (int i = 0; i < max; i++) {
    cout << "Enter Age: ";
    cin >> age[i];
}*/