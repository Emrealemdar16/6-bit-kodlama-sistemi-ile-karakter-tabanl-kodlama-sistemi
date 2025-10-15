# 6-bit-kodlama-sistemi-ile-karakter-tabanl-kodlama-sistemi
Bu projenin temel amacı, kullanıcıdan klavye aracılığıyla tek basamaklı iki sayısal karakter ('0'-'9') almak, bu karakterleri güvenli bir şekilde sayısal değerlere dönüştürmek, toplamak ve sonucun 9'a eşit olup olmadığını kontrol etmektir. Proje, özellikle giriş sağlamlığı (input validation) ve ASCII dönüşümü konularını vurgulamaktadır.

Kaynak Kod: main.c (veya odev.c)

Geliştirme Ortamı (IDE): Code::Blocks

Derleyici: GCC

Kod: char ch, ch2; ve int a, b, sum;

Açıklama: Kullanıcı girişini okumak için char (8 bit) tipi kullanıldı, çünkü klavyeden alınan her giriş karakter olarak başlar. Matematiksel işlemler ve sonuçlar için ise int tipi tercih edildi.

Kod: if (ch < '0' || ch > '9' || ch2 < '0' || ch2 > '9') { ... return 1; }

Gerekçe: Bu blok, kodun en önemli güvenlik katmanıdır. Girilen karakterlerin gerçekten rakam olup olmadığını ASCII değerlerine bakarak kontrol eder. Eğer kullanıcı harf veya sembol girerse, program anında return 1 ile hata kodu vererek sonlanır ve hatalı verinin işlenmesini engeller. Bu, programın sağlamlığını gösterir.

Kod: a = ch - 48; ve b = ch2 - 48;

Gerekçe: Rakam karakterlerinin ASCII tablosundaki sayısal değeri, '0' karakterinin ASCII değeri olan 48'den çıkarılarak gerçek sayısal değer elde edilir. Örneğin, '7' karakteri (ASCII 55) →55−48=7. Bu, karakteri matematiksel işlemlerde kullanılabilir bir tam sayıya dönüştürür.

Kod: sum = a + b; ve if (sum <= 9)

Gerekçe: Toplama işleminden sonra, sonuç 9 dan buyukse program sonlanır
