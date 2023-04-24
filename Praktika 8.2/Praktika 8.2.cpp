#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    cout<< "Введите количество элементов в массиве: ";
    int n;
    cin >> n;
    int* arr=new int[n]; // объявили массив 
    system ("cls");

    cout << "Задайте  эллементы для заполнения массива: "<<endl ;

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // читаем элементы в массив
    }
    int s;

    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > 0; j--) {
            s= false;
            if (arr[j - 1] > arr[j]) {
                int b = arr[j]; // создали доп. переменную
                swap(arr[j], arr[j - 1]); // меняем местами
                arr[j - 1] = b; // значения элементов
                s = true;
                for (int j = 0; j < n; j++) {
                    cout << arr[j] << " ";
                }
                cout << endl;
            }
            if (s=false) {
                break;
            }   
        }
    }

    cout << "Массив в отсортированном виде: "<<" ";
 

    for (int i = 0; i < n; i++) {
       cout << arr[i]<<" "; // выводим элементы массив
   }
    system("pause");
    return 0;

}