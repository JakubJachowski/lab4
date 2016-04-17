#include <stdio.h>
#include <iostream>

using namespace std;

void read(int x);

int zerosOnes(int n);


int main(int argc, char *argv[])
{
	cout<<endl;
	int number=atoi(argv[1]);
	cout<<"Po pomnozeniu ";
	read(number);
	cout<<" przez ";
	read(zerosOnes(number));
	cout<<" otrzymamy ";
	cout<<zerosOnes(number)*number;
	cout<<"\nczyli liczbe skladajaca sie z samych zer i jedynek";
	cout<<endl<<endl;
}

void read(int x)
{
	int tab[7];
	int retardSpotter=0;
	if(x<0)
		retardSpotter++;

	for(int i=0;i<7;i++)
	{
		tab[i]=x%10;
		x/=10;

	}

	if(tab[6]>=1 || retardSpotter==1)
	{
		if(tab[6]==1)
			cout<<"milion ";
		else
		cout<<"podales liczbe spoza zakresu";
	}
	else
		if(tab[0]==0 && tab[1]==0 && tab[2]==0 && tab[3]==0 && tab[4]==0 && tab[5]==0 && tab[6]==0)
			cout<<"zero";
		else
		{
			for(int aux=0;aux<5;aux+=3)
			{
				switch(tab[5-aux])
				{
					case 0: break;
					case 1: cout<<"sto "; break;
					case 2: cout<<"dwiescie "; break;
					case 3: cout<<"trzysta "; break;
					case 4: cout<<"czterysta "; break;
					case 5: cout<<"piecet "; break;
					case 6: cout<<"szescset "; break;
					case 7: cout<<"siedemset "; break;
					case 8: cout<<"osiemset "; break;
					case 9: cout<<"dziewiecset "; break;
					default: break;
				}

				if(tab[4-aux]==1)
					switch(tab[3-aux])
					{
						case 0: cout<<"dziesiec "; break;
						case 1: cout<<"jedenascie "; break;
						case 2: cout<<"dwanascie "; break;
						case 3: cout<<"trzynascie "; break;
						case 4: cout<<"czternascie "; break;
						case 5: cout<<"pietnasce "; break;
						case 6: cout<<"szesnascie "; break;
						case 7: cout<<"siedemnascie "; break;
						case 8: cout<<"osiemnascie "; break;
						case 9: cout<<"dziewietnascie "; break;
						default: break;
					}
					else
					{
						switch(tab[4-aux])
						{
							case 0: break;
							case 2: cout<<"dwadziescia "; break;
							case 3: cout<<"trzydziesci "; break;
							case 4: cout<<"czterdziesci "; break;
							case 5: cout<<"piec"; break;
							case 6: cout<<"szesc"; break;
							case 7: cout<<"siedem"; break;
							case 8: cout<<"osiem"; break;
							case 9: cout<<"dziewiec"; break;
							default: break;
						}
						if(tab[4-aux]>4)
							cout<<"dziesiat ";

						switch(tab[3-aux])
						{
							case 0: break;
							case 1: cout<<"jeden "; break;
							case 2: cout<<"dwa "; break;
							case 3: cout<<"trzy "; break;
							case 4: cout<<"cztery "; break;
							case 5: cout<<"piec "; break;
							case 6: cout<<"szesc "; break;
							case 7: cout<<"siedem "; break;
							case 8: cout<<"osiem "; break;
							case 9: cout<<"dziewiec "; break;
							default: break;
						}
					}

					if(tab[6]==0 && tab[5]==0 && tab[4]==0 && tab[3]==1 && aux==0)
						cout<<"tysiac ";
					else
						if(tab[4]!=1 && tab[3]<5 &&tab[3]!=0 && aux==0)
							cout<<"tysiace ";
						else
							if(aux==0 && tab[6]==0 && (tab[5]!=0 || tab[4]!=0 || tab[3]!=0))
								cout<<"tysiecy ";
			}
		}
}

int zerosOnes(int n)
{
	int k=1, aux=n;

	while(aux>0)
	{
		if((aux)%10==0 || (aux)%10==1)
			aux=aux/10;
		else
		{
			k++;
			aux=n*k;
		}

	}
	return k;
}