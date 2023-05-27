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

//librarys
//include
#include <iostream>
#include <stdlib.h>

//use all concert
	char name[11];// = "name";
	int key;// = 12345;
	int keyh;// = 1;	

//softwares [void or int]
//UEFI own test
void UEFI(){
	printf("UEFI is checking your computer health and flies......\nplease wait...");
	for(int i = 0; i <= 100; i++){
		printf("checking computer hardware %d%\n",i);
	}
	for(int i = 0; i <= 100; i++){
		printf("checking computer software %d%\n",i);
	}
	for(int i = 0; i <= 321; i++){
		printf("checking computer restart flies %d/321\n",i);
	}
	for(int i = 0; i <= 100; i++){
		printf("update and BIOS prepare... %d%\n",i);
	}
	printf("UEFI checked bingo! It's turn to Update settings...\n");
}

//update test(fist use)
void Update(){
	printf("Update checker is longin your Data flies and download new flies to Internet...\n");
	for(int i = 0; i <= 100; i++){
		printf("checking system %d%\n",i);
	}
	printf("ckecking system bingo! Now is a new system flies,Do you want to download?(ture 1 false 0)\n");
	int a;
	scanf("%d",&a);
	if(a == 1){
		printf("ok,it is downloading...\n");
		for(int i = 0; i <= 100; i++){
			printf("download system flies %d%\n",i);
		}
		printf("Bingo! it is turning to BIOS settings...\n");
	}else{
		printf("ok,the systeam flies will you return computer's time to download,it is turn to BIOS settings...\n");
	}
}

//update test(all times)
void Updates(){
	printf("Update checker is longin your Data flies and download new flies to Internet...\n");
	for(int i = 0; i <= 100; i++){
		printf("checking system %d%\n",i);
	}
	printf("ckecking system bingo! Now is a new system flies,Do you want to download?(ture 1 false 0)\n");
	int a;
	scanf("%d",&a);
	if(a == 1){
		printf("ok,it is downloading...\n");
		for(int i = 0; i <= 100; i++){
			printf("download system flies %d%\n",i);
		}
		printf("Bingo! it is turning longin...\n");
	}else{
		printf("ok,the systeam flies will you return computer's time to download,it is turning to longin...\n");
	}
}	

//BIOS settings
void BIOS(){
	printf("BIOS User is aparing the 'Minecraft Builds system' BIOS...\n");
	printf("BIOS initialization...\n");
	printf("BIOS bag Lazing...\n");
	printf("Choose your BIOS!\nx32(1)\nx64(2)\nx86(3)\nxsteve(no backing! don't scan!)\n");
	int a;
	scanf("%d",&a);
	if(a == 1){
		printf("BIOS is changing...\n");
		printf("Changing system(x32)...\n");
		printf("Changing software...\n");
		printf("Changing internet...\n");
		printf("bingo! it's turning to formarts...\n");
	}else if(a == 2){
		printf("BIOS is changing...\n");
		printf("Changing system(x64)...\n");
		printf("Changing software...\n");
		printf("Changing internet...\n");
		printf("Changing pictures...\n");
		printf("Changing memery...\n");
		printf("Changing CPU(CUI) bit...\n");
		printf("bingo! it's turning to formarts...\n");
	}else if(a == 3){
		printf("BIOS is changing...\n");
		printf("Changing system(x86)...\n");
		printf("Changing software...\n");
		printf("Changing internet...\n");
		printf("Changing pictures...\n");
		printf("Changing memery...\n");
		printf("Changing CPU(CUI) bit...\n");
		printf("Changing 'more flies'mod...\n");
		printf("Changing Forge...\n");
		printf("bingo! it's turning to formarts...\n");
	}
}

//stoage formarts
void formarts(){
	printf("Choose your starge formarts bit!\n");
	printf("x32(1)\nx64(2)\nx86(3)\n");
	int a;
	scanf("%d",&a);
	if(a == 1){
		printf("Choose your starge formarts!\n");
		printf("NTFS(windows)[1]\nFAT32(windows)[2]\nFAT(windows)[3]\nexFAT(usb stroage)[4]\nminecraft chest[recommend][0]");
		scanf("%d",&a);
		if(a == 1){
			printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...\n");
		}else if(a == 1){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}else if(a == 2){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}else if(a == 3){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}else if(a == 4){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}else if(a == 0){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}
	}else if(a == 2){
		printf("Choose your starge formarts!\n");
		printf("NTFS(windows)[1]\nFAT32(windows)[2]\nFAT(windows)[3]\nminecraft chest[recommend][0]");
		scanf("%d",&a);
		if(a == 1){
			printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...\n");
		}else if(a == 1){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}else if(a == 2){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}else if(a == 3){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}else if(a == 0){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}
	}else if(a == 3){
		printf("Choose your starge formarts!\n");
		printf("NTFS(windows)[1]\nminecraft chest[recommend][0]");
		scanf("%d",&a);
		if(a == 1){
			printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...\n");
		}else if(a == 0){
				printf("it is changing stroge...\n");
			for(int i = 0; i <= 100; i++){
				printf("compelete %d%\n",i);
			}
			printf("bingo! it is turn to bag settings...");
		}
	}
}

//bag choose
void bag(){
	printf("choose your Forge!\nBeta(1)\nAlpha(2)\njava(3)\n");
	int a;
	scanf("%d",&a);
	if(a == 1){
		printf("Choose accept!\nit's turn to UUID...\n");
	}else if(a == 2){
		printf("Choose accept!\nit's turn to UUID...\n");
	}else if(a == 3){
		printf("Choose accept!\nit's turn to UUID...\n");
	}
}

//UUID settings
void UUID(){
	printf("Choose your Languge(1 - English 2 - chinese)\n");
	int a;
	scanf("%d",&a);
	if(a == 2){
		printf("输入用户名（所有用户都是管理员用户！）\n");
		scanf("%s",name);
		printf("你需要在登录时使用密码吗?(是 1 否 0)\n");
		scanf("%d",&keyh);
		if(keyh == 1){
			printf("输入你的密码（数字）\n");
			scanf("%d",&key);
			printf("完成！已交给'defender'进行保护....\n");
		}else if(keyh == 0){
			printf("好吧，以后可以在'设置'中修改!\n");
		}
		printf("接下来结束使用这台电脑了，祝你使用愉快! :D\n");
	}else{
		printf("scanf your User name!\n(all user are Admin!)\n");
		scanf("%s",name);
		printf("Do you want to have a key to open this computer?(yes 1 no 0)\n");
		scanf("%d",&keyh);
		if(keyh == 1){
			printf("scanf your key(numbers)\n");
			scanf("%d",&key);
			printf("Bingo! it's give to 'defender' to prepare....\n");
		}else{
			printf("ok,it can change in 'settings'!\n");
		}
		printf("next time is in longin and use this computer,wish you use happy!:D\n");
	}
}

//longin
int enlongin(){
	printf("Welcome!  %s\n",name);
	if(keyh == 1){
		printf("enter your key! ---->\n");
		int skey;
		scanf("%d",&skey);
		if(skey == key){
			printf("your key is acccept,londing to your desktop....\n");
		}else{
			printf("your key is false,please restart again!\n");
			int a;
			scanf("%d",&a);
			return 0;
		}
	}else{
		printf("londing to your desktop....\n");
	}
}

//copyright and buid bag
void start(){
	printf("\n\n\n//Minecraft Windows\\\\ \n--------------------\n(c):copyright by grassInternet.Inc(2022 - 2030)\nbuid:beta 0.1\ndo not discrord!\nTanks for your Using!\n\n\n");
}

//print desktop
void desktop(){
	printf("---------------------------------------------------------------------\n[windows]\n[*.etf]\n\n\n\n\n\n\n\n\n");
	printf("----------------------------------------------------------------------\n");
	printf("please scanf your software name(you can look it up in 'use book' - 8)!\n");
}

//use corcert
void usebook(){
	printf("------------------------------------------\n");
	printf("                   Use Book               \n");
	printf("Computer settings:\n1.expoler[1]\n2.settings[2]\n3.left click[3]\n4.right click[4]\n5.minecraft home(IE)[5]\n6.restart computer[6]\n7.this computer[7]\n\n\n");
	printf("Softwares:\n1.use book[8]\n2.close[9]\n3.windows[10]\n\n\n");
	printf("Flies:\n1. *.etf(excuting flies[available])\n2. *.uef(unkown executing flies[available])\n3. *.rif(riting flies)\n4. *.csf(chest stoage flies)\n5. *.aef(all executing flies)\n6. *.rhf(rehard flies)\n7. *.exf(extra flies[like'androd devpoler brige-adb'])\n8. *.crr(crash report flies)\n9. *.erf(error flies[don't open])\n\n\n");
	printf("\n\n\n\nCopyright by grassInternet.Inc\n");
	printf("------------------------------------------\n");
}

//calculator [executing flie]
void calculator(){
	printf("scan your path!\n scan 1*1 to close!\n");
	double a,b;
	char f;
	for(;;){
		scanf("%lf%c%lf",&a,&f,&b);
		if(f == '+'){
			printf("%.4lf",a+b);
		}else if(f == '-'){
			printf("%.4lf",a-b);
		}else if(f == '*'){
			printf("%.4lf",a*b);
		}else if(f == '/'){
			printf("%.4lf",a/b);
		}else if(a == 1 && f == '*' && b == 1){
			abort();
		}
	}
	
}

//software scan
int software(){
	int s;
	for(;;){
		scanf("%d\n\n\n",&s);
		if(s == 1){
			printf("no programs");
		}else if(s == 2){
			printf("no programs");
		}else if(s == 3){
			printf("no programs");
		}else if(s == 4){
			printf("no programs");
		}else if(s == 5){
			printf("no programs");
		}else if(s == 6){
			printf("no programs");
		}else if(s == 7){
			printf("no programs");
		}else if(s == 8){
			usebook();
		}else if(s == 9){
			calculator();
		}else if(s == 10){
			
		}else{
			printf("no choose!\n");
			int d;
			scanf("%d",&d);
		}
	}
}

//windows
void windows(){
	
}

//*improtant area  
int main(){
	int a = 0;// = 1;
	if(a == 0){
		UEFI();
		Update();
		BIOS();
		formarts();
		bag();
		UUID();
		enlongin();
		start();
		desktop();
		software(); 
	}else{
		int b;
		b = enlongin();
		if(b == 0){
			int a;
			scanf("%d",a);
		}else{
			start();
		}
		desktop();
		usebook();
		
	}
	for(;;){
		software();
	} 
	return 0;
}
