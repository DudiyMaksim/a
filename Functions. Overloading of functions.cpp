#include <iostream>
#include <iomanip>
using namespace std;


//task 2.1
void copyarr(int* arr1, int *arr2, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        *(arr2+i) = *(arr1 + i);
    }
}

//task 2.2
void readrevers(int* arr1, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr1[i] << " ";
    }
}

//task 2.3
void reverscopy(int* arr1, int* arr2, int size) {
    for (int i = size - 1; i >= 0; i--) {
        arr2[size - 1 - i] = arr1[i];
    }
}

void showarr(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


//task 1.2
bool InArr(int a, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (a == arr[i]) {
            return true;
        }
    }
    return false;
}

bool Move(int num, int* a) {
    int indx = -1, temp;
    for (int i = 0; i < 16; i++) {
        if (a[i] == num) {
            indx = i;
            break;
        }
    }
    if (indx == -1)
        return false;

    if (indx % 4 != 0 && a[indx - 1] == -1) {
        temp = a[indx - 1];
        a[indx - 1] = a[indx];
        a[indx] = temp;
        return true;
    }
    if (indx % 4 != 3 && a[indx + 1] == -1) {
        temp = a[indx + 1];
        a[indx + 1] = a[indx];
        a[indx] = temp;
        return true;
    }
    if (indx >= 4 && a[indx - 4] == -1) {
        temp = a[indx - 4];
        a[indx - 4] = a[indx];
        a[indx] = temp;
        return true;
    }
    if (indx < 12 && a[indx + 4] == -1) {
        temp = a[indx + 4];
        a[indx + 4] = a[indx];
        a[indx] = temp;
        return true;
    }
    return false;
}

bool AreYouwin(int arr[], int size) {
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i]!=i++)
        {
            return false;
        }
    }
    return true;
}


//task 1.3
bool AreYouWin(char arr[]) {
    for (int i = 0; i < 9; i += 3) {
        if ((arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2]) && (arr[i] == 'X' || arr[i] == 'O')) {
            cout << "Player " << arr[i] << " wins!\n";
            return true;
        }
    }

    for (int i = 0; i < 3; i++) {
        if ((arr[i] == arr[i + 3] && arr[i + 3] == arr[i + 6]) && (arr[i] == 'X' || arr[i] == 'O')) {
            cout << "Player " << arr[i] << " wins!\n";
            return true;
        }
    }

    if (((arr[0] == arr[4] && arr[4] == arr[8]) || (arr[2] == arr[4] && arr[4] == arr[6])) && (arr[4] == 'X' || arr[4] == 'O')) {
        cout << "Player " << arr[4] << " wins!\n";
        return true;
    }

    return false;
}


int main() {
    /*task 1.1*/
    //немає ідей( на листку пробував всякі комбінації не виходе( а gpt далеко йде
    ///*task 1.2*/
    //srand(time(NULL));
    //cout << "To control, select  number and thtat will move\nIf you want to stop the game, enter \"0\"";
    //int arr[16];
    //for (int i = 0; i < 15; i++) {
    //    int a = rand() % 15 + 1;
    //    while (InArr(a, arr, 15)) {
    //        a = rand() % 15 + 1;
    //    }
    //    arr[i] = a;
    //}
    //arr[15] = -1; 
    //while (true) {
    //    cout << "\n ----------------------------------------";
    //    for (int i = 0; i < 4; i++) {
    //        cout << endl;
    //        for (int j = 0; j < 4; j++) {
    //            if (arr[j + 4 * (i)] < 16 && arr[j + 4 * (i)] > 0) {
    //                cout << " |   " << setw(2) << arr[j + 4 * (i)] << "   ";
    //            }
    //            else {
    //                cout << " |   " << setw(2) << "     ";
    //            }
    //        }
    //        cout << "|";
    //        cout << "\n ----------------------------------------";
    //    }
    //    cout << "\n\nEnter the number you want to move : ";
    //    int* pchoice = &arr[0], am;
    //    cin >> am;
    //    if (am==0)
    //    {
    //        cout << "\nbye(";
    //        break;
    //    }
    //    if (AreYouwin(arr, 15))
    //    {
    //        cout << "YOU WON";
    //    }
    //    if (Move(am, pchoice) == false) {
    //        cout << "You can`t remove this number";
    //    }
    //}
    ///*task 1.3*/
    //srand(time(NULL));
    //int OorX = rand() % 2;
    //char arr[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    //char symbol = 'X';
    //cout << "To walk, select the cell number\nYou are \"" << symbol << "\"\n";
    //cout << "-------------\n";
    //for (size_t i = 0; i < 3; i++) {
    //    cout << "|   |   |   |" << endl;
    //    cout << "-------------" << endl;
    //}
    //while (true) {
    //    int turn;
    //    cout << "\n\nYour turn (enter a number from 1 to 9): ";
    //    cin >> turn;
    //    if (turn < 1 || turn > 9 || arr[turn - 1] != ' ') {
    //        cout << "Invalid move! Try again." << endl;
    //        continue;
    //    }
    //    arr[turn - 1] = symbol;
    //    cout << "-------------\n";
    //    for (size_t i = 0; i < 3; i++) {
    //        cout << "| " << arr[i * 3] << " | " << arr[i * 3 + 1] << " | " << arr[i * 3 + 2] << " |" << endl;
    //        cout << "-------------" << endl;
    //    }
    //    symbol = (symbol == 'O') ? 'X' : 'O';
    //    if (AreYouWin(arr))
    //    {
    //        break;
    //    }
    //}
    ///*task 2.1*/
    //int arr[5]{ 1,2,3,4,5 };
    //int arr2[5];
    //copyarr(&arr[0], &arr2[0], 5);
    //showarr(arr2, 5);
    ///*task 2.2*/
    //int arr[5]{ 1,2,3,4,5 };
    ////readrevers(&arr[0], 5);
    ///*task 2.3*/
    //int arr[5]{ 1,2,3,4,5 };
    //int arr2[5];
    //reverscopy(&arr[0],&arr2[0], 5);
    //showarr(arr2, 5);
}
