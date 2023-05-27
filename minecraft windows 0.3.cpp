/*     
     
    Copyright (C) 2023 grassblock123

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/


/*            [--------------------->all of use<--------------------------]             */

//librarys

//include
#include <iostream> //cout,cin,printf,scanf
#include <stdlib.h>//Sleep
#include <windows.h>//Sleep
#include <cstring>//strlen

//use all concert
	//1.stroage devices
	int VMware_stroage = 0;
	//200GiB
	int GIMW_SSD = 0;
	//128GiB
	int GIMW_machine_stroage = 0;
	//128GiB
	int meluim_SD = 0;
	//20GiB
	int mine_cloud = 0;
	//1TiB
	char formarts;// = temp;
	//media formart awser
	
	//2.Choose bin
	int temp = 0;
	char temp1;
	int de;
	//start cover
	int bin = 0;
	//can stroage 20GB temple flies;
	char Terminal;
	//Terminal use
	char Digital;
	//Digital get
	char key_choose;
	//Key use
	int key = 123;
	//The key
	char expoler;
	//expoler use
	int PSB;
	//PSB key
	int password = 123;
	//login scanf
	int choose;
	//software use
	
	//3.formart stroage(test)
	int a[1024*100];
	//100*1024 stroage
	/*mean of this
		we use the char num of scanf to stroage char, 1 char is a build, then we use '0' , '2' and '1' 
		to ckeching the char , the '0' is no , '1' is stroage count , '2' is stop num;
	*/
	char ch[10000000];
	//formart stroage things
	int longs;
	//didital long
	
	//4.start choose
	int s = 2;//= 1;= 0;= 2;
	//s = 0, no media ; s = 1, have accouct ; s = 2,use frist
	char name[11];// = "name";
	//user's name
	
	/*devices:
		stroage(VMware_stroage , GIMW_SSD , GIMW_machine_stroage , meluim_SD , mine_cloud) , 
		bin() , pic() , UEFI_BIOS() , media() , ckeching() , OOBE() , ms() , login(),scan()
	*/





/*         [-------------------->All softwares<--------------------]               */
//no media
void no(){
	printf("------------------------------------------------------------------\n");
	printf(": (\nsorry your computer is not avalible,maybe your devices is brocken,or you don't have media.\nit's turn to media to set up your computer...\n");
	printf("------------------------------------------------------------------\n");
}

//start picture print
void pic(){
	printf("------------------------------------------------------------------\n");
    printf("                      Minecraft Windows setup					  \n");
	printf("londing flies...\n");
	printf("¡ö\n");
	printf("------------------------------------------------------------------\n");
    printf("                      Minecraft Windows setup					  \n");
	printf("londing flies...\n");
	printf("¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("------------------------------------------------------------------\n");
    printf("                      Minecraft Windows setup					  \n");
	printf("londing flies...\n");
	printf("¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("------------------------------------------------------------------\n");
	printf("                      Minecraft Windows setup					  \n");
	printf("londing flies...\n");
	printf("¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("------------------------------------------------------------------\n");
	printf("                      Minecraft Windows setup					  \n");
	printf("londing flies...\n");
	printf("¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("------------------------------------------------------------------\n");
}

//UEFT and BIOS settings
void UEFI_BIOS(){
	printf("------------------------------------------------------------------\n");
	printf("                      UEFT&BIOS settings      					  \n");
	printf("choose your disk to install UEFT or BIOS Flies(2Gib)\n");
	printf("A.VMware_stroage\nB.GIMW_SSD\nC.GIMW_machine_stroage\nD.meluim_SD\nE.mine_cloud\n");
	printf("------------------------------------------------------------------\n");
	scanf("%c",&temp);
	if(temp == 'A'){
		VMware_stroage = 2;
	}else if(temp == 'B'){
		GIMW_SSD = 2;
	}else if(temp == 'B'){
		GIMW_machine_stroage = 2;
	}else if(temp == 'C'){
		meluim_SD = 2;
	}else{
		mine_cloud = 2;
	}
	printf("------------------------------------------------------------------\n");
	printf("                      UEFT&BIOS settings      					  \n");
	printf("it's install to UEFI&BIOS...\n");
	printf("¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("------------------------------------------------------------------\n");
	printf("                      UEFT&BIOS settings      					  \n");
	printf("it's install to UEFI&BIOS...\n");
	printf("¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("------------------------------------------------------------------\n");
	printf("                      UEFT&BIOS settings      					  \n");
	printf("it's install to UEFI&BIOS...\n");
	printf("¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("------------------------------------------------------------------\n");
	printf("                      UEFT&BIOS settings      					  \n");
	printf("it's install to UEFI&BIOS...\n");
	printf("¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("------------------------------------------------------------------\n");
	printf("                      UEFT&BIOS settings      					  \n");
	printf("bingo,it's turn to hardware checkings...\n");
	printf("	:D thank you :D\n");
	printf("------------------------------------------------------------------\n");
}

//computer hardware checkings
void checking(){
	for(int i = 0; i <= 100; i += 8){
		printf("------------------------------------------------------------------\n");
		printf("                      hardware checkings      					  \n");
		printf("Checker is checking your computer healthy...\n");
		printf("CPU - Intel Xeon 5700 %d%%\nRAM - Geek 4G * 2 %d%%\ndisk - disk1/2/3/4 %d%%\npicture card - NVida 4090 Ti %d%%\nscreen - microsft smart screen %d%%\n",i,i,i,i,i);
		printf("------------------------------------------------------------------\n");
	}
	printf("your computer is well,but CPU's bag is worg,do you want to fix?(1 = yes 2 = no)\n");
	scanf("%d",&temp);
	if(temp = 1){
		printf("Ok,its fixing...\nbingo,it is turn to media...\n\n\n\n\n\n\n\n");
	}else{
		printf("it is turn to media...\n\n\n\n\n\n\n\n");
	}
	
}

//media creation tool.etf
void media(){
	scanf("%c",&temp1);
	printf("---------------------------------------------------------------------\n");
	printf("                      minecraft windows 0.3 media setup               \n\n\n");
	printf("setup 1:formart your disk\n\n");
	printf("      disk 1\n");
	printf(" __________________  A.NTFS(bite locker)\n");
	printf("/__________________\\ B.FAT32,exFAT\n");
	printf("[________ O _______] C.Minecraft chest(MCT locker)\n\n\n");
	printf("---------------------------------------------------------------------\n");
	scanf("%c",&temp1);
	//temp to  formart , should cocect
	formarts = temp1;
	printf("                      minecraft windows 0.3 media setup               \n\n\n");
	printf("setup 1:formart your disk\n\n");
	printf("      disk 1\n");
	printf(" __________________   formarting...\n");
	printf("/__________________\\ ¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö\n");
	printf("[________ O _______] \n\n\n");
	printf("---------------------------------------------------------------------\n");
	printf("                      minecraft windows 0.3 media setup               \n");
	printf("Install system...(maybe need 2 min)\n");
	printf("Install softwares: 0%\nChange hardwares: 0%\nSet includes: 0%\n");
	printf("---------------------------------------------------------------------\n");
	printf("                      minecraft windows 0.3 media setup               \n");
	printf("Install system...(maybe need 2 min)\n");
	printf("Install softwares: ¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö100%\nChange hardwares: 0%\nSet includes: 0%\n");
	printf("---------------------------------------------------------------------\n");
	printf("returning...\n");
	printf("                      minecraft windows 0.3 media setup               \n");
	printf("Install system...(maybe need 2 min)\n");
	printf("Install softwares: ¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö100%\nChange hardwares: ¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö100%\nSet includes: 0%\n");
	printf("---------------------------------------------------------------------\n");
	printf("restarting...\n");
	printf("                      minecraft windows 0.3 media setup               \n");
	printf("Install system...(maybe need 2 min)\n");
	printf("Install softwares: ¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö100%\nChange hardwares: ¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö100%\nSet includes: ¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö¡ö100%\n");
	printf("---------------------------------------------------------------------\n");
	printf("                      minecraft windows 0.3 media setup               \n");
	printf("Install system...(maybe need 2 min)\n");
	printf("restarting to start service and intsall system(17.2G)\n");
	printf("---------------------------------------------------------------------\n");
	printf("scanf a rambom number to start...\n");
	scanf("%d",&de);
	de = 0;
	printf("starting...maybe need 5 miniute...\n\nsprit:");
	Sleep(99999);//1
	printf("¡ö");
	Sleep(99999);//2
	printf("¡ö");
	Sleep(99999);//3
	printf("¡ö");
	Sleep(99999);//4
	printf("¡ö");
	Sleep(99999);//5
	printf("¡ö");
	Sleep(99999);//6
	printf("¡ö");
	Sleep(99999);//7
	printf("¡ö");
	Sleep(99999);//8
	printf("¡ö");
	Sleep(99999);//9
	printf("¡ö");
	Sleep(99999);//10
	printf("¡ö\n");
	Sleep(100);
	de = 0;
}

//starting OOBE
int OOBE(){
	scanf("%d",&de);
	printf("---------------------------------------------------------------------\n");
	printf("                      Minecraft Windows                              \n");
	printf("                          STARTING!                                  \n");
	printf("\n\nc:copyright by GrassInternet.Inc\n");
	printf("build:01H1\nArt:Grassinternet-ArtGroup\nName of system:01.0.0.3\nThans for your using!\n");
	printf("---------------------------------------------------------------------\n");
	Sleep(2000);
	return 1;
}

//first / update settings
void setting(){
	printf("---------------------------------------------------------------------\n");
	printf("Welcom to minecraft windows 0.3 settings:\n1.setting your user name:\n");
	printf("scanf << \n");
	printf("---------------------------------------------------------------------\n");
	scanf("%s\n",name);
	printf("\n\n---------------------------------------------------------------------\n");
	printf("2.Do you want to use Terminal?(Y / N)\nTips:Terminal is used to open config and fix computer,it has SAME LIKE ADIM.\n");
	printf("choose << \n");
	printf("---------------------------------------------------------------------\n");
	scanf("%c\n",&Terminal);
	printf("\n\n---------------------------------------------------------------------\n");
	printf("3.Do you want to share your digtal for grassinternet.Inc to fix the system?(Y / N)\n");
	printf("choose << \n");
	printf("---------------------------------------------------------------------\n");
	scanf("%c\n",&Digital);
	printf("\n\n---------------------------------------------------------------------\n");
	printf("4.Do you want to use expoler to look up the flies?(Y / N)\n");
	printf("choose << \n");
	printf("---------------------------------------------------------------------\n");
	scanf("%c\n",&expoler);
	Sleep(2000);
	printf("\n---------------------------------------------------------------------\n");
	printf("Going to change settings...\n");
	printf("---------------------------------------------------------------------\n");
	Sleep(2000);
	printf("Changing settings...\n");
	printf("---------------------------------------------------------------------\n");
	Sleep(2000);
	printf("<<geting into the OOBE...\n");
	Sleep(2000);
	temp = 1;
}

//MS-DOS SYS
void ms(){
	if(temp == 1){
		printf("Press key << ");
		scanf("%d",&temp);
		if(temp == key){
			printf("Press a PSB key(please remember) << ");
			scanf("%d",&PSB);
			printf("\nget into system...\n");
		}else{
			printf("wrong!");
			Sleep(2000);
		}
	}else{
		printf("MS-DOS system\n[c]:copyright by grassinternet.Inc\nUser << ");
	}
}

//Login
int login(){
	printf("----------------------------------------------\n");
	printf("   [-------------->Welcom! %s<----------------]\n",name);
	printf("   << scanf your password to into the desktop  \n");
	printf("----------------------------------------------\n");
	scanf("%d",&password);
	if(password == key){
		printf("----------------------------------------------\n");
		printf("   [-------------->Welcom! %s<----------------]\n",name);
		printf("           << log into the desktop >>          \n");
		printf("----------------------------------------------\n");
		Sleep(1000);
	}else{
		printf("----------------------------------------------\n");
		printf("   [-------------->Welcom! %s<----------------]\n",name);
		printf("                << login faled>>               \n");
		printf("----------------------------------------------\n");
		Sleep(10000);
	}
	return 1;
}

//destop
int desktop(){
	printf("---------------------------------------------------------------------------------------\n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                                                                                       \n");
	printf("                             ___________                                               \n");
	printf("                             [____O____]                                               \n");
	printf("                             [____O____]                                               \n");
	printf("                             [____O____]                                               \n");
	printf("                               Expoler                                                 \n");
	printf("                       ========================                                        \n");
	printf("---------------------------------------------------------------------------------------\n");
	return 0;
}

//scanf the software for use
int scan(){
	while(1){
		scanf("%d",&choose);
		printf("Not Finish!\n");
	}
	return 1;
}


//the formart
int formart(){
	/*printf("--------------------------------------\n");
	printf("[----------->formart disk<------------]\n");
	printf("scanf your number or digitals(don't scanf space!)\n");
	printf("--------------------------------------\n");
	scanf("%s",ch);
	long = strlen(ch);
	for(int i = 0; i < long; i++){
		for(int j = 0; j <= ch[i]; j++){
			if(a[])
		}
	}*/
	
}

//debug
void debug(){
	if(de == 3){
		printf("Break into the formart disk use...\n");
		Sleep(1000);
	}else if(de == 4){
		printf("Break into the MS-DOS system...\n");
		Sleep(1000);
		ms();
	}else if(de == 10){
		printf("Break into the UEFI...\n");
		Sleep(1000);
	}else if(de == 101){
		printf("Break into the update...\n");
		Sleep(1000);
	}
}

/*                       important area [use software and devices]                              */
int main(){
	if(s == 0){
		no();
	}else if(s == 1){
		OOBE();
		debug();
		login();
		desktop();
		scan();
	}else if(s == 2){
		printf("starting...\n");
		OOBE();
		pic();
		UEFI_BIOS();
		checking();
		media();
		OOBE();
		debug();
		setting();
		login();
		desktop();
		scan();
	}
	return 0;
}
/*softwares and controls[void or int/float/double/bool]
			[-------->locial disk<-------](<= 120MB)
*/

