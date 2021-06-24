#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //vector<int>nums{ 5,7,2,5,3,12,5,6,7,4,2,5,5 };
    ////сортировка контейнера
    //sort(nums.begin(), nums.end());
    ////переворачивание контейнера
    //reverse(nums.begin(), nums.end());
    //for (int item : nums)cout << item << " ";
    //cout << "\n"<< count(nums.begin(), nums.end(), 5);
    ////Удаление повторяющихся цифр и установка их в конец
    //unique(nums.begin(), nums.end());
    //cout<<endl;
    //for (int item : nums)cout << item << " ";

    string str = "Hello,world!";
    int c = count(str.begin(), str.end(), 'l');
    c+= count(str.begin(), str.end(), 'L');
    cout << c<<endl ;
    string buff,a="qwertyuiopasdfghjklzxcvbnm";
    fstream book;
    book.open("TextFile1.txt");
    getline(book,buff, '\0');
    book.close(); 
    for (char l : a) {
        int d = count(buff.begin(), buff.end(), tolower(l));
        d += count(buff.begin(), buff.end(), toupper(l));
        cout << l<<"-"<<d << endl;


    }

}