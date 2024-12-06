// Standart input/output kütüphanesini dahil et
#include <stdio.h>

// Ana fonksiyon
int main() {
    // Not değişkenlerini tanımla
    double quiz, midterm, final;
    double overall;
    // Geçme notunu tanımla
    int threshold = 40;
    
    // Kullanıcıdan quiz notunu iste
    printf("Enter quiz grade: ");
    // Quiz notunu oku ve değişkene kaydet
    scanf("%lf", &quiz);
    
    // Kullanıcıdan vize notunu iste
    printf("Enter midterm grade: ");
    // Vize notunu oku ve değişkene kaydet
    scanf("%lf", &midterm);
    
    // Kullanıcıdan final notunu iste
    printf("Enter final grade: ");
    // Final notunu oku ve değişkene kaydet
    scanf("%lf", &final);
    
    // Genel notu hesapla (Quiz %20, Vize %30, Final %50)
    overall = (quiz * 0.20) + (midterm * 0.30) + (final * 0.50);
    
    // Genel notu ekrana yazdır
    printf("Overall grade: %.2f\n", overall);

    // Eğer genel not geçme notundan yüksekse
    if (overall >= threshold) {
        // Öğrencinin dersi geçtiğini yazdır
        printf("Student PASSED the class\n");
    } 
    // Eğer genel not geçme notundan düşükse
    else {
        // Öğrencinin dersten kaldığını yazdır
        printf("Student FAILED the class\n");
    }
    
    // Programı başarıyla sonlandır
    return 0;
} 