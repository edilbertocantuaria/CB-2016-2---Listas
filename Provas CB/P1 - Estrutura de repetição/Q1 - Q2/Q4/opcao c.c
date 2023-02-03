void main ()
{
int idade , sexo , classe ;
scanf ("%d %d %d" ,& idade , & sexo , & classe );
printf("classe: %d", classe);
if ( idade > 15)
if ( idade <= 45)
printf ( " Morreu " );
else if ( classe > 1)
if ( sexo == 1)
printf ( " Morreu " );
else printf (" Sobreviveu " );
else printf (" Sobreviveu " );
else if ( classe > 1)
if ( sexo == 1)
printf (" Morreu " );
else printf (" Sobreviveu " );
else printf (" Sobreviveu " );
}
