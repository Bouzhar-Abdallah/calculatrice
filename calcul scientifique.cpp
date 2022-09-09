 #include <stdio.h>
 #include <string.h>
 #include <math.h> 
 #include <stdlib.h>
 #include <unistd.h>
 int i,t=0;
  char op;
 void mp(){

	printf("\t\t\t\t\t------------------------------------\n");
	printf("\t\t\t\t\t########### calculatrice ###########\n");
	printf("\t\t\t\t\t------------------------------------\n");
	printf("\n");
	printf("\t\t1) addition");printf("\t\t5) cos");printf("\t\t8) x a la puissance y");
	printf("\n\n");
	printf("\t\t2) soustraction");printf("\t\t6) sin");printf("\t\t9) racine y de x");
	printf("\n\n");
	printf("\t\t3) multiplication");printf("\t7) tan");printf("\t\t10) valeur absolue de x");
	printf("\n\n");
	printf("\t\t4) division");//printf("\t\t\t\t11) addition");
		printf("\n");
	scanf("%c",&op);

fflush(stdin);
 }
 
 float addition(){
 	
 	float a,b,choix;
 	char c;
 	printf("\n *** addition ***\n");
 	printf("\n\n veuillez entrer les chiffres a additioner:\n\n\n");
 	scanf("%f %c %f",&a,&c,&b);
 	printf(" %.2f + %.2f = %.2f\n",a,b,a+b); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%f",&choix);
 fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		addition();
	 }
 	
	 }
 	
 	
 
  float soustraction(){
 	
 	float a,b,choix;
 	char c;
 	printf("\n *** soustraction ***\n");
 	printf("\n\n veuillez entrer les chiffres a soustracter:\n\n\n");
 	scanf("%f %c %f",&a,&c,&b);
 	printf(" %.2f - %.2f = %.2f\n",a,b,a-b); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%f",&choix);
 	if(choix==1){
 		system("CLS");
 		addition();
	 }else t=0;
 	
	 }
  float multiplication(){
 }
  float division(){
 }
 
int main() {
op='j';
	start:

		if(t==0){printf("\n\n veuillez choisir l'operation a effectuer :\n\n");mp();system("CLS");}
	
		else { printf("\n\n entree non valid ! veuillez choisir un choix valid :\n\n");mp();t=0;system("CLS");}
		
					switch(op) {
			case '1':
			    addition();
			    break;
			case '2':
			    soustraction();
			    break;
			case '3':
				printf("\n multiplication \n");
			    multiplication();
			    break;
			case '4':
				printf("\n division \n");
			    division();
			    break;
			  default:
			  	{
			  	system("CLS");
			    t=1;goto start;break;
				  }
 }
 t=0;

 system("CLS");
goto start;
 

    
    return 0;
}









