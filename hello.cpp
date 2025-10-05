#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    cout << "Hello, World! Current time is: " << ctime(&now);
    return 0;
}
