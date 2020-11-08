//Написать программу, которая по запросу пользователя создавала бы копию текстового файла, создавала бы новый текстовый фай, перемещала бы текстовый файл и удаляла бы содержимое текстового файла.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Copy() {
    string line;
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

int main() {
    
}