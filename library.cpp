{\rtf1\ansi\deff0\nouicompat{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <cmath>\par
#include <cstdio>\par
#include <vector>\par
#include <iostream>\par
#include <algorithm>\par
using namespace std;\par
\par
#define NUMBERS 3\par
\par
int* getActualDate() \{\par
    static int actualDate[3];\par
    \par
    for(int i = 0; i < NUMBERS; i++) \{\par
        cin >> actualDate[i];\par
    \}\par
    \par
    return actualDate;\par
\}\par
\par
int* getReturnDate() \{\par
    static int returnDate[3];\par
    \par
    for(int i = 0; i < NUMBERS; i++) \{\par
        cin >> returnDate[i];\par
    \}\par
    \par
    return returnDate;\par
\}\par
\par
void showFine(int m_actualDay, int m_actualMonth, int m_actualYear, int m_returnDay, int m_returnMonth, int m_returnYear)\par
\{\par
    int fine = 0;\par
    if(m_actualYear == m_returnYear) \{\par
        if(m_actualMonth <= m_returnMonth) \{\par
           if(m_actualDay <= m_returnDay)\par
            \{\par
                fine = 0;\par
            \} \par
            else \{\par
            fine = 15 * (m_actualDay - m_returnDay);\par
                \}\par
        \}\par
        else \{\par
            fine = 500 * (m_actualMonth - m_returnMonth);\par
        \}\par
    \}\par
    else if(m_actualYear < m_returnYear) \{\par
        fine = 0;\par
    \}\par
    else \{\par
        fine = 10000;\par
    \}\par
    \par
    cout << fine << endl;\par
\}\par
\par
int main() \{\par
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   \par
    \par
    int* pointerActualDate;\par
    int* pointerReturnDate;\par
    pointerActualDate = getActualDate();\par
    pointerReturnDate = getReturnDate();\par
    \par
    int actualDay = *(pointerActualDate + 0);\par
    int returnDay = *(pointerReturnDate + 0);\par
    \par
    int actualMonth = *(pointerActualDate + 1);\par
    int returnMonth = *(pointerReturnDate + 1);\par
    \par
    int actualYear = *(pointerActualDate + 2);\par
    int returnYear = *(pointerReturnDate + 2);\par
    \par
    showFine(actualDay, actualMonth, actualYear, returnDay, returnMonth, returnYear);\par
    \par
    return 0;\par
\}\par
}
 