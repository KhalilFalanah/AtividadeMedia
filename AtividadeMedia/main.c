#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    float nt1,nt2,nt3,freq,media,exame,mediaExame;



    setlocale(LC_ALL, "Portuguese");

    printf("Digite a sua  frequencia: ");
    scanf("%f",&freq);

    if(freq>=0.75)  //CASO ELE TENHA FREQUENCIA...
    {

        printf("Informe as suas notas: ");
        scanf("%f%f%f",&nt1,&nt2,&nt3);

        media = (nt1+nt2+nt3)/3;

        if(media>= 7)  //CASO ELE TENHA NOTA E MEDIA
        {
            printf("Aluno aprovado por Média!!");
        }

        else if(media>=4) //CASO ELE TENHA MEDIA ACIMA DE 4
        {
            printf("Informe a nota do exame: ");
            scanf("%f",&exame);

            mediaExame = media * 0.6 + exame * 0.4;

            if(mediaExame >= 6 ) //CASO A MEDIA DO EXAME SEJA MAIOR OU IGUAL 6
            {
                ("Aluno aprovado por exame");
            }
            else //CASO A MEDIA DO EXAME DELE TENHA SIDO MENOR QUE 6
            {
                printf("Aluno reprovado por exame");
            }
        }
        else{//CASO A MEDIA TENHA SIDO MENOR QUE 4
            printf("Aluno reprovado por média");
        }
    }
    else // CASO ELE NÂO TENHA FREQUENCIA...
    {
        printf("Você foi reprovado por frequencia");

    }

    return 0;
}
