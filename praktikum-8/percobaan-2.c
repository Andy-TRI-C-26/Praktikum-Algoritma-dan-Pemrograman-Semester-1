#include <stdio.h>

float f_to_i(float feet) {
    float inch = feet * 12;
    printf("%.2f kaki = %.2f inci\n", feet, inch);
    return inch;
}

float i_to_cm(float inch) {
    float centimeter = inch * 2.54;
    printf("%.2f inci = %.2f cm\n", inch, centimeter);
    return centimeter;
}

float c_to_m(float centimeter) {
    float meter = centimeter / 100;
    printf("%.2f cm = %.2f m\n", centimeter, meter);
    return meter;
}

int main() {
    printf("Masukkkan angka dalam satuan kaki (feet):");
    float feet;
    scanf("%f", &feet);
    printf("\n");
    float inch = f_to_i(feet);
    float cm = i_to_cm(inch);
    float meter = c_to_m(cm);
    printf("\nHasil dari %.2f kaki adalah %.2f meter\n", feet, meter);
}
