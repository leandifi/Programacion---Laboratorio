void ordenar (int vec[], int tam, int criterio)
{
    int aux;
    for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
                {
                    if(criterio==0 && vec[i]>vec[j])
                        {
                            aux=vec[i];
                            vec[i]=vec[j];
                            vec[j]=aux;
                        }else
                            if(criterio==1 && vec[i]<vec[j])
                            {
                                aux=vec[i];
                                vec[i]=vec[j];
                                vec[j]=aux;
                            }

                }
        }


}

void mostrarVector(int vec[], int tam)
{
    for(int i=0; i<tam; i++)
        {
           printf("%d ", vec[i]);
        }
        printf("\n\n");
}
