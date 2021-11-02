   #include <stdio.h>


int primo(int k);

int proxPrimo(int k);

main()
{
    int j, g;
    int numero, i;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    int fatores[numero], k = 0;
    g = numero;
    printf("\n\n\n\n");

    for(i = 2; numero != 1; i = proxPrimo(i)){
        if(numero % i == 0){
            while(numero % i == 0){
                fatores[k] = i;
                numero /= i;
                k++;
            }
        }else{
            continue;
        }
    }

    printf("-----------------------------------------------------------------\n");
    printf("Fatoracao de %d\n", g);
    printf("-----------------------------------------------------------------\n\n");

    for(j = 0; j < k; j++){
        if(j == 0){
            printf("%d * ", fatores[j]);
        }else if(j == k-1){
            printf(" %d.", fatores[j]);
        }else{
            printf(" %d * ", fatores[j]);
        }
    }
    if(primo(g) != 0){
        printf("\n\n-----------------------------------------------------------------\n\n");
    }else{
        printf("\t[PRIMO]\n\n----------------------------------------------------------\n\n");
    }

    return 0;
}

primo(int k)
{
    int div = 0, i = k;

    for(i = 1; i <= k; i++){
        if(k % i == 0){
            div++;
        }
    }

    if(div == 2){
        return 0;
    }else{
        return 1;
    }
}

proxPrimo(int k)
{
    if(primo(k) == 0){
        k++;
    }

    while(primo(k) != 0){
        k++;
    }

    return k;
}