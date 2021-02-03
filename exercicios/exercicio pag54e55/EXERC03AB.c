#include <stdio.h>
//Victor Emanuel Sousa 2021 Lima ig: vic_lima.f.q
int main()
{
	float tempo, vmedia, distancia, litros;

	printf("Informe o tempo da viagem: ");
	scanf("%f", &tempo);
	printf("Informe a velocidade media: ");
	scanf("%f", &vmedia);

	distancia = vmedia * tempo;
	litros = distancia / 12;

	printf("VELOCIDADE MEDIA = %f Km/h \n", vmedia);
    printf("TEMPO GASTO      = %f h \n", tempo);
    printf("DISTANCIA        = %f Km \n", distancia);
    printf("LITROS USADOS    = %f litros \n", litros);
    system("pause");
	return 0;

}
