#include<iostream>
#include<iomanip>
#include<bitset>
#include<sstream>

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

unsigned int enc(unsigned int n)
{
    return n ^ (n >> 1);
}

unsigned int decode(unsigned int g)
{
    for(unsigned int i = 32; i > 1; i = (i >> 1))
    {
        if(g & i) g = g ^ (i >> 1);
    }
    return g;
}

std::string print_line(unsigned int i, std::bitset<5> bin, std::bitset<5> enc, unsigned int dec)
{
    std::stringstream out {};
    out << std::setw(2) << i << " " << bin << " " << enc << " " << std::setw(2) << dec;
    return out.str();
}

int main(){

    for(unsigned int i = 0; i < 32; ++i){
        std::bitset<5> binary {i};
        auto x3 = enc(i);
        std::bitset<5> x3_enc {x3};
        auto x3_dec = decode(x3);

        std::cout << print_line(i, binary, x3_enc, x3_dec) << "\n";
    }

    return 0;
}
