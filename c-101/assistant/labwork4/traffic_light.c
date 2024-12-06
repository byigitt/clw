// Standart input/output kütüphanesini dahil et
#include <stdio.h>

// Ana fonksiyon
int main() {
    // Trafik ışığı değişkeni
    char signal;
    
    // Kullanıcıdan trafik ışığı rengini iste
    printf("Enter traffic light color (R/r, Y/y, G/g): ");
    // Kullanıcının girişini al
    scanf(" %c", &signal);
    
    // Girilen değere göre uygun mesajı yazdır
    if (signal == 'R' || signal == 'r') {
        // Kırmızı ışık: dur
        printf("Stop\n");
    } else if (signal == 'Y' || signal == 'y') {
        // Sarı ışık: hazır ol
        printf("Ready\n");
    } else if (signal == 'G' || signal == 'g') {
        // Yeşil ışık: geç
        printf("Go\n");
    } else {
        // Geçersiz giriş
        printf("Invalid signal\n");
    }
    
    // Programı sonlandır
    return 0;
} 