/////////////////////////////////////
/* Ex_1
#include <ctime>
#include <iostream>
#include <string>

int main() {
    // Şu anki zamanı alma
    time_t currentTime;
    struct tm* localTime;
    currentTime = time(nullptr);
    localTime = localtime(&currentTime);

    // Tarihi ve saati ekrana yazdırma
    std::cout << "Şu anki tarih ve saat: " << asctime(localTime);

    // Özel bir tarih ve saat oluşturma
    struct tm customTime;
    customTime.tm_year = 123; // Yıl 1900'e göre belirtilir, bu nedenle 2023
için 123 kullanıyoruz. customTime.tm_mon = 0;   // Ocak (0) ayı
    customTime.tm_mday = 1;  // 1. gün
    customTime.tm_hour = 12; // Saat 12:00
    customTime.tm_min = 0;   // Dakika 0
    customTime.tm_sec = 0;   // Saniye 0

    // Özel tarih ve saati hesaplama
    time_t customTimeT = mktime(&customTime);

    // Özel tarih ve saati ekrana yazdırma
    std::cout << "Özel tarih ve saat: " << asctime(localtime(&customTimeT));

    // Zaman aritmetiği kullanma
    time_t futureTime = currentTime + 86400; // 24 saat (1 gün) sonrası

    // Gelecekteki zamanı ekrana yazdırma
    std::cout << "Gelecekteki zaman: " << asctime(localtime(&futureTime));

    return 0;
} */
/////////////////////////////////////
/* Ex_2 */
#include <iostream>

int main() {
  std::cout << "Test " << std::endl;

  return 0;
}
