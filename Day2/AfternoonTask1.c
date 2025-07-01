#include <stdio.h>

int main() {
    // Deklarojmë një variabël integer për moshën
    int mosha = 16;
    
    // Deklarojmë një variabël float për gjatësinë
    float gjatesia = 1.70;
    
    // Shtypim të dhënat me printf()
    // %d përdoret për integer (mosha)
    // %f përdoret për float (gjatesia)
    printf("Mosha: %d vjec\n", mosha);
    
    // %0.2f tregon që duam 2 shifra pas presjes dhjetore për float
    printf("Gjatesia: %.2f metra\n", gjatesia);
    
    // Shpjegim i përdorimit të %d dhe %f:
    // %d - përdoret për të shfaqur variabla të tipit int (integer)
    // %f - përdoret për të shfaqur variabla të tipit float (numra me presje dhjetore)

    // Nëse përdorim %d për një float, programi do të shfaqë vlera të gabuara ose të pakuptimta
    // sepse %d pret një numër të plotë dhe jo formatin e float-it.
    
    return 0;
}
