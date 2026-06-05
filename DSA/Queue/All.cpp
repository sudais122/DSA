#include<iostream>
using namespace std;

#define MAX 10

// ===================================================
// 🔵 1. NORMAL QUEUE
// ===================================================
int Q[MAX];
int frontQ = -1, rearQ = -1;

bool isEmptyQ() {
    return frontQ == -1;
}

bool isFullQ() {
    return rearQ == MAX - 1;
}

void enqueueQ(int x) {
    if (isFullQ()) {
        cout << "Queue Overflow\n";
        return;
    }

    if (isEmptyQ()) {
        frontQ = rearQ = 0;
    } else {
        rearQ++;
    }

    Q[rearQ] = x;
}

void dequeueQ() {
    if (isEmptyQ()) {
        cout << "Queue Underflow\n";
        return;
    }

    cout << Q[frontQ] << " deleted\n";
    frontQ++;

    if (frontQ > rearQ)
        frontQ = rearQ = -1;
}

void displayQ() {
    for (int i = frontQ; i <= rearQ; i++)
        cout << Q[i] << " ";
    cout << endl;
}


// ===================================================
// 🟣 2. PRIORITY QUEUE (DESCENDING)
// ===================================================
int PQ[MAX];
int PR[MAX];
int frontP = -1, rearP = -1;

bool isEmptyP() {
    return frontP == -1;
}

bool isFullP() {
    return rearP == MAX - 1;
}

void enqueueP(int x, int pr) {
    if (isFullP()) {
        cout << "Priority Queue Full\n";
        return;
    }

    if (isEmptyP()) {
        frontP = rearP = 0;
        PQ[rearP] = x;
        PR[rearP] = pr;
        return;
    }

    int i = rearP;

    while (i >= frontP && PR[i] < pr) {
        PQ[i + 1] = PQ[i];
        PR[i + 1] = PR[i];
        i--;
    }

    PQ[i + 1] = x;
    PR[i + 1] = pr;
    rearP++;
}

void dequeueP() {
    if (isEmptyP()) {
        cout << "Priority Queue Empty\n";
        return;
    }

    cout << PQ[frontP] << " deleted\n";
    frontP++;

    if (frontP > rearP)
        frontP = rearP = -1;
}

void displayP() {
    for (int i = frontP; i <= rearP; i++)
        cout << PQ[i] << "(" << PR[i] << ") ";
    cout << endl;
}


// ===================================================
// 🟠 3. DEQUE (DOUBLE ENDED QUEUE)
// ===================================================
int DQ[MAX];
int frontD = -1, rearD = -1;

bool isEmptyD() {
    return frontD == -1;
}

bool isFullD() {
    return rearD == MAX - 1;
}

// insert rear
void insertRear(int x) {
    if (isFullD()) {
        cout << "Deque Full\n";
        return;
    }

    if (isEmptyD()) {
        frontD = rearD = 0;
    } else {
        rearD++;
    }

    DQ[rearD] = x;
}

// insert front
void insertFront(int x) {
    if (frontD == 0) {
        cout << "No space at front\n";
        return;
    }

    if (isEmptyD()) {
        frontD = rearD = 0;
    } else {
        frontD--;
    }

    DQ[frontD] = x;
}

// delete front
void deleteFront() {
    if (isEmptyD()) {
        cout << "Deque Empty\n";
        return;
    }

    cout << DQ[frontD] << " deleted\n";
    frontD++;

    if (frontD > rearD)
        frontD = rearD = -1;
}

// delete rear
void deleteRear() {
    if (isEmptyD()) {
        cout << "Deque Empty\n";
        return;
    }

    cout << DQ[rearD] << " deleted\n";
    rearD--;

    if (frontD > rearD)
        frontD = rearD = -1;
}

void displayD() {
    for (int i = frontD; i <= rearD; i++)
        cout << DQ[i] << " ";
    cout << endl;
}


// ===================================================
// 🟡 MAIN FUNCTION (TESTING)
// ===================================================
int main() {

    cout << "=== NORMAL QUEUE ===\n";
    enqueueQ(10);
    enqueueQ(20);
    enqueueQ(30);
    displayQ();
    dequeueQ();
    displayQ();

    cout << "\n=== PRIORITY QUEUE ===\n";
    enqueueP(10, 2);
    enqueueP(20, 5);
    enqueueP(30, 1);
    enqueueP(40, 4);
    displayP();
    dequeueP();
    displayP();

    cout << "\n=== DEQUE ===\n";
    insertRear(10);
    insertRear(20);
    insertFront(5);
    displayD();
    deleteRear();
    displayD();
    deleteFront();
    displayD();

    return 0;
}