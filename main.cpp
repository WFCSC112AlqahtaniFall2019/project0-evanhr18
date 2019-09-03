#include <iostream>
using namespace std;

int main() {

    int x1;
    int y1;
    int answer1;
    int x2;
    int y2;
    int answer2;
    int x = -10;
    int y;

    cin >> x1;
    cin >> y1;
    cin >> answer1;
    cin >> x2;
    cin >> y2;
    cin >> answer2;

    while (-10 <= x <= 10) {
        y = -10;
        while (-10 <= y <= 10) {
            if ((x1 * x) + (y1 * y) == answer1 && (x2 * x) + (y1 * y) == answer2) {
                cout << x << " " << y;
            }
            else {
                y = y+1;
            }
        }
        x = x+1;
    }
    cout << "No solution";



    return 0;
}