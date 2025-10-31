#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int mukemmel_sayi(int sayi){
    int toplam = 0 ; 
    for(int i = 1 ; i <= (sayi/2 ) ; i++){
        if(sayi % i == 0 ){
            toplam = toplam + i ; 
        }
    }
    if (toplam == sayi)return 1 ; 
        else return 0 ; 
    
}
int tamkare_sayi(int sayi){
    int kok = sqrt(sayi); 
    if(kok * kok == sayi) return 1 ; 
    else return 0 ; 
}
float ortalama(int adet , char* argliste[]){
    float toplam   = 0.0; 
    int i ; 
    for(i = 1 ; i<adet-1 ; i++){
        toplam = toplam + atoi(argliste[i]); 
    }
    return float(toplam) / (adet-2);

}
int maksimum_deger(int adet , char* argliste[]){
    int enbuyuk = atoi(argliste[1]); 
    
    for(int i = 2 ; i<adet-1; i++){
        if(atoi(argliste[i])> enbuyuk){
            enbuyuk = atoi(argliste[i]);
        }
    }return enbuyuk; 
}

int minimum_deger(int adet , char*argliste[]){
    int enkucuk = atoi(argliste[1]); 
    for(int i = 2 ; i < adet -1 ; i++){
        if(atoi(argliste[i]) < enkucuk){
            enkucuk = atoi(argliste[i]);
        }
    } return enkucuk ; 
} 
void mukemmel(int adet , char* argliste[]){
    for(int i = 1 ; i < adet-1 ; i++){
        if(mukemmel_sayi(atoi(argliste[i]))) printf("%d\n" , atoi(argliste[i])); 
    }

}


void tamkare(int adet , char * argliste[]){
    for(int i = 1 ; i < adet-1 ; i++){
        if(tamkare_sayi(atoi(argliste[i]))) printf("%d\n" , atoi(argliste[i]));
    }
}


float std_sapma(int argc, char* argv[]) {
	float toplam = 0;
	float ort = ortalama(argc, argv);
	for (int i = 1; i < argc - 1; i++) {
		float fark = atoi(argv[i]) - ort;
		toplam += pow(fark, 2);
	}
	float varyans = toplam / (argc - 3);
	return sqrt(varyans);
}


int main(int adet , char* argliste[]){
    if(!strcmp("ort", argliste[adet-1])){
        printf("%f \n" , ortalama(adet , argliste)); 
    }else if( !strcmp("max" , argliste[adet-1])){
        printf("%d\n" , maksimum_deger(adet , argliste));
    }else if( !strcmp("min" , argliste[adet-1])){
        printf("%d\n" ,minimum_deger(adet , argliste));
    }else if( !strcmp("mukemmel" , argliste[adet-1])){
        mukemmel(adet , argliste);
    }else if( !strcmp("tam" , argliste[adet-1])){
        tamkare(adet , argliste);
    }else if( !strcmp("standart_sapma" , argliste[adet-1])){
        printf("%f\n" , std_sapma(adet , argliste));}

}

