#include <stdio.h>
#include <stdlib.h>

int main()  //programın ana fonksiyonu
{

     char ch,ch2; //kullanıcadan alınıcak 2 deger için degisken tanımlıyoruz
     printf("2 tane sayi giriniz:"); //kullanıcıya yapması gereken sey ıcın ekrana mesaj yazdırır
     scanf( " %c %c",&ch,&ch2);  //ekranda kullanıcının gırecegı ılk karakterı ch ye ıkıncı karakterı ch2 ye tanımlar
   //   printf("ascii degerleri:%d - %d\n",ch,ch2);

     if (ch<'0'||ch>'9'||ch2<'0'||ch2>'9'){ //burada kullanıcının rakamdan baska bısı gırmesını engellıyoruz
        printf("--hata-- 'lutfen sadece rakam giriniz'"); //hata yaptıgını ekranda belırtıyoruz
        return 1; //eger hata yapmıssa bu komutla programı sonlandırıyoruz
     }
     printf("1.sayiniz:%c \n2.sayiniz:%c\n",ch,ch2); //kullanıcının gırdıgı sayıları sırasıyla gosterır

     int a,b,sum; //belırttıgımız a,b ve sum'un bir tam sayı oldugunu tanımlar
     a=ch-48; // kullanıcının gırdıgı 1.sayının ascıı degerını 48 den cıkarıp cıkan sonucu a karakterıne atadık ve burada 48 den cıkarma sebebımız '0'ın ascıısı 48 oldugu ıcın
     b=ch2-48;//kullanıcın gırdıgı 2.sayının ascıı degerını yıne 48 den cıkardık('0') ve cıkan sonucu b ye atadık
     sum=a+b; //burdada a ve b degerlerının toplamını sum karakterıne atadık
     printf("cevap:%d\n",sum); //burda kullanıcı sonucu gorsun dıye ekrana cevap yazdırıp yerını gosterdık
 if(sum>9){
    printf("--hata-- toplam 9 dan kucuk olmalı"); //burada ise toplam 9 adn buyuk cıkarsa uyarı verıo sorunu soyluyo ve programı sonlandırıyor
    return 1;
 }
 if(sum<=9){ //burada sonucun 9 dan kucuk veya esıt olması ıcın sart koyduk


    printf("basarili.\n"); //eger sart uygulanırsa ekranda bu mesaj yazıcak
 }
 else{ //burada eger sart uygulanmazsa ekranda ne yazması gerektıgını soyledık
    printf("--HATA--");
 }

     return 0;
}

