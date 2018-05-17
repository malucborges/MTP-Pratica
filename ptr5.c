int main()
{
	int vetor[1000], i, num, a = 0;
	unsigned char *p, *q, *r;
	srand(time(0));
	printf("\nInsira um numero entre 0 e 255: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++)
		vetor[i] = rand()%num+1;
	p = (unsigned char*) &vetor;
	q = (unsigned char*) &vetor[0];
	printf("\nOs bits nos seguintes enderecos sao iguais a %d:", num);
	for(i = 0; i < sizeof(vetor); i++)
	{
		if(*(p+i) == num)
		{
			a++;
			printf("\n0x%p", &vetor[i]);
		}
	}
	if(i != sizeof(vetor))
		i++;
	r = (unsigned char*)&vetor[i];
	printf("\n\nEsses %d bytes estao localizados entre o endereco %p ate o endereco %p na memoria.", a, num, &q, &r);
	return 0;
}
