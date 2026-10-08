#include <stdio.h>
#include <math.h>

int main() {

    int devam = 1;

    while (devam == 1) {

        float urunTutari;
        float odenenPara;
        float paraUstu;

        int paraUstuKurus;
        int toplamKupur = 0;

        int kupurler[] = {
            20000, 10000, 5000, 2000, 1000, 500, 100,
            50, 25, 10, 5, 1
        };

        int kupurSayisi[12] = {0};

        printf("       AKILLI KASAYA HOŞGELDİNİZ\n");
        

        printf("Urun tutarini giriniz: ");
        scanf("%f", &urunTutari);

        printf("Odenen parayi giriniz: ");
        scanf("%f", &odenenPara);

        paraUstu = odenenPara - urunTutari;

        paraUstuKurus = (int)roundf(paraUstu * 100);

        printf("\nPara ustu: %.2f TL\n", paraUstu);

        for (int i = 0; i < 12; i++) {

            kupurSayisi[i] = paraUstuKurus / kupurler[i];

            paraUstuKurus = paraUstuKurus % kupurler[i];

            toplamKupur += kupurSayisi[i];
        }

        printf("\nVerilecek kupurler:\n");

        for (int i = 0; i < 12; i++) {

            if (kupurSayisi[i] > 0) {

                if (kupurler[i] >= 100) {
                    printf("%d TL: %d adet\n",
                           kupurler[i] / 100,
                           kupurSayisi[i]);
                }
                else {
                    printf("%d kurus: %d adet\n",
                           kupurler[i],
                           kupurSayisi[i]);
                }
            }
        }

        printf("\nToplam kupur sayisi: %d\n", toplamKupur);

        printf("\nYeni bir islem yapmak ister misiniz?\n");
        printf("1 - Evet\n");
        printf("0 - Hayir\n");
        printf("Seciminiz: ");
        scanf("%d", &devam);
    }

    printf("\nProgram sonlandirildi.\n");

    return 0;
}