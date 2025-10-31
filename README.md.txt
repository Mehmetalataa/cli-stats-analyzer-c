#C Programlama Dili ile Çok Amaçlı Komut Satırı Analiz Aracı

Bu proje, C dilinde yazılmış, Komut Satırı Arayüzü (CLI) aracılığıyla girilen sayı dizileri üzerinde çeşitli istatistiksel ve matematiksel analizler yapabilen tek bir çalıştırılabilir programdır. Program, son argümanı bir komut olarak okur ve bu komuta göre önceki sayıları işler.

##Özellikler

- **Komut Satırı Etkileşimi:** `argc` ve `argv` kullanarak kullanıcı girdilerini okur.
- **Dinamik İşlem Seçimi:** `strcmp` ile son argümana göre (komut) işlem seçimi yapılır.
- **İstatistiksel Analiz:** Ortalama ve Standart Sapma hesaplamaları.
- **Sayısal Analiz:** Mükemmel Sayı ve Tam Kare sayı filtrelemeleri.

##Kullanım

Programı çalıştırmak için, sayılardan sonra hangi işlemi yapmak istediğinizi belirten bir komut girmelisiniz.

### Derleme

Kaynak kodu (örneğin `analiz.c`) derlemek için GCC/G++ kullanın:

```bash
gcc analiz.c -o calistir -lm




Komut,Açıklama,Beklenen Çıktı Örneği
./calistir 1 2 3 4 5 ort,Girilen sayıların aritmetik ortalamasını hesaplar.,3.000000
./calistir 10 2 15 8 max,En büyük değeri bulur.,15
./calistir 4 16 7 25 tam,Tam kare olan sayıları listeler.,4\n9\n25\n
./calistir 1 2 3 4 5 std,Sayıların standart sapmasını hesaplar.,1.581139
./calistir 6 27 28 mukemmel,Mükemmel sayı olanları listeler.,6\n28\n