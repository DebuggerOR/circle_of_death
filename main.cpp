#include <iostream>
using namespace std;


short surv(short circle){
    if(circle & 0b1000000000000000){
        return (circle >> 15) | (circle << 1) & 0b1111111111111111;
    }

    if(circle & 0b0100000000000000){
        return (circle >> 14) | (circle << 1) & 0b0111111111111111;
    }

    if(circle & 0b0010000000000000){
        return (circle >> 13) | (circle << 1) & 0b0011111111111111;
    }

    if(circle & 0b0001000000000000){
        return (circle >> 12) | (circle << 1) & 0b0001111111111111;
    }

    if(circle & 0b0000100000000000){
        return (circle >> 11) | (circle << 1) & 0b0000111111111111;
    }

    if(circle & 0b0000010000000000){
        return (circle >> 10) | (circle << 1) & 0b0000011111111111;
    }

    if(circle & 0b0000001000000000){
        return (circle >> 9) | (circle << 1) & 0b0000001111111111;
    }

    if(circle & 0b0000000100000000){
        return (circle >> 8) | (circle << 1) & 0b0000000111111111;
    }

    if(circle & 0b0000000010000000){
        return (circle >> 7) | (circle << 1) & 0b0000000011111111;
    }

    if(circle & 0b0000000001000000){
        return (circle >> 6) | (circle << 1) & 0b0000000001111111;
    }

    if(circle & 0b0000000000100000){
        return (circle >> 5) | (circle << 1) & 0b0000000000111111;
    }

    if(circle & 0b0000000000010000){
        return (circle >> 4) | (circle << 1) & 0b0000000000011111;
    }

    if(circle & 0b0000000000001000){
        return (circle >> 3) | (circle << 1) & 0b0000000000001111;
    }

    if(circle & 0b0000000000000100){
        return (circle >> 2) | (circle << 1) & 0b0000000000000111;
    }

    if(circle & 0b0000000000000010){
        return (circle >> 1) | (circle << 1) & 0b0000000000000011;
    }

    return 1;
}

int main() {
    for (int i = 1; i < 42; ++i) {
        cout << i << " : " << surv(i) << endl;
    }
    return 0;
}
