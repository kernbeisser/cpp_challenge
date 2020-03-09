#include<iostream>
#include<iomanip>
#include<bitset>

/*
 * Quelle: wikipedia.de
 * Die folgenden Punkte zeigen, wie man Schritt für Schritt aus einem Binärcode eine Gray-codierte Binärzahl erhält:
 *
 * X1: Dualzahl im Binärcode
 * X2: Rechts-Shift der Dualzahl um 1 Bit
 * X3: Modulo-2-Addition (XOR-Verknüpfung) von X1 und X2; dies ist die gewünschte Zahl im Graycode.
 * Das gleiche als Pseudocode:
 *
 * Binärcode X1 → Graycode: X3 = (X1 XOR X2)
 * Und als Formel:
 *
 * x3 = x1 xor (x1 >> 1)
 *
 * */

int main(){

    // TODO use a function for converting
    for(unsigned long i = 0; i < 32; ++i){
        std::bitset<5> binary {i};
        auto x3 = (i ^ (i >> 1));
        std::bitset<5> gray {x3};

        // TODO write that in a string stream
        std::cout << std::setw(2) << i << " " 
                  << binary << " " 
                  << gray << " " 
                  << std::setw(2) 
                  << x3 <<"\n";
    }

    return 0;
}
