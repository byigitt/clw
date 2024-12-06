// Standart input/output kütüphanesini dahil et
#include <stdio.h>

// Ana fonksiyon
int main() {
    // Tüketilen elektrik birimi ve fatura tutarı için değişkenler
    int units;
    float bill = 0;
    
    // Kullanıcıdan tüketilen elektrik birimini iste
    printf("Enter units of electricity consumed: ");
    // Girilen değeri units değişkenine kaydet
    scanf("%d", &units);
    
    // Kademeli fiyatlandırmaya göre fatura hesapla
    if (units <= 100) {
        // İlk 100 birim için 0.50$/birim
        bill = units * 0.50;
    } else if (units <= 200) {
        // İlk 100 birim için 0.50$, sonraki birimler için 0.75$/birim 
        bill = 50 + (units - 100) * 0.75;
    } else if (units <= 300) {
        // İlk 100 birim için 0.50$, sonraki 100 birim için 0.75$,
        // 200'den sonrası için 1.50$/birim
        bill = 125 + (units - 200) * 1.50;
    } else {
        // 300 birimden fazla tüketim için en yüksek kademe
        bill = 275 + (units - 300) * 1.50;
    }

    // Alternatif hesaplama yöntemi 1:
    // if (units <= 100) {
    //     bill = units * 0.50;
    // } else if (units <= 200) {
    //     bill = (100 * 0.50) + ((units - 100) * 0.75);
    // } else if (units <= 300) {
    //     bill = (100 * 0.50) + (100 * 0.75) + ((units - 200) * 1.50);
    // } else {
    //     bill = (100 * 0.50) + (100 * 0.75) + (100 * 1.50) + ((units - 300) * 1.50);
    // }

    // Alternatif hesaplama yöntemi 2:
    // float rates[] = {0.50, 0.75, 1.50, 1.50};
    // int brackets[] = {100, 200, 300};
    // int currentUnits = units;
    // int bracketIndex = 0;
    // bill = 0;
    // while (currentUnits > 0 && bracketIndex < 4) {
    //     int unitsInBracket = (bracketIndex == 0) ? 
    //         min(currentUnits, brackets[0]) :
    //         min(currentUnits, brackets[bracketIndex] - brackets[bracketIndex-1]);
    //     bill += unitsInBracket * rates[bracketIndex];
    //     currentUnits -= unitsInBracket;
    //     bracketIndex++;
    // }
    
    // Hesaplanan fatura tutarını ekrana yazdır
    printf("Total electricity bill: $%.2f\n", bill);
    
    // Programı başarıyla sonlandır
    return 0;
} 