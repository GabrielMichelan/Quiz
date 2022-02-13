#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

using namespace std;
void pergunta2();
void pergunta3();
void pergunta4();
void pergunta5();
void pergunta6();
void pergunta7();
void pergunta8();
void pergunta9();
void pergunta10();
void pergunta11();
void pergunta12();
void pergunta13();
void pergunta14();
void pergunta15();
void pergunta16();
void pergunta17();
void pergunta18();
void pergunta19();
void pergunta20();
void pergunta21();
void pergunta22();
void pergunta23();
void pergunta24();
void pergunta25();
void pergunta26();
void pergunta27();
void pergunta28();
void pergunta29();
void pergunta30();
void fim();
void campeao();
int vida=3,ajudarestante=2,opcao;
float premio,soma[29];

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<< "________BEM-VINDO AO QUIZ DO FUTEBOL______"<<endl<<endl;
	cout<<"__________Orientações do jogo_____________"<<endl;
	cout<<"1- O jogador tem somente 3 vidas durante o jogo"<<endl;
	cout<<"2- O jogador tem direito de pedir ajuda aos universitários,isso fará com que elimine uma alternativa falsa da questão"<<endl;
	cout<<"3- Cada resposta certa o jogador ganha 1000R$ em prêmio"<<endl<<endl;
	cout<<"*****_______________BOA SORTE________________*****"<<endl;
				
				system("pause");
				system("cls");
	

	
	if(vida<=3&& vida>=1&&ajudarestante<=2&&ajudarestante>=1){
	
		
	cout<<"1- Em qual ano foi fundado o time Palmeiras ? "<< endl;
	cout<<"\t(1)- 1914 "<<endl;
	cout<<"\t(2)- 1820 "<<endl;
	cout<<"\t(3)- 1895 "<<endl;
	cout<<"\t(4)- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==1){
		soma[0]=1000;
		cout<<" VOCÊ ACERTOU!!!"<<endl;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta2();
		
		
		
	}
	else if(opcao==4){
		
		ajudarestante=ajudarestante-1;
		
			cout<<"1- Em qual ano foi fundado o time Palmeiras ? "<< endl;
	cout<<"\t(1)- 1914 "<<endl;
	cout<<"\t(2)- 1820 "<<endl;
	
	cin>>opcao;
	
	
	 if(opcao==1){
		cout<<"VOCÊ ACERTOU ";
		soma[0]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta2();
		}
		if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[0]=0;
		vida=vida-1;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta2();
	}
		
	}
	else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[0]=0;
		vida=vida-1;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta2();
		
	} cout<<"\n\n";
}

	return 0;
}
void pergunta2(){
	if(vida<=3&& vida>=1&&ajudarestante<=2&&ajudarestante>=1){
	
	
		cout<<"2- Quem é considerado o rei do futebol? " << endl;
	cout<<"\t1- Pelé "<< endl;
	cout<<"\t2- Rivaldo "<<endl;
	cout<<"\t3- Maradona "<< endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==1){
		cout<<"VOCÊ ACERTOU ";
		soma[1]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta3();
	}
	else if(opcao==4){
		if(ajudarestante==0){
	
		fim();
	}
	
		cout<<"2- Quem é considerado o rei do futebol? " << endl;
	cout<<"\t1- Pelé "<< endl;
	cout<<"\t2- Rivaldo "<<endl;
	cin>>opcao;
		if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[1]=0;
		vida=vida-1;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta3();
		}
	 if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[1]=2000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta3();
	}
	}
	else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[1]=0;
		vida=vida-1;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta3();
	}
		
	
}
}

void pergunta3(){
	if(vida<=3&& vida>=1 && ajudarestante<=2&&ajudarestante>=1){
	
	
	cout<<"3- Quantas copas do mundo o Brasil obteve ? "<<endl;
	cout<<"\t1- 1 Copa "<<endl;
	cout<<"\t2- 5 Copas "<<endl;
	cout<<"\t3- 6 Copas"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[2]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta4();
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
			if(ajudarestante==0){
	
		fim();
	}
	cout<<"\n\n";
		
		cout<<"3- Quantas copas do mundo o Brasil obteve ? "<<endl;
	cout<<"\t1- 1 Copa "<<endl;
	cout<<"\t2- 5 Copas "<<endl;
	cin>>opcao;
	
	if(opcao!=2)
	{
		cout<<"VOCÊ ERROU";
		soma[2]=0;
		vida=vida-1;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta4();}
	
	
	if(opcao==2){
			cout<<"VOCÊ ACERTOU";
		soma[2]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta4();
	}
	}
	else if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[2]=0;
		vida=vida-1;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta4();
		if(vida==0){
			fim();
			
		}
		
	}
	
			

}
}
void pergunta4(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"4- Qual a seleção que mais ganhou copa do mundo ? "<<endl;
	cout<<"\t1- Inglaterra "<<endl;
	cout<<"\t2- França "<<endl;
	cout<<"\t3- Pedir ajuda aos universitários"<<endl;
	cout<<"\t4- Brasil "<<endl;
	cin>>opcao;
	if(opcao==4){
		cout<<"VOCÊ ACERTOU";
		soma[3]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta5();
		
	}
	else if(opcao==3){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();
	}
	cout<<"\n\n";
		cout<<"4- Qual a seleção que mais ganhou copa do mundo ? "<<endl;
	cout<<"\t1- Inglaterra "<<endl;
	cout<<"\t4- Brasil "<<endl;
	cin>>opcao;
	if(opcao!=4){
		cout<<"VOCÊ ERROU";
		vida=vida-1;
		soma[3]=0;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta5();
			if(vida==0){
			fim();
		}
	}
	if(opcao==4){
		cout<<"VOCÊ ACERTOU";
		soma[3]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta5();
	}
	
	}
	else if(opcao!=4){
		cout<<"VOCÊ ERROU";
		soma[3]=0;
		vida=vida-1;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta5();
		if(vida==0){
			fim();
		}
	}
	
	

}
}
void pergunta5(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	
	cout<<"5- Em qual país foi inventado o futebol?"<<endl;
	cout<<"\t1- Brasil "<<endl;
	cout<<"\t2- México "<<endl;
	cout<<"\t3- Inglaterra "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários"<<endl;
	cin>>opcao;
	if(opcao==3){
		cout<<"VOCÊ ACERTOU";
		soma[4]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta6();
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();
		cout<<"\n\n";
	cout<<"5- Em qual país foi inventado o futebol ?"<<endl;
	cout<<"\t1- Brasil "<<endl;
	cout<<"\t3- Inglaterra "<<endl;
	cin>>opcao;
	if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[4]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta6();
	}
	 if(opcao=1){
		cout<<"VOCÊ ACERTOU";
		soma[4]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta6();
		
	}
}
}
	else if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[4]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta6();
		
	}
}
}


 void pergunta6(){
 	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
 	cout<<"6- Qual time revelou o jogador Neymar? "<<endl;
	cout<<"\t1- Santos "<<endl;
	cout<<"\t2- Palmeiras"<<endl;
	cout<<"\t3- Internacional "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários"<<endl;
	cin>>opcao;
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[5]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta7();
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();
		cout<<"\n\n";
	cout<<"6- Qual time revelou o jogador Neymar? "<<endl;
	cout<<"\t1- Santos "<<endl;
	cout<<"\t2- Palmeiras"<<endl;
	cin>>opcao;
	if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[5]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta7();
	}
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[5]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta7();
	}
	}
}
	else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[5]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta7();
	}



}
}
void pergunta7(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	
	cout<<"7- Qual é o jogador que mais vezes ganhou o prêmio de melhor do mundo ?"<<endl;
	cout<<"\t1- Messi"<<endl;
	cout<<"\t2- Cristiano Ronaldo "<<endl;
	cout<<"\t3- Neymar "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários"<<endl;
	cin>>opcao;
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[6]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta8();
}
	else if(opcao==4){
	
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"Qual é o jogador que mais vezes ganhou o prêmio de melhor do mundo ?"<<endl;
	cout<<"\t1- Messi"<<endl;
	cout<<"\t2- Cristiano Ronaldo "<<endl;
	cin>>opcao;
	if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[6]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}cout<<"\n"<<system("pause");
		system("cls");
		pergunta8();
}
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[6]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta8();
}
}
else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[6]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta8();
	}
}
}
void pergunta8(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
		cout<<"8- Em que ano o Brasil ganhou sua primeira copa do mundo ? "<<endl;
		cout<<"\t1- 1950 "<<endl;
		cout<<"\t2- 1954 "<<endl;
		cout<<"\t3- 1958 "<<endl;
		cout<<"\t4 -Pedir ajuda aos universitários "<<endl;
		cin>>opcao;
		if(opcao==3){
			cout<<"VOCÊ ACERTOU";
			soma[7]=1000;
	    	cout<<"\n"<<system("pause");
		    system("cls");
			pergunta9();
		}
		else if (opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"8- Em que ano o Brasil ganhou sua primeira copa do mundo ? "<<endl;
		cout<<"\t2- 1954 "<<endl;
		cout<<"\t3- 1958 "<<endl;
		cin>>opcao;
		if(opcao==3){
			cout<<"VOCÊ ACERTOU";
			soma[7]=1000;
	    	cout<<"\n"<<system("pause");
		    system("cls");
			pergunta9();
		
		}
		if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[7]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta9();
			
		}
	}
	else if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[7]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta9();
	}	
	
}
}
void pergunta9(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
		cout<<"9- Quem é o maior  rival do Palmeiras? "<<endl;
		cout<<"\t1- Santos "<<endl;
		cout<<"\t2- Internacional"<<endl;
		cout<<"\t3- Corinthians "<<endl;
		cout<<"\t4- Pedir ajuda aos universitários"<<endl;
		cin>>opcao;
		if(opcao==3){
			cout<<"VOCÊ ACERTOU";
			soma[8]=1000;
	    	cout<<"\n"<<system("pause");
		    system("cls");
			pergunta10();
		}
			else if (opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"9- Quem é o maior  rival do Palmeiras? "<<endl;
		cout<<"\t1- Santos "<<endl;
		cout<<"\t3- Palmeiras "<<endl;
		cin>>opcao;
		if(opcao==3){
			cout<<"VOCÊ ACERTOU";
			soma[8]=1000;
	    	cout<<"\n"<<system("pause");
		    system("cls");
			pergunta10();
		
		}
		if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[7]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta10();
}
}
		else if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[8]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta10();
	}			
	
}
}
void pergunta10(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
		cout<<"10- A equipe Internacional pertence a qual estado do Brasil ? "<<endl;
		cout<<"\t1- RJ "<<endl;
		cout<<"\t2- RS "<<endl;
		cout<<"\t3 - SP "<<endl;
		cout<<"\t4- Pedir ajuda aos universitários"<<endl;
		cin>>opcao;
		if(opcao==2){
			cout<<"VOCÊ ACERTOU";
			soma[9]=1000;
	    	cout<<"\n"<<system("pause");
		    system("cls");
			pergunta11();
		}
		else if(opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"10- A equipe Internacional pertence a qual estado do Brasil ? "<<endl;
		cout<<"\t1- RJ "<<endl;
		cout<<"\t2- RS "<<endl;
		cin>>opcao;
		if(opcao==2){
			cout<<"VOCÊ ACERTOU";
			soma[9]=1000;
	    	cout<<"\n"<<system("pause");
		    system("cls");
			pergunta11();
		}
		if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[9]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta11();	
		}
		}
		else if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[9]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta11();
		}
	}
	
	
}
void pergunta11(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"Em 2018 o Brasil foi eliminado nas quartas de finais da copa do mundo para Belgica,qual foi o placar do jogo? "<<endl;
	cout<<"\t1- 2x1"<<endl;
	cout<<"\t2- 3x1"<<endl;
	cout<<"\t3- 2x0"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários"<<endl;
	cin>>opcao;
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[10]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta12();		
	}
	else if(opcao==4){
	ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"Em 2018 o Brasil foi eliminado nas quartas de finais da copa do mundo para Belgica,qual foi o placar do jogo? "<<endl;
	cout<<"\t1- 2x1"<<endl;
	cout<<"\t2- 3x1"<<endl;
	cin>>opcao;
	if(opcao==1){
	cout<<"VOCÊ ACERTOU";
		soma[10]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta12();	
	}	
	if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[10]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta12();
	}
	}
	else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[10]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta12();
	}
	
}
}
void pergunta12(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"12- Onde foi a sede da copa do mundo de 2018? "<<endl;
	cout<<"\t1- Espanha "<<endl;
	cout<<"\t2- Brasil"<<endl;
	cout<<"\t3- Russia "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==3){
		cout<<"VOCÊ ACERTOU";
		soma[11]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta13();
	}
	else if (opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"12- Onde foi a sede da copa do mundo de 2018? "<<endl;
	cout<<"\t1- Espanha "<<endl;
	cout<<"\t3- Russia "<<endl;
	cin>>opcao;
	if(opcao==3){
		cout<<"VOCÊ ACERTOU";
		soma[11]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta13();
	}
	if(opcao!=3){
	cout<<"VOCÊ ERROU";
		soma[11]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta13();	
	}
	}
	else if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[11]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta13();
	}
	
}
}
void pergunta13(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"13 - Qual é a competição mais importante da Europa atualmente ? "<<endl;
	cout<<"\t1- Champions League "<<endl;
	cout<<"\t2- Premier League "<<endl;
	cout<<"\t3- Super Liga "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[12]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta14();
	}	else if (opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"13 - Qual é a competição mais importante da Europa atualmente ? "<<endl;
	cout<<"\t1- Champions League "<<endl;
	cout<<"\t2- Premier League "<<endl;
	cin>>opcao;
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[12]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta14();
	}
	if(opcao!=1){
	cout<<"VOCÊ ERROU";
		soma[12]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta14();	
	}
}
	else if (opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[12]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta14();
	}
	

}
}
void pergunta14(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"14- Quem é o maior campeão da Champions League ?"<<endl;
	cout<<"\t1- Milan "<<endl;
	cout<<"\t2- Barcelona "<<endl;
	cout<<"\t3- Real Madrid "<<endl;
	cout<<"\t4- Pedir ajuda aos universiáios "<<endl;
	cin>>opcao;
	if(opcao==3){
		cout<<"VOCÊ ACERTOU";
		soma[13]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta15();
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"14- Quem é o maior campeão da Champions League ?"<<endl;
	cout<<"\t1- Milan "<<endl;
	cout<<"\t3- Real Madrid "<<endl;
		cin>>opcao;
		if(opcao==3){
		cout<<"VOCÊ ACERTOU";
		soma[13]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta15();	
		}
		if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[13]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta15();
	}
}	else if(opcao!=3){
	cout<<"VOCÊ ERROU";
		soma[13]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta15();
}	
}
}
void pergunta15(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"15- Qual é o nome do estádio do Barcelona F.C ? "<<endl;
	cout<<"\t1- Allianz Parque "<<endl;
	cout<<"\t2- Camp Nou "<<endl;
	cout<<"\t3- Santiago Bernabeu "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[14]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta16();
	}
	else if(opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"15- Qual é o nome do estádio do Barcelona F.C ? "<<endl;
	cout<<"\t1- Allianz Parque "<<endl;
	cout<<"\t2- Camp Nou "<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[14]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta16();
	}if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[14]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta16();
		
	}
		
	}else if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[14]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta16();
	}
	
	
}
	
	
}
void pergunta16(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"16- Qual a nacionalidade do jogador Messi "<<endl;
	cout<<"\t1- Brasileiro "<<endl;
	cout<<"\t2- Argentino "<<endl;
	cout<<"\t3- Inglês "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários"<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[15]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta17();
	} 
	else if(opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"16- Qual a nacionalidade do jogador Messi "<<endl;
	cout<<"\t1- Brasileiro "<<endl;
	cout<<"\t2- Argentino "<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[15]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta17();
	}if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[15]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta17();
		
	}
	}else if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[15]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta17();
		
	}
}
}
void pergunta17(){
if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"17- Quem é o jogador mais jovem a ganhar uma copa do mundo ?"<<endl;
	cout<<"\t1- Pelé "<<endl;
	cout<<"\t2- Ronaldinho"<<endl;
	cout<<"\t3- Mbappé "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[16]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta18();
	}
	else if (opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"17- Quem é o jogador mais jovem a ganhar uma copa do mundo ?"<<endl;
	cout<<"\t1- Pelé "<<endl;
	cout<<"\t2- Ronaldinho"<<endl;
	cin>>opcao;
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[16]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta18();
	}if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[16]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta18();
	}
	}else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[16]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta18();
	}


	
}
}
void pergunta18(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"18- Qual é o atual marca patrocinadora futebolística do jogador Neymar ?"<<endl;
	cout<<"\t1- Pulma "<<endl;
	cout<<"\t2- Adidas "<<endl;
	cout<<"\t3- Nike"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==1){
	cout<<"VOCÊ ACERTOU";
		soma[17]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta19();	
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"18- Qual é o atual marca patrocinadora futebolística do jogador Neymar ?"<<endl;
	cout<<"\t1- Pulma "<<endl;
	cout<<"\t2- Adidas "<<endl;
	cin>>opcao;
	if(opcao==1){
	cout<<"VOCÊ ACERTOU";
		soma[17]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta19();	
	}if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[17]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta19();
	}
	}else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[17]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta19();
	}
}
}
void pergunta19(){
if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"19- Qual foi o título mais importante conquistado pela seleção brasileira no ano de 2016 "<<endl;
	cout<<"\t1- Copa do Mundo"<<endl;
	cout<<"\t2- Olimpiadas "<<endl;
	cout<<"\t3- Copa América"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[18]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta20();	
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"19- Qual foi o título mais importante conquistado pela seleção brasileira no ano de 2016 "<<endl;
		cout<<"\t1- Copa do Mundo"<<endl;
		cout<<"\t2- Olimpiadas "<<endl;
		cin>>opcao;
		if(opcao==1){
				cout<<"VOCÊ ACERTOU";
		soma[18]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta20();
		}if(opcao!=2){
			cout<<"VOCÊ ERROU";
		soma[18]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta20();
		}
	}
	
	else if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[18]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta20();
}
}
}
void pergunta20(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"20- Quem é o maior artilheiro da seleção brasileira? "<<endl;
	cout<<"\t1- Neymar"<<endl;
	cout<<"\t2- Pelé "<<endl;
	cout<<"\t3- Rivaldo"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[19]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta21();	
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"20- Quem é o maior artilheiro da seleção brasileira? "<<endl;
		cout<<"\t1- Pelé"<<endl;
		cout<<"\t2- Neymar "<<endl;
		cin>>opcao;
		if(opcao==1){
				cout<<"VOCÊ ACERTOU";
		soma[19]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta21();
		}if(opcao!=1){
			cout<<"VOCÊ ERROU";
		soma[19]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta21();
		}
	}
	
	else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[19]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta21();
}
}
}
void pergunta21(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"21- Qual foi o título mais importante conquistado pela seleção brasileira no ano de 2002 "<<endl;
	cout<<"\t1- Olimpiadas "<<endl;
	cout<<"\t2- Copa do Mundo "<<endl;
	cout<<"\t3- Copa América"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[20]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta22();	
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"21- Qual foi o título mais importante conquistado pela seleção brasileira no ano de 2002"<<endl;
		cout<<"\t1- Olimpiadas "<<endl;
		cout<<"\t2- Copa do Mundo "<<endl;
		cin>>opcao;
		if(opcao==1){
				cout<<"VOCÊ ACERTOU";
		soma[20]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta22();
		}if(opcao!=2){
			cout<<"VOCÊ ERROU";
		soma[20]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta22();
		}
	}
	
	else if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[20]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta22();
}
}
}
void pergunta22(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"22- Em que ano o Brasil levou a goleada de 7x1 ? "<<endl;
	cout<<"\t1- 2014"<<endl;
	cout<<"\t2- 2016"<<endl;
	cout<<"\t3- 2006"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==1){
				cout<<"VOCÊ ACERTOU";
		soma[21]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta23();
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"22- Em que ano o Brasil levou a goleada de 7x1 ? "<<endl;
	cout<<"\t1- 2014"<<endl;
	cout<<"\t2- 2016"<<endl;
		if(opcao==1){
	cout<<"VOCÊ ACERTOU";
		soma[21]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta23();	
	}	if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[21]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta23();
	}
	}else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[21]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta23();
	}
	

}
}
void pergunta23(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"23- Qual o time com mais títulos internacionais do mundo"<<endl;
	cout<<"\t1- Barcelona"<<endl;
	cout<<"\t2- Milan"<<endl;
	cout<<"\t3- São Paulo"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários"<<endl;
	cin>>opcao;
	if(opcao==2){
		cout<<"VOCÊ ACERTOU";
		soma[22]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta24();	
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"23- Qual o time com mais títulos internacionais do mundo"<<endl;
	cout<<"\t1-Barcelona"<<endl;
	cout<<"\t2-Milan"<<endl;
		cin>>opcao;
		if(opcao==1){
				cout<<"VOCÊ ACERTOU";
		soma[22]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta24();
		}if(opcao!=2){
			cout<<"VOCÊ ERROU";
		soma[22]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta24();
		}
	}
	
	else if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[22]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta24();
}	
}
}
void pergunta24(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"24- Neymar ganhou o prêmio puskas jogando por qual equipe?"<<endl;
	cout<<"\t1- PSG"<<endl;
	cout<<"\t2- Barcelona"<<endl;
	cout<<"\t3- Santos"<<endl;
	cout<<"\t4 - Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==3){
	
	cout<<"VOCÊ ACERTOU";
		soma[23]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta25();}
	
	else if(opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"24- Neymar ganhou o prêmio puskas jogando por qual equipe?"<<endl;
	cout<<"\t1- PSG"<<endl;
	cout<<"\t3- Santos"<<endl;
	cin>>opcao;
	if(opcao==3){
		cout<<"VOCÊ ACERTOU";
		soma[23]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta25();
	}if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[23]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta25();
		
	}
		
	}else if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[23]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta25();
	}
	
	
	
}
}

void pergunta25(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"25- Qual seleção abaixo nunca foi campeã mundial ?"<<endl;
	cout<<"\t1- Espanha"<<endl;
	cout<<"\t2- Uruguai "<<endl;
	cout<<"\t3- Portugual"<<endl;
	cout<<"\t4- Pedir ajuda aos universitários"<<endl;
	cin>>opcao;
	if(opcao==3){
	
	cout<<"VOCÊ ACERTOU";
		soma[24]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta26();}
	
	else if(opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"25- Qual seleção abaixo nunca foi campeã mundial ?"<<endl;
	cout<<"\t1- Espanha"<<endl;
	cout<<"\t3- Portugual"<<endl;
	cin>>opcao;
	if(opcao==3){
		cout<<"VOCÊ ACERTOU";
		soma[24]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta26();
	}if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[24]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta26();
		
	}
		
	}else if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[24]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta26();
	}
	
	

}
}
void pergunta26(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"26- Pep Guardiola é treinador de qual equipe europeia ?"<<endl;
	cout<<"\t1- Manchester City"<<endl;
	cout<<"\t2- Barcelona "<<endl;
	cout<<"\t3- Milan "<<endl;
	cout<<"\t4- Pedir ajuda aos universitários "<<endl;
	cin>>opcao;
	if(opcao==1){
				cout<<"VOCÊ ACERTOU";
		soma[25]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta27();
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"26- Pep Guardiola é treinador de qual equipe europeia ?"<<endl;
	cout<<"\t1- Manchester City"<<endl;
	cout<<"\t2- Barcelona "<<endl;
	cin>>opcao;
		if(opcao==1){
	cout<<"VOCÊ ACERTOU";
		soma[25]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta27();	
	}	if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[25]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta23();
	}
	}else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[25]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta27();
	}
	

	
	
	
	
}
	
}
void pergunta27(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
	cout<<"27- Quem foi o melhor jogador do mundo de 2020 "<<endl;
	cout<<"\t1- Lewandoviski"<<endl;
	cout<<"\t2- Neymar"<<endl;
	cout<<"\t3- Messi"<<endl;
	cin>>opcao;
	if(opcao==1){
				cout<<"VOCÊ ACERTOU";
		soma[26]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta28();
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"27- Quem foi o melhor jogador do mundo de 2020 "<<endl;
	cout<<"\t1- Lewandoviski"<<endl;
	cout<<"\t2- Neymar"<<endl;
	cin>>opcao;
		if(opcao==1){
	cout<<"VOCÊ ACERTOU";
		soma[26]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta28();	
	}	if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[26]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta28();
	}
	}else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[26]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta28();
	}
	

	
}
}
void pergunta28(){
	if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
		cout<<"28- Qual time foi o ultimo campeão mundial brasileiro? "<<endl;
		cout<<"\t1 Santos"<<endl;
		cout<<"\t2- Palmeiras"<<endl;
		cout<<"\t3- Corinthians"<<endl;
		cout<<"\t4- Pedir ajuda aos universitários "<<endl;
		cin>>opcao;
			if(opcao==3){
	
	cout<<"VOCÊ ACERTOU";
		soma[27]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta29();}
	
	else if(opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"28- Qual time foi o ultimo campeão mundial brasileiro? "<<endl;
		cout<<"\t1 Santos"<<endl;
		cout<<"\t3- Corinthians"<<endl;
		cin>>opcao;
	if(opcao==3){
		cout<<"VOCÊ ACERTOU";
		soma[27]=1000;
	   	cout<<"\n"<<system("pause");
	    system("cls");
		pergunta29();
	}if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[27]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta29();
		
	}
		
	}else if(opcao!=3){
		cout<<"VOCÊ ERROU";
		soma[27]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		system("pause");
		system("cls");
		pergunta25();
	}
	
}
}
void pergunta29(){
		if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
		cout<<"29- Qual time foi campeão brasileiro de 2020 ? "<<endl;
		cout<<"\t1- Palmeiras"<<endl;
		cout<<"\t2- Flamengo"<<endl;
		cout<<"\t3- São Paulo"<<endl;
		cout<<"\t4- Pedir ajuda aos universitários "<<endl;
		cin>>opcao;	
		if(opcao==2){
			cout<<"VOCÊ ACERTOU";
			soma[28]=1000;
	    	cout<<"\n"<<system("pause");
		    system("cls");
			pergunta30();
		}
		else if(opcao==4){
			ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
		cout<<"29- Qual time foi campeão brasileiro de 2020 ? "<<endl;
		cout<<"\t1- Palmeiras"<<endl;
		cout<<"\t2- Flamengo"<<endl;
		cin>>opcao;
		if(opcao==2){
			cout<<"VOCÊ ACERTOU";
			soma[28]=1000;
	    	cout<<"\n"<<system("pause");
		    system("cls");
			pergunta30();
		}
		if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[28]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta30();	
		}
		}
		else if(opcao!=2){
		cout<<"VOCÊ ERROU";
		soma[28]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		cout<<"\n"<<system("pause");
		system("cls");
		pergunta30();
		}	
			
			
			
			
			
}



}
void pergunta30(){
		if((vida<=3&& vida>=1)&&(ajudarestante<=2&&ajudarestante>=1)){
			cout<<"30- Qual equipe abaixo pertence a Inglaterra ?"<<endl;
			cout<<"\t1- Liverpool"<<endl;
			cout<<"\t2- Atlético de Madrid"<<endl;
			cout<<"\t3- Juventus "<<endl;
			cout<<"\t4- Pedir ajuda aos universitários "<<endl;
			cin>>opcao;
			if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[29]=1000;
		cout<<"\n"<<system("pause");
		system("cls");
		campeao();
	}
	else if(opcao==4){
		ajudarestante=ajudarestante-1;
		if(ajudarestante=0){
		fim();}
		cout<<"\n\n";
	cout<<"\t1- Liverpool"<<endl;
	cout<<"\t2- Atlético de Madrid"<<endl;
	cin>>opcao;
	if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[29]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		system("pause");
		system("cls");
		fim();
	}
	if(opcao==1){
		cout<<"VOCÊ ACERTOU";
		soma[29]=1000;
		system("pause");
		system("cls");
		campeao();
	}
	
}
	else if(opcao!=1){
		cout<<"VOCÊ ERROU";
		soma[29]=0;
		vida=vida-1;
		if(vida==0){
			fim();
		}
		system("pause");
		system("cls");
		fim();
	}



			
}
}
void fim(){
	if(ajudarestante==0){
	
	cout<<"VOCÊ SÓ TEM DIREITO HÁ 2 AJUDAS UNIVERSITÁRIAS"<<endl;
	cout<<"FIM DO JOGO!!!! :( "<<endl;
	premio=soma[0]+soma[1]+soma[2]+soma[3]+soma[4]+soma[5]+soma[6]+soma[7]+soma[8]+soma[9]+soma[10]+soma[11]+soma[12]+soma[13]+soma[14]+soma[15]+soma[16]+soma[17]+soma[18]+soma[19]+soma[20]+soma[21]+soma[22]+soma[23]+soma[24]+soma[25]+soma[26]+soma[27]+soma[28]+soma[29];
	cout<<"Seu prêmio é de : " << premio<<" R$ "<<endl;
	cout<<"Deseja jogar novamente ? "<<endl;
	cout<<"\t1- SIM"<<endl;
	cout<<"\t2- NÃO"<<endl;
	cin>>opcao;
	system("cls");
	 if(opcao==1){
		main();
	}
	 if(opcao==2){
		cout<<"JOGO ENCERRADO";
	}
	
	
	}
	if(vida==0){
		cout<<"\n ACABARAM SUAS VIDAS"<<endl;
		cout<<"FIM DO JOGO :( \n";
		premio=soma[0]+soma[1]+soma[2]+soma[3]+soma[4]+soma[5]+soma[6]+soma[7]+soma[8]+soma[9]+soma[10]+soma[11]+soma[12]+soma[13]+soma[14]+soma[15]+soma[16]+soma[17]+soma[18]+soma[19]+soma[20]+soma[21]+soma[22]+soma[23]+soma[24]+soma[25]+soma[26]+soma[27]+soma[28]+soma[29];
	cout<<"Seu prêmio é de : " << premio<<" R$ "<<endl;
	cout<<"Deseja jogar novamente ? "<<endl;
	cout<<"\t1- SIM"<<endl;
	cout<<"\t2- NÃO"<<endl;
	cin>>opcao;
	system("cls");
	 if(opcao==1){
		main();
	}
	 if(opcao==2){
		cout<<"JOGO ENCERRADO";
	}
	
		
	}
}
void campeao(){
	premio=soma[0]+soma[1]+soma[2]+soma[3]+soma[4]+soma[5]+soma[6]+soma[7]+soma[8]+soma[9]+soma[10]+soma[11]+soma[12]+soma[13]+soma[14]+soma[15]+soma[16]+soma[17]+soma[18]+soma[19]+soma[20]+soma[21]+soma[22]+soma[23]+soma[24]+soma[25]+soma[26]+soma[27]+soma[28]+soma[29];
	cout<<"PARABÉNS VOCÊ TERMINOU O JOGO!!!! :)"<<endl;
	cout<<"Seu prêmio é de : "<<premio<<" R$ "<<endl<<endl;
	cout<<"Deseja jogar novamente ? "<<endl;
	cout<<"\t1- SIM"<<endl;
	cout<<"\t2- NÃO"<<endl;
	cin>>opcao;
	if(opcao==1){
		main();
	}
	else{
		cout<<"\n JOGO ENCERRADO";
	}
	
	
}

