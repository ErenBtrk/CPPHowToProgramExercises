// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include "IsEqualTo.h"
#include "Number.h"

int main()
{
    std::cout << isEqualTo(1, 2) << std::endl;
    std::cout << isEqualTo(1.1, 2.2) << std::endl;
    std::cout << isEqualTo('a', 'b') << std::endl;
    std::cout << isEqualTo("apple", "app") << std::endl;

    std::cout << isEqualTo(1, 1) << std::endl;
    std::cout << isEqualTo(1.1, 1.1) << std::endl;
    std::cout << isEqualTo('a', 'a') << std::endl;
    std::cout << isEqualTo("apple", "apple") << std::endl;

    Number n1(3);
    Number n2(3);
    Number n3(4);
    std::cout << isEqualTo(n1, n2) << std::endl;
    std::cout << isEqualTo(n1, n3) << std::endl;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
