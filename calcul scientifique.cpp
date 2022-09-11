 #include <stdio.h>
 #include <string.h>
 #include <math.h> 
 #include <stdlib.h>
 #include <unistd.h>
  int op;
void mp()
{
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
	printf("\t\t4) division");printf("\n");
	scanf(" %d",&op);fflush(stdin);
}
	void addition(){
 	
 	float a,b;
 	int choix;
 	char c;
 	printf("\n *** addition ***\n");
 	printf("\n\n veuillez entrer les chiffres a additioner: ");
 	scanf("%f %c %f",&a,&c,&b);
 	printf("\n %.2f + %.2f = %.2f\n",a,b,a+b); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		addition();
	 }
 	
	 }
	void soustraction(){
 	float a,b;
 	int choix;
 	char c;

 	printf("\n *** soustraction ***\n");
 	printf("\n\n veuillez entrer les chiffres a soustracter:\n\n\n");
 	scanf("%f %c %f",&a,&c,&b);
 	printf(" %.2f - %.2f = %.2f\n",a,b,a-b); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
 	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		soustraction();
	 }
 	
	 }
	void multiplication(){
 	float a,b;
 	int choix;
 	char c;
 	printf("\n *** multiplication ***\n");
 	printf("\n\n veuillez entrer les chiffres a multiplier:\n\n\n");
 	scanf("%f %c %f",&a,&c,&b);
 	printf(" %.2f - %.2f = %.2f\n",a,b,a*b); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
 	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		multiplication();
	 }
 }
	void division(){
 	float a,b;
 	int choix;
 	char c;
 	printf("\n *** division ***\n");
 	printf("\n\n veuillez entrer les chiffres a diviser:\n\n\n");
 	scanf("%f %c %f",&a,&c,&b);
 	printf(" %.2f - %.2f = %.2f\n",a,b,a/b); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
 	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		multiplication();
	 }
 }
 	void cosinus(){
 	double a;
 	int choix;
 	char c;
 	printf("\n *** cosinus ***\n");
 	printf("\n\n veuillez entrer l'angle en radian: ");
 	scanf("%lf",&a);
 	printf("\ncos( %lf ) = %.2lf \n",a,cos(a)); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		cosinus();
	 }
	 }
	void sinus(){
	
 	double a;
 	int choix;
 	char c;
 	printf("\n *** sinus ***\n");
 	printf("\n\n veuillez entrer l'angle en radian: ");
 	scanf("%lf",&a);
 	printf("\nsin( %lf ) = %.2lf \n",a,sin(a)); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		cosinus();
	 }
	 }
	void tang(){
	
 	double a;
 	int choix;
 	char c;
 	printf("\n *** tang ***\n");
 	printf("\n\n veuillez entrer l'angle en radian: ");
 	scanf("%lf",&a);
 	printf("\ntang( %lf ) = %.2lf \n",a,tan(a)); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		cosinus();
	 }
	 }
	void xpy(){
 	float a,b;
 	int choix;
 	char c;

 	printf("\n *** x a la puissance y ***\n");
 	printf("\n\n veuillez entrer x :\n");
 	scanf("%f",&a);
 	printf("veuillez entrer la puissance (y):\n");
 	scanf("%f",&b);
 	printf(" %.2f a la puissance %.2f = %.2f\n",a,b,pow(a,b)); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
 	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		xpy();
	 }
 	
	 }
	void yracinex(){
 	double a,b;
 	int choix;
 	char c;

 	printf("\n *** y eme racine de x ***\n");
 	printf("\n\n veuillez entrer x :\n");
 	scanf("%lf",&a);
 	printf("veuillez entrer l'ordre de la racine (y):\n");
 	scanf("%lf",&b);
 	if(a<0 && ((int)b%2 ==0)){printf("la %.0lfeme racine de %.2lf n'est pas un nombre reele\n",b,a);
	 }
	else {(a<0) ? printf(" la %.0lfeme racine de %.2lf = %lf\n",b,a,-pow(-a,1/b)) : printf(" la %.0lfeme racine de %.2lf = %lf\n",b,a,pow(a,1/b));
	}
 	 
 	
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
 	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		yracinex();
	 }
 	
	 }
	void absolue(){
 	double a;
 	int choix;
 	char c;
 	printf("\n *** valeur absolue ***\n");
 	printf("\n\n veuillez entrer un nombre ");
 	scanf("%lf",&a);
 	printf("\n |%.0lf| = %.0lf \n",a,(a<0) ? -a : a ); 
 	printf("\n\n\n\n\n\n 1) pour effectuer une nouvel operation\n");
 	printf(" any) reteur au menu principale\n");
 	scanf("%d",&choix);
	fflush(stdin);
 	if(choix==1){
 		system("CLS");
 		absolue();
	 } 
	 }
int main() {
	int t=0;
	start:
		if(t==0){printf("\n\n veuillez choisir l'operation a effectuer :\n\n");mp();system("CLS");}
	
		else { printf("\n\n entree non valid ! veuillez choisir un choix valid :\n\n");mp();system("CLS");}
		
					switch(op) {
			case 1 :
			    addition();
			    break;
			case 2 :
			    soustraction();
			    break;
			case 3:
			    multiplication();
			    break;
			case 4:
			    division();
			    break;
			case 5:
				cosinus();
			    break;
			case 6:
				sinus();
			    break;
			case 7:
				tang();
			    break;
			case 8:
				xpy();
			    break;
			case 9:
				yracinex();
			    break;
			case 10 :
				absolue();
			    break;
			  default:
			  	{
			  	system("CLS");
			    t=1;goto start;
				  }
								}op=0;
 t=0;system("CLS");goto start;return 0;
}

