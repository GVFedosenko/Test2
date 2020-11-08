//Написать программу, которая по запросу пользователя создавала бы копию текстового файла, создавала бы новый текстовый фай, перемещала бы текстовый файл и удаляла бы содержимое текстового файла.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Copy() {
    string line, choice1, choice2;
    ifstream man("Test.txt", ios::in);
    getline(man, line);
    man.close();
    ofstream in("Test2.txt");
    in << line;
};

void Create() {
    setlocale(LC_ALL, "RUS");
    string name;
    cout << "Введите название файла: " << endl;
    cin >> name;
    ofstream Name(name+".txt");
    Name << "Пустой файл";
}

void Delete()
{
    string line, name;
    cout << "Введите имя файла: "; cin >> name;
    ifstream man("pacifier.txt", ios::in);
    getline(man, line);
    man.close();
    ofstream in(name);
    in << line;
}

int main() {
    cout << "+++++++++++++++++++++++++++" << endl;
    cout << "Menu:" << endl;
    cout << "1. New File" << endl;
    cout << "2. Copi file" << endl;
    cout << "3. Change file" << endl;
    cout << "4. Unistall file " << endl;
    cout << "0. Exit" << endl;
    cout << "+++++++++++++++++++++++++++" << endl;
    char symbol;
    if (symbol == '1') {
        Create();
    } else if (symbol == '2') {
        Copy();
    } else if (symbol == '3') {

    } else if (symbol == '4') {
        Delete();
    }
}