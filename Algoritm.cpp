#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>nums{ 5,7,2,5,3,12,5,6,7,4,2,5,5 };
    //сортировка контейнера
    sort(nums.begin(), nums.end());
    //переворачивание контейнера
    reverse(nums.begin(), nums.end());
    for (int item : nums)cout << item << " ";
    cout << "\n"<< count(nums.begin(), nums.end(), 5);
    //Удаление повторяющихся цифр и установка их в конец
    unique(nums.begin(), nums.end());
    cout<<endl;
    for (int item : nums)cout << item << " ";


}