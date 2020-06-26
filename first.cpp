#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
int hatayibas(int hata){ // hata kodu
	printf("Hata Kodu %d",hata);
}

void menu(){ // menu ýcýn fonksýyon. 
  printf("******   MENU   ******\n");
  printf(" -1.ARAC SATIN ALMA \n");
  printf(" -2.ARAC KIRALAMA \n");		
  printf(" -3.EKO ARAC\n"); 		
  printf(" -4.YORUM BIRAKIN\n");
  printf(" -5.CIKIS\n");
  
	
	
}

struct araclar{ // satýlýk  araclar ýcýn struct
	int  aracm1;// aracýn modeli
	float aracm;// aracýn motoru
	int  aracb;// aracýn beygýrý
	float aracf;//aracýn fýyatý
	char kasat[20];//kasa tipi
		   
}RENAULTCLIO,FIATEGEA,KIARIO,CITROENC3,AUDIA3,TOYOTAYARIS;


struct karaclar{ //kýralýk araclar ýcýn struct
	int lttutari; //depo dolum tutari
    int  tutar; // kýralama bedeli
    int model;    //arac modelý
    char kasatip[20]; //kasa týpý 
	char vitesd[20];  // výtes durumu
	
}VOLKSWAGENPOLO,OPELASTRA,PEUGEOT508,MAZDAMX5,MINICCOP,SUZUKISWIFT;



int main(){
	int secim,secim2;
    int s1,s2,s3,s4,s5,s6;
    int hak,hak2;
	int gunsayisi;
	int butce,butce2;
	int ayliktutar;
	int basadon;
	char yorum[300];	
	float saracdizisi[4]={50.000,109.000,110.000,65.000};

    int x,yd;
		
  printf("********   GALERIAYA HOS GELDINIZ   ********\n\n\n");
  printf("   ***            ***\n ");
  basadon:
  menu();
  printf("Lutfen menuden bir islem seciniz:");
  scanf("%d",&secim);
  printf("\n\n");
  
  switch(secim){
  	  	
		
		case 1: printf("     *********       SATILIK ARACLAR      ********* \n");
  	  		
			 
			 //1.araba
			 struct araclar RENAULCLIO;
           	 printf("1.RENAULT CLIO ->>>>> ");
  		     RENAULTCLIO.aracm1=2020;
  		     RENAULTCLIO.aracm=1.5;
  		     RENAULTCLIO.aracb=90;
  		     RENAULTCLIO.aracf=110.000;
  		     strcpy(RENAULTCLIO.kasat,"Kasa Tipi:Hatchback");
			 printf("%d model RENAULT CLIO/%.3f motor/%d beygir/%.3f tl/%s\n ",RENAULTCLIO.aracm1,RENAULTCLIO.aracm,RENAULTCLIO.aracb,RENAULTCLIO.aracf,RENAULTCLIO.kasat);
  		     printf("\n");
  		     
			 
 			 //2.araba	 
  			 struct araclar FIATEGEA;
           	 printf("2.FIAT EGEA ->>>>> ");
  		     FIATEGEA.aracm1=2020;
  		     FIATEGEA.aracm=1.3;
  		     FIATEGEA.aracb=95;
  		     FIATEGEA.aracf=126.000;
  		     strcpy(FIATEGEA.kasat,"Kasa Tipi:Sedan");
			 printf(" %d model FIAT EGEA/%.3f motor/%d beygir/%.3f tl/ %s\n",FIATEGEA.aracm1,FIATEGEA.aracm,FIATEGEA.aracb,FIATEGEA.aracf,FIATEGEA.kasat);
  			 printf("\n");	
  
              
			//3.araba	
			 struct araclar KIARIO;
           	 printf("3.KIA  RIO ->>>>> ");
  		     KIARIO.aracm1=2017;
  		     KIARIO.aracm=4.0;
  		     KIARIO.aracb=585;
  		     KIARIO.aracf=109.000;
  		     strcpy(KIARIO.kasat,"Kasa Tipi:Hatchback");
			 printf("  %d model KIA RIO/%.3f motor/%d beygir/%.3f tl/ %s\n",KIARIO.aracm1,KIARIO.aracm,KIARIO.aracb,KIARIO.aracf,KIARIO.kasat);
  			 printf("\n");	

				
			 //4.araba
	         struct araclar CITROENC3;
           	 printf("4.CITROEN C3 ->>>>> ");
  		     CITROENC3.aracm1=2010;
  		     CITROENC3.aracm=1.4;
  		     CITROENC3.aracb=70;
  		     CITROENC3.aracf=50.000;
  		     strcpy(CITROENC3.kasat,"Kasa Tipi:Hatchback");
			 printf("%d model CITROEN C3/%.3f motor/%d beygir/%.3f tl/ %s\n",CITROENC3.aracm1,CITROENC3.aracm,CITROENC3.aracb,CITROENC3.aracf,CITROENC3.kasat);
  			 printf("\n");	

	
     			
			//5.araba	
	         struct araclar AUDIA3;
           	 printf("5.AUDI A3 ->>>>> ");
  		     AUDIA3.aracm1=2016;
  		     AUDIA3.aracm=1.6;
  		     AUDIA3.aracb=190;
  		     AUDIA3.aracf=225.000;
  		     strcpy(AUDIA3.kasat,"Kasa Tipi:Sedan");
			 printf("%d model AUDI A3/%.3f motor/%d beygir/%.3f tl/ %s\n", AUDIA3.aracm1, AUDIA3.aracm, AUDIA3.aracb, AUDIA3.aracf, AUDIA3.kasat);
  			 printf("\n");	
             
             
			 //6.araba
	         struct araclar TOYOTAYARIS;
           	 printf("6.TOYOTA YARIS ->>>>> ");
  		     TOYOTAYARIS.aracm1=2009;
  		     TOYOTAYARIS.aracm=1.3;
  		     TOYOTAYARIS.aracb=100;
  		     TOYOTAYARIS.aracf=65.000;
  		     strcpy(TOYOTAYARIS.kasat,"Kasa Tipi:Hatchback");
			 printf("%d model TOYOTA YARIS/%.3f motor/%d beygir/%.3f tl/ %s", TOYOTAYARIS.aracm1, TOYOTAYARIS.aracm, TOYOTAYARIS.aracb, TOYOTAYARIS.aracf, TOYOTAYARIS.kasat);
  			 printf("\n");	
  			 
			printf("lutfen satin almak istediginiz araci giriniz [1-6]:\n");
			scanf("%d",&s1);
			if(s1==1){
			printf("%d model RENAULT CLIO/%.3f motor/%d beygir/%.3f tl/%s\n ",RENAULTCLIO.aracm1,RENAULTCLIO.aracm,RENAULTCLIO.aracb,RENAULTCLIO.aracf,RENAULTCLIO.kasat);
			printf("Satin almak istermisiniz ?[evet=1,hayir=2]:");
			scanf("%d",&hak);
			if(hak==1){
				printf("Lutfen butcenizi giriniz [ODENICEK TUTAR=110.000 TL]:");
				scanf("%d\n",&butce);
				if(butce>=110.000){
					printf("Satin alma islemi gerceklesti.");
					
				} 
				else if(butce<110.000){
					printf("Yetersiz bakiye ");
				
				}
			}
			if(hak==2){
				printf("Satin alma islemi iptal edildi.Lutfen enter'a basiniz.\n");
				getch();
				goto basadon;
			}
			}
				
			if(s1==2){
			printf(" %d model FIAT EGEA/%.3f motor/%d beygir/%.3f tl/ %s\n",FIATEGEA.aracm1,FIATEGEA.aracm,FIATEGEA.aracb,FIATEGEA.aracf,FIATEGEA.kasat);
			printf("Satin almak istermisiniz ? [evet=1,hayir=2]:");
			scanf("%d",&hak);
			if(hak==1){
				printf("Lutfen butcenizi giriniz [ODENICEK TUTAR=126.000 TL]:");
				scanf("%d\n",&butce);
				if(butce>=126.000){
					printf("Satin alma islemi gerceklesti.");
					
				} 
				else if(butce<=126.000){
					printf("Yetersiz bakiye ");
					
				}
			}
			if(hak==2){
				printf("Satin alma islemi iptal edildi.Lutfen enter'a basiniz.\n");
				getch();
				goto basadon;
			}
			}
			
				if(s1==3){
		    printf("  %d model KIA RIO/%.3f motor/%d beygir/%.3f tl/ %s\n",KIARIO.aracm1,KIARIO.aracm,KIARIO.aracb,KIARIO.aracf,KIARIO.kasat); 
			printf("Satin almak istermisiniz ? [evet=1,hayir=2]:");
			scanf("%d",&hak);
			if(hak==1){
				printf("Lutfen butcenizi giriniz [ODENICEK TUTAR=109.000TL]:");
				scanf("%d\n",&butce);
				if(butce>=109.000){
					printf("Satin alma islemi gerceklesti.");
					
				} 
				else if(butce<=109.000){
					printf("Yetersiz bakiye ");
					
				}
			}
			if(hak==2){
				printf("Satin alma islemi iptal edildi.Lutfen enter'a basiniz.\n");
				getch();
				goto basadon;
			}
			}
			
			if(s1==4){
		    printf("%d model CITROEN C3/%.3f motor/%d beygir/%.3f tl/ %s\n",CITROENC3.aracm1,CITROENC3.aracm,CITROENC3.aracb,CITROENC3.aracf,CITROENC3.kasat);
			printf("Satin almak istermisiniz ?[evet=1,hayir=2]:");
			scanf("%d",&hak);
			if(hak==1){
				printf("Lutfen butcenizi giriniz [ODENICEK TUTAR=50.000TL]:");
				scanf("%d\n",&butce);
				if(butce>=50.000){
					printf("Satin alma islemi gerceklesti.");
					
				} 
				else if(butce<=50.000){
					printf("Yetersiz bakiye ");
					
				}
			}
			if(hak==2){
				printf("Satin alma islemi iptal edildi.Lutfen enter'a basiniz.\n");
				getch();
				goto basadon;
			}
			}
			
			if(s1==5){
		    printf("%d model AUDI A3/%.3f motor/%d beygir/%.3f tl/ %s\n", AUDIA3.aracm1, AUDIA3.aracm, AUDIA3.aracb, AUDIA3.aracf, AUDIA3.kasat);
			printf("Satin almak istermisiniz [evet=1,hayir=2]:");
			scanf("%d",&hak);
			if(hak==1){
				printf("Lutfen butcenizi giriniz ?[ODENICEK TUTAR=225.000TL]:");
				scanf("%d\n",&butce);
				if(butce>=225.000){
					printf("Satin alma islemi gerceklesti.");
					
				} 
				else if(butce<=225.000){
					printf("Yetersiz bakiye ");
					
				}
			}
			if(hak==2){
				printf("Satin alma islemi iptal edildi.Lutfen enter'a basiniz.\n");
				getch();
				goto basadon;
			}
			}
			if(s1==6){
		    printf("%d model TOYOTA YARIS/%.3f motor/%d beygir/%.3f tl/ %s", TOYOTAYARIS.aracm1, TOYOTAYARIS.aracm, TOYOTAYARIS.aracb, TOYOTAYARIS.aracf, TOYOTAYARIS.kasat);
			printf("Satin almak istermisiniz [evet=1,hayir=2]:");
			scanf("%d",&hak);
			if(hak==1){
				printf("Lutfen butcenizi giriniz ? [ODENICEK TUTAR=65.000TL]:");
				scanf("%d\n",&butce);
				if(butce>=65.000){
					printf("Satin alma islemi gerceklesti.");
					
				} 
				else if(butce<=65.000){
					printf("Yetersiz bakiye ");
					
				}
			}
			if(hak==2){
				printf("Satin alma islemi iptal edildi.Lutfen enter'a basiniz.\n");
				getch();
				goto basadon;
			}
			}
			
			break;
  			 
  			
	
	
	case 2:printf(">>>>>>>>>>>>>>>>>>>>   KIRALIK ARACLARIMIZ  <<<<<<<<<<<<<<<<<<<<\n\n");
			  
			        struct karaclar VOLKSWAGENPOLO ;
			    	printf("1.VOLKSWAGEN POLO ->>>>> ");
				    VOLKSWAGENPOLO.model=2017;
					VOLKSWAGENPOLO.tutar=120;
					VOLKSWAGENPOLO.lttutari=500;
					strcpy(VOLKSWAGENPOLO.vitesd,"Yari Otomatik");
					strcpy(VOLKSWAGENPOLO.kasatip,"Kasa Tipi:Hatchback");
				    printf("%d model/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s /",VOLKSWAGENPOLO.model,VOLKSWAGENPOLO.tutar,VOLKSWAGENPOLO.lttutari,VOLKSWAGENPOLO.vitesd,VOLKSWAGENPOLO.kasatip);
		            ayliktutar=VOLKSWAGENPOLO.tutar*30;
					printf("AYLIK TUTAR=%d",ayliktutar);printf("+yakit");
					printf("\n");
					
					
					//2.araba
			   	    struct karaclar OPELASTRA;
			    	printf("2.OPEL ASTRA ->>>>> ");
					OPELASTRA.model=2018;
					OPELASTRA.tutar=220;
					OPELASTRA.lttutari=400;
					strcpy(OPELASTRA.vitesd,"Manuel");
					strcpy(OPELASTRA.kasatip,"Kasa Tipi:Sedan");
				    printf("%d model/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s /  ",OPELASTRA.model,OPELASTRA.tutar,OPELASTRA.lttutari,OPELASTRA.vitesd,OPELASTRA.kasatip);
					ayliktutar=OPELASTRA.tutar*30;
					printf("AYLIK TUTAR=%d",ayliktutar);printf("+yakit");
					printf("\n");
					
					//3.araba
					ayliktutar=PEUGEOT508.tutar*30;
					struct karaclar PEUGEOT508;
			    	printf("3.PEUGEOT508->>>>> ");
					PEUGEOT508.model=2018;
					PEUGEOT508.tutar=150;
					PEUGEOT508.lttutari=400;
					strcpy(PEUGEOT508.vitesd,"Otomatik");
					strcpy(PEUGEOT508.kasatip,"Kasa Tipi:Sedan");
				    printf("%d model/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s / ",PEUGEOT508.model,PEUGEOT508.tutar,PEUGEOT508.lttutari,PEUGEOT508.vitesd,PEUGEOT508.kasatip);			    
					ayliktutar=PEUGEOT508.tutar*30;
					printf("AYLIK TUTAR=%d",ayliktutar);printf("+yakit");
					printf("\n");
					
					
					//4.ARABA
			     	ayliktutar=MAZDAMX5.tutar*30;
					struct karaclar MAZDAMX5;
			    	printf("4.MAZDA MX-5->>>>> ");
					MAZDAMX5.model=2017;
					MAZDAMX5.tutar=250;
					MAZDAMX5.lttutari=500;
					strcpy(MAZDAMX5.vitesd,"Manuel");
					strcpy(MAZDAMX5.kasatip,"Kasa Tipi:Cabrio");
				    printf("%d model/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s / ",MAZDAMX5.model,MAZDAMX5.tutar,MAZDAMX5.lttutari,MAZDAMX5.vitesd,MAZDAMX5.kasatip);			    
					ayliktutar=MAZDAMX5.tutar*30;
					printf("AYLIK TUTAR=%d",ayliktutar);printf("+yakit");
					printf("\n");
					
					
			        //5.araba
			  	    ayliktutar=MINICCOP.tutar*30;
					struct karaclar MINICCOP;
			    	printf("5.MINICCOP -->>>>> ");
					MINICCOP.model=2018;
					MINICCOP.tutar=260;
					MINICCOP.lttutari=600;
					strcpy(MINICCOP.vitesd,"Otomatik");
					strcpy(MINICCOP.kasatip,"Kasa Tipi:Hatchback");
				    printf("%d model/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s / ",MINICCOP.model,MINICCOP.tutar,MINICCOP.lttutari,MINICCOP.vitesd,MINICCOP.kasatip);			    
					ayliktutar=MINICCOP.tutar*30;
					printf("AYLIK TUTAR=%d",ayliktutar);printf("+yakit");
					printf("\n");
							  
			  	    //6.ARABA
			        ayliktutar=SUZUKISWIFT.tutar*30;
					struct karaclar SUZUKISWIFT;
			    	printf("6.SUZUKISWIFT -->>>>> ");
					SUZUKISWIFT.model=2017;
					SUZUKISWIFT.tutar=130;
					SUZUKISWIFT.lttutari=480;
					strcpy(SUZUKISWIFT.vitesd,"Otomatik");
					strcpy(SUZUKISWIFT.kasatip,"Kasa Tipi:Hatchback");
				    printf("%d model/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s / ",SUZUKISWIFT.model,SUZUKISWIFT.tutar,SUZUKISWIFT.lttutari,SUZUKISWIFT.vitesd,SUZUKISWIFT.kasatip);			    
					ayliktutar=SUZUKISWIFT.tutar*30;
					printf("AYLIK TUTAR=%d",ayliktutar);printf("+yakit");
					printf("\n\n");
					
					printf("Lutfen kiralamak istediginiz araci seciniz [1-6] :");
					scanf("%d",&s2);
					if(s2==1){
						printf("%d model VOLKSWAGEN POLO/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s",VOLKSWAGENPOLO.model,VOLKSWAGENPOLO.tutar,VOLKSWAGENPOLO.lttutari,VOLKSWAGENPOLO.vitesd,VOLKSWAGENPOLO.kasatip);
						printf("\nkiralamak istermisiniz?[evet=1,hayir=2]:");
						scanf("%d",&hak);
						if(hak==1){
							printf("lutfen kiralamak istediginiz gun sayisini giriniz :");
							scanf("%d",&gunsayisi);
							printf("lutfen butcenizi giriniz [gunluk ucret=120]:");
							scanf("%d",&butce);
							if(butce>=gunsayisi*120){
								printf("kiralama islemi gerceklestirildi.");
							}else if(butce<120*gunsayisi){
								printf("yetersiz bakiye.[enter'a basiniz...].\n");
								getch();
								goto basadon;
							}
						}if(hak==2){
						
							printf("kiralama islemi iptal edildi[enter'a basiniz...].\n");
							getch();
							goto basadon;
						}
					}
						if(s2==2){
						printf("%d model OPEL ASTRA/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s ",OPELASTRA.model,OPELASTRA.tutar,OPELASTRA.lttutari,OPELASTRA.vitesd,OPELASTRA.kasatip);
						printf("\nkiralamak istermisiniz?[evet=1,hayir=2]:");
						scanf("%d",&hak);
						if(hak==1){
							printf("lutfen kiralamak istediginiz gun sayisini giriniz :");
							scanf("%d",&gunsayisi);
							printf("lutfen butcenizi giriniz [gunluk ucret=220]:");
							scanf("%d",&butce);
							if(butce>=gunsayisi*220){
								printf("kiralama islemi gerceklestirildi.");
							}else if(butce<220*gunsayisi){
								printf("yetersiz bakiye.[enter'a basiniz...].\n");
								getch();
								goto basadon;
							}
						}if(hak==2){
							printf("kiralama islemi iptal edildi[enter'a basiniz...].\n");
							getch();
							goto basadon;
						}
					}
					if(s2==3){
			         	printf("%d model PEUGEOT 508/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s / ",PEUGEOT508.model,PEUGEOT508.tutar,PEUGEOT508.lttutari,PEUGEOT508.vitesd,PEUGEOT508.kasatip);
						printf("\nkiralamak istermisiniz?[evet=1,hayir=2]:");
						scanf("%d",&hak);
						if(hak==1){
							printf("lutfen kiralamak istediginiz gun sayisini giriniz :");
							scanf("%d",&gunsayisi);
							printf("lutfen butcenizi giriniz [gunluk ucret=150]:");
							scanf("%d",&butce);
							if(butce>=gunsayisi*150){
								printf("kiralama islemi gerceklestirildi.");
							}else if(butce<150*gunsayisi){
								printf("yetersiz bakiye.[enter'a basiniz...]\n");
								getch();
								goto basadon;
							}
						}if(hak==2){
							printf("kiralama islemi iptal edildi[enter'a basiniz...].\n");
							getch();
							goto basadon;
						}
					}
					
						if(s2==4){
			         printf("%d model MAZDA MX-5/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s / ",MAZDAMX5.model,MAZDAMX5.tutar,MAZDAMX5.lttutari,MAZDAMX5.vitesd,MAZDAMX5.kasatip);
						printf("\nkiralamak istermisiniz?[evet=1,hayir=2]:");
						scanf("%d",&hak);
						if(hak==1){
							printf("lutfen kiralamak istediginiz gun sayisini giriniz :");
							scanf("%d",&gunsayisi);
							printf("lutfen butcenizi giriniz [gunluk ucret=250]:");
							scanf("%d",&butce);
							if(butce>=gunsayisi*250){
								printf("kiralama islemi gerceklestirildi.");
							}else if(butce<250*gunsayisi){
								printf("yetersiz bakiye.[enter'a basiniz...]\n");
								getch();
								goto basadon;
							}
						}if(hak==2){
							printf("kiralama islemi iptal edildi[enter'a basiniz...].\n");
							getch();
							goto basadon;
						}
					}
						if(s2==5){
			         printf("%d model MINICOOPER/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s / ",MINICCOP.model,MINICCOP.tutar,MINICCOP.lttutari,MINICCOP.vitesd,MINICCOP.kasatip);
						printf("\nkiralamak istermisiniz?[evet=1,hayir=2]:");
						scanf("%d",&hak);
						if(hak==1){
							printf("lutfen kiralamak istediginiz gun sayisini giriniz :");
							scanf("%d",&gunsayisi);
							printf("lutfen butcenizi giriniz [gunluk ucret=260]:");
							scanf("%d",&butce);
							if(butce>=gunsayisi*260){
								printf("kiralama islemi gerceklestirildi.");
							}else if(butce<260*gunsayisi){
								printf("yetersiz bakiye.[enter'a basiniz...]\n");
								getch();
								goto basadon;
							}
						}if(hak==2){
							
							printf("kiralama islemi iptal edildi[enter'a basiniz...].");
							getch();
							goto basadon;
						}
					}
					if(s2==6){
			        printf("%d model SUZUKI SWIFT/%d tl(gunluk)/%d tl(depo)/Vites Durumu=%s/%s / ",SUZUKISWIFT.model,SUZUKISWIFT.tutar,SUZUKISWIFT.lttutari,SUZUKISWIFT.vitesd,SUZUKISWIFT.kasatip);	
						printf("\nkiralamak istermisiniz?[evet=1,hayir=2]:");
						scanf("%d",&hak);
						if(hak==1){
							printf("lutfen kiralamak istediginiz gun sayisini giriniz :");
							scanf("%d",&gunsayisi);
							printf("lutfen butcenizi giriniz [gunluk ucret=130]:");
							scanf("%d",&butce);
							if(butce>=gunsayisi*130){
								printf("kiralama islemi gerceklestirildi.");
							}else if(butce<130*gunsayisi){
								printf("yetersiz bakiye.[enter'a basiniz...]\n");
								getch();
								goto basadon;
							}
						}if(hak==2){
							printf("kiralama islemi iptal edildi[enter'a basiniz...].\n");
							getch();
							goto basadon;
							
						}
					}
					
					break;
					
				
				   	
	case 3:printf(">>>>>>>>  $$$   EKO ARAC  $$$   <<<<<<<<<<\n\n");
		for(int g=1;g<4;g++){
				for(int i=0;i<4;i++){
					if(saracdizisi[i]>saracdizisi[i+1]){
						yd=saracdizisi[i];
						saracdizisi[i]=saracdizisi[i+1];
						saracdizisi[i+1]=yd;
					}
				}
			}
		
			
			for(int i=0;i<4;i++){
				printf("%.3f\n",saracdizisi[i]);
				
				 
			     }	
					
				    printf("lutfen butcenizi giriniz [50-120]:");
				    scanf("%d",&butce);
				    if(butce>=109.000){
					if(butce<=120.000){
					printf("1.2017 model KIA RIO/4.0 motor/585 beygir/109.000 tl\n");
				    printf("2.2020 model RENAULT CLIO/1.5 motor/90 beygir/110.000 tl\n");
				    printf("3.2010 model CITROEN C3/1.4 motor/ 70beygir/50.000 tl\n");
				    printf("4.2009 model TOYOTA YARIS/1.3 motor/100 beygir/65.000 tl\n");
				    
				    printf("yukaridaki araclardan birini seciniz [1-2-3-4]:");
				    scanf("%d",&hak);
				    if(hak==1){
				    		printf("1.2017 model KIA RIO/4.0 motor/585 beygir/109.000 tl\n");
				    		printf("satin alma islemini onayliyormusunuz ?[evet=1-hayir=2]:");
				    		scanf("%d",&hak2);
				    	if(hak2==1){
				    		printf("satin alma islemi gerceklesti .");
						}else if(hak2==2){
							printf("satin alma iptal edildi .");
							goto basadon;
						}	
					}if(hak==2){
						 printf("2.2020 model RENAULT CLIO/1.5 motor/90 beygir/110.000 tl\n");
						 	printf("satin alma islemini onayliyormusunuz ?[evet=1-hayir=2]:");
				    		scanf("%d",&hak2);
				    			if(hak2==1){
				    		printf("satin alma islemi gerceklesti .");
						}else if(hak2==2){
							printf("satin alma iptal edildi .");
							goto basadon;
						}
					}if(hak==3){
						printf("3.2010 model CITROEN C3/1.4 motor/ 70beygir/50.000 tl\n");
							printf("satin alma islemini onayliyormusunuz ?[evet=1-hayir=2]:");
				    		scanf("%d",&hak2);
				    			if(hak2==1){
				    		printf("satin alma islemi gerceklesti .");
						}else if(hak2==2){
							printf("satin alma iptal edildi .");
							goto basadon;
						}
					}if(hak==4){
						printf("4.2009 model TOYOTA YARIS/1.3 motor/100 beygir/65.000 tl\n");
							printf("satin alma islemini onayliyormusunuz ?[evet=1-hayir=2]:");
				    		scanf("%d",&hak2);
				    			if(hak2==1){
				    		printf("satin alma islemi gerceklesti .");
						}else if(hak2==2){
							printf("satin alma iptal edildi .");
							goto basadon;
						}
					}
					
					}
					}
					
				if(butce<109.000){
					if(butce>=65.000){
						printf("1.2010 model CITROEN C3/1.4 motor/ 70beygir/50.000 tl\n");
				        printf("2.2009 model TOYOTA YARIS/1.3 motor/100 beygir/65.000 tl\n");
						  printf("yukaridaki araclardan birini seciniz [1-2]:");
				          scanf("%d",&hak);
				      if(hak==1){
				    		printf("1.2010 model CITROEN C3/1.4 motor/ 70beygir/50.000 tl\n");
				    		printf("satin alma islemini onayliyormusunuz ?[evet=1-hayir=2]:");
				    		scanf("%d",&hak2);
				    	if(hak2==1){
				    		printf("satin alma islemi gerceklesti .");
						}else if(hak2==2){
							printf("satin alma iptal edildi .");
							goto basadon;
						}	
					}if(hak==2){
						    printf("2.2009 model TOYOTA YARIS/1.3 motor/100 beygir/65.000 tl\n");
						 	printf("satin alma islemini onayliyormusunuz ?[evet=1-hayir=2]:");
				    		scanf("%d",&hak2);
				    			if(hak2==1){
				    		printf("satin alma islemi gerceklesti .");
						}else if(hak2==2){
							printf("satin alma iptal edildi .");
							goto basadon;
						}
					}
						
					}
				}if(butce==50.000){
						printf("1.2010 model CITROEN C3/1.4 motor/ 70beygir/50.000 tl\n");
						printf("satin almak istermisiniz ?[evet=1-hayir=2] :");
						scanf("%d",&hak);
						if(hak==1){
							printf("satin alma islemi gerceklesti");
						}if(hak==2){
							printf("satin alma islemi iptal edildi");
							goto basadon;
						}
				}if(butce<50.000){
					printf("uzgunuz butcenize uygun arac bulunamadi");
					goto basadon;
				}
				
			    break;
			
case 4:printf("***Yorumlariniz bizim icin degerli***\n\n");
		   FILE*fptr;//fýle
		   fptr=fopen("yorum.txt","w");//w=yaz
		   if(fptr==NULL){//0
		   hatayibas(404);
		   }
		   else{
		   printf("YORUMUNUZ:\n");
		   scanf("%s",&yorum);
		   fprintf(fptr,"%s",yorum);
		   printf("yorumunuz kaydedildi.");
		   fclose(fptr);// close fýle.
		   }
		   break;
	   

	
		
	
	case 5:printf("gule gule :)");break;			  	
    
	
	default: hatayibas(404);
}		 }	
					
	


												
			
		
			
			
			
			



	
		
		
		
		
		
		
		
		

	      
	
	

