# Akıllı Kasa Uygulaması

## Projenin Amacı

Bu projenin amacı, bir ürünün fiyatı ve müşterinin ödediği para miktarını alarak müşteriye verilmesi gereken para üstünü hesaplayan bir akıllı kasa uygulaması geliştirmektir.

Program, para üstünü mümkün olan en az sayıda banknot ve madeni para kullanarak verir.

## Kullanılan Teknoloji

- C Programlama Dili
- Visual Studio Code
- GitHub

Programda `stdio.h` ve `math.h` kütüphanelerinden yararlanılmıştır.

## Programın Çalışma Mantığı

Program kullanıcıdan:

1. Ürün tutarını
2. Ödenen para miktarını

alır.

Ödenen para ile ürün tutarı arasındaki fark hesaplanarak para üstü bulunur.

Para üstü hesaplanırken TL değeri kuruşa çevrilir. Böylece banknot ve madeni para değerleri tam sayı olarak işlenir.

Kullanılan kupürler:

- 200 TL
- 100 TL
- 50 TL
- 20 TL
- 10 TL
- 5 TL
- 1 TL
- 50 kuruş
- 25 kuruş
- 10 kuruş
- 5 kuruş
- 1 kuruş

## Algoritma

Para üstü en büyük kupürden başlanarak hesaplanır.

Örneğin para üstü 130 kuruş ise:

- 1 adet 1 TL
- 1 adet 25 kuruş
- 1 adet 5 kuruş

verilir.

Böylece toplam 3 kupür kullanılmış olur.

Programda bu işlem bir döngü içerisinde gerçekleştirilir. Her kupür için kaç adet verileceği bölme işlemiyle bulunur ve kalan miktar mod alma işlemiyle hesaplanır.

## Kuruş Hesaplama

Ürün ve ödenen para `float` türünde tutulmaktadır.

Para üstü kuruşa çevrilirken:

```c
paraUstuKurus = (int)roundf(paraUstu * 100);
