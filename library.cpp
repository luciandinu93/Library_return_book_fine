#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define NUMBERS 3

int* getActualDate() {
    static int actualDate[3];
    
    for(int i = 0; i < NUMBERS; i++) {
        cin >> actualDate[i];
    }
    
    return actualDate;
}

int* getReturnDate() {
    static int returnDate[3];
    
    for(int i = 0; i < NUMBERS; i++) {
        cin >> returnDate[i];
    }
    
    return returnDate;
}

void showFine(int m_actualDay, int m_actualMonth, int m_actualYear, int m_returnDay, int m_returnMonth, int m_returnYear)
{
    int fine = 0;
    if(m_actualYear == m_returnYear) {
        if(m_actualMonth <= m_returnMonth) {
           if(m_actualDay <= m_returnDay)
            {
                fine = 0;
            } 
            else {
            fine = 15 * (m_actualDay - m_returnDay);
                }
        }
        else {
            fine = 500 * (m_actualMonth - m_returnMonth);
        }
    }
    else if(m_actualYear < m_returnYear) {
        fine = 0;
    }
    else {
        fine = 10000;
    }
    
    cout << fine << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int* pointerActualDate;
    int* pointerReturnDate;
    pointerActualDate = getActualDate();
    pointerReturnDate = getReturnDate();
    
    int actualDay = *(pointerActualDate + 0);
    int returnDay = *(pointerReturnDate + 0);
    
    int actualMonth = *(pointerActualDate + 1);
    int returnMonth = *(pointerReturnDate + 1);
    
    int actualYear = *(pointerActualDate + 2);
    int returnYear = *(pointerReturnDate + 2);
    
    showFine(actualDay, actualMonth, actualYear, returnDay, returnMonth, returnYear);
    
    return 0;
}
