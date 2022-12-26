#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream my_file("./input.txt");
    string line;

    unsigned long long int sum = 0;



    while(getline(my_file, line)){
        unsigned long long int number = stoull(line);
        sum += number;

    }

    my_file.close();

    return 0;
}
