#include <iostream>
#include <cstring>
using namespace std;
double amin=10000;
double loang=5000;
int pin=1234;
int passck (char[]);
int main()
{
	cout<<endl;
	int f;
	cout<<"Enter your Last name"<<endl;
	char pss[22];
	cin>>pss;
	f=passck(pss);
	if (f==1)
	{
	main:
	cout<<endl;
	cout<<"Dear "<<pss<<":"<<endl;
	cout<<"Welcome to Jazzcash App \t \t    Powered by: fb/BM Educational System"<<endl;
	cout<<"Please select a number to select the option"<<endl;
	cout<<"1.Send Money        2.Pay Bills      3.Mobiles Load "<<endl;
	cout<<"4.Rs 100 Jazz load  5.Invite & Earn  6.My account"<<endl;
	cout<<"7.Loan Details     8.Developer detail"<<endl;
	cout<<"Enter a Number"<<endl;
	int ch1;
	cin>>ch1;
		switch (ch1)
		{
			case 8:
				cout<<endl;
				cout<<"I am Muhammad Asad. I live is Mian Channu. My father is a Construction Labourer."<<endl;
				cout<<"I am studying BS Bioinformatics in COMSATS University Islamabad"<<endl;
				cout<<"Sahiwal Campus and got Talent Hunt Scholorship."<<endl;
				cout<<"I am CR of BS(BI) Batch 22."<<endl;
				cout<<endl;
				cout<<"I am certified in Digital Marketing and Creative Designing"<<endl;
				cout<<"by GOOGLE and TEVTA (Khanewal) respectively."<<endl;
				cout<<endl;
				cout<<"I am owner of youtube channel (BISE Multan Educational System)"<<endl;
				cout<<"and admin of facebook page (BM Educational System)."<<endl;
				cout<<endl;
				cout<<"I have four years teaching experience."<<endl;
				cout<<"I received PEEF Sholorships two times (9th and 11th)"<<endl;
				cout<<"and received a Laptop from BISE Mutlan."<<endl;
				cout<<endl;
				cout<<"Enter 9 to goto Main Menu of the Programe"<<endl;
									int rs2wvdx;
									cin>>rs2wvdx;
									if (rs2wvdx==9)
									goto main;
									break;
			

			case 7:
				loa:
					cout<<"1. Get Loan (Maximum RS 5000)"<<endl;
					cout<<"2. Return your Loan"<<endl;
					int loangx;
					cin>>loangx;
					if (loangx==1 && loang>=5000)
					{
					cout<<"Enter amount of Money in Rupees (Maximum = 5000)"<<endl;
					int loa;
					cin>>loa;
					if (loa<=5000)
					{
					loang=loang-loa;
					cout<<"Please enter your MPIN (4 digits)"<<endl;
					int pot;
					cin>>pot;
					if (pot==pin)
					{
					cout<<"Dear User:"<<endl;
					cout<<"Congratulations!\nYou have Received RS " <<loa<< " form developer"<<endl;
									amin=amin+loa;
									cout<<"Your Balance is: "<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rs2wdx;
									cin>>rs2wdx;
									if (rs2wdx==9)
									goto main;
	
					}
					else
					{
						cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rds2i;
									cin>>rds2i;
									if (rds2i==9)
									goto main;	
					}	
					}
					else
					{
						cout<<"Sorry! You can not take loan more than RS 5000"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rds2ic;
									cin>>rds2ic;
									if (rds2ic==9)
									goto main;	
					}
						
					}
					
					if (loangx==1 && loang<5000)
					{
						cout<<"Sorry! You can not take loan anymore"<<endl;
						cout<<"First return your previous loan"<<endl;
						cout<<endl;
						cout<<"Enter 9 to goto Main Menu of the Programe"<<endl;
									int rws2wvdx;
									cin>>rws2wvdx;
									if (rws2wvdx==9)
									goto main;

					}
					if (loangx==2 && amin>=5000)
					{
					cout<<"Enter Return Loan Money in Rupees (Maximum = 5000)"<<endl;
					int loaf;
					cin>>loaf;
					loang=loang+loaf;
					cout<<"Please enter your MPIN (4 digits)"<<endl;
					int potf;
					cin>>potf;
					if (potf==pin)
					{
					cout<<"Dear User:"<<endl;
					cout<<"Congratulations!\nYou have Successfully Returned Loan of RS " <<loaf<< " to developer"<<endl;
									amin=amin-loaf;
									cout<<"Your Balance is: "<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rs2wdxf;
									cin>>rs2wdxf;
									if (rs2wdxf==9)
									goto main;
	
					}
					else
					{
						cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rds2if;
									cin>>rds2if;
									if (rds2if==9)
									goto main;	
					}	
					}
					else
					{
						cout<<"Your account should have more than RS 5000 to return loan"<<endl;
						cout<<"Enter 9 for Restart Programe"<<endl;
									int rds2ifd;
									cin>>rds2ifd;
									if (rds2ifd==9)
									goto main;
					}
					
												break;
			case 6:
				manag:
				cout<<"1.Manage MPIN      2.Check Balance  "<<endl;
				cout<<"0.Back             9.Main Menu "<<endl;
				int pino;
				cin>>pino;
					switch (pino)
					{
					case 0:
					goto main;
					break;
					case 9:
					goto main;
					break;
					case 2:
						cout<<"Please Enter Your MPIN"<<endl;
						int you;
						cin>>you;
						if(you==pin)
								{
									cout<<"Your account Balance is: "<<amin<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int rest;
									cin>>rest;
									if (rest==9)
									goto main;
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rs2i;
									cin>>rs2i;
									if (rs2i==9)
									goto main;
								}
						break;
					case 1:
						cout<<"1.Change MPIN    2.Forgot MPIN    0.Back    9.Main Menu "<<endl; 
						int jj;
						cin>>jj;
						if (jj==0)
						goto manag;
						if(jj==9)
						goto main;
						if (jj==2)
						{
							cout<<"Please Enter CNIC Number (Last 3 digits only)"<<endl;
							double ent;
							cin>>ent;
							cout<<"Enter Date of Birth (DDMMYY) Write six digits only"<<endl;
							int date;
							cin>>date;
							cout<<"Your CNIC and Date of Birth is Received"<<endl;
							cout<<"Please wait! We will call you Soon for further process"<<endl;
							cout<<"Enter 9 to goto Main Menu"<<endl;
							int gott;
							cin>>gott;
							if (gott==9)
							goto main;
							
						}
						if (jj==1)
						{
						cout<<"Please Enter Your MPIN"<<endl;
						int pp;
						cin>>pp;
						if(pp==pin)
								{
									cout<<"Enter New MPIN (4 digits only) "<<endl;
									int pis;
									cin>>pis;
									cout<<"Re-Enter New MPIN (4 digits only) "<<endl;
									int sip;
									cin>>sip;
									if(sip==pis)
									{
										pin=sip;
										cout<<"MPIN is Successfully Changed"<<endl;
										cout<<"Press 9 to go to Main Menu"<<endl;
										int pre;
										cin>>pre;
										if (pre==9)
										goto main;
									}
									else
									cout<<"Entered MPIN is not Correct."<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int restw;
									cin>>restw;
									if (restw==9)
									goto main;	
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rsv2;
									cin>>rsv2;
									if (rsv2==9)
									goto main;
								}
								break;	
						}	
					}
					
						break;
						
			case 5:
				invit:
				cout<<"Enter Jazz Number(Last 3 digits only) Which has No JazzCash Account Before:"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								int chss4d;
								cin>>chss4d;
								
								if (chss4d==0)
								goto main;
								if (chss4d==9)
								goto main;
								else
								{
								cout<<"Re-Enter Receiver Jazz Number(Last 3 digits only):"<<endl;
								int nums2d;
								cin>>nums2d;
								if(chss4d==nums2d)
								{
									cout<<"Congratulations! You have Received Rs.500 for inviting"<<endl;
									amin=amin+500;
									cout<<"Balance is: "<<amin<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rs2dx;
									cin>>rs2dx;
									if (rs2dx==9)
									goto main;
								}
								else
								{
								cout<<"Number Does Not Match"<<endl;
									cout<<"Enter 9 for Main Menu"<<endl;
									int choxsd;
									cin>>choxsd;
									if(choxsd==9)
									goto main;	
								}		
								}
								break;
									
			case 4:
				sdd:
						cout<<"Enter Receiver Jazz Number(Last 3 digits only):"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								double chs4d;
								cin>>chs4d;
								
								if (chs4d==0)
								goto main;
								if (chs4d==9)
								goto main;
								else
								{
									recd:
								cout<<"Re-Enter Receiver Jazz Number(Last 3 digits only):"<<endl;
								int nums2d;
								cin>>nums2d;
								if(chs4d==nums2d)
								{
								
								
								cout<<"To send 100 Load to: "<<chs4d<<endl;
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int pinssd;
								cin>>pinssd;
								
								if(pinssd==pin)
								{
									
									cout<<"Congratulation! Your have successfully send Rs.100 Load: "<<endl;
									cout<<"To " <<nums2d<<endl;	
									amin=amin-100;
									cout<<"Remaining Balance is :"<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int wrest;
									cin>>wrest;
									if (wrest==9)
									goto main;
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rs2d;
									cin>>rs2d;
									if (rs2d==9)
									goto main;
								}
					
								
								}
								
								else
								{
									cout<<"Number Does Not Match"<<endl;
									cout<<"0. Back     9.Main Menu"<<endl;
									int chosd;
									cin>>chosd;
									if(chosd==0)
									goto sdd;
									if(chosd==9)
									goto main;
								}
								}
								break;
			case 3:
				menu4:
				cout<<"1.Jazz/Warid      2.Telenor         3.Zong     4.Ufone      0.Back       9.Main Menu"<<endl;
				int ja;
				cin>>ja;
				switch (ja)
				{
					case 0:
					goto main;
					break;
					case 9:
					goto main;
					break;
					case 4:
						nsr:
						cout<<"Enter Receiver Ufone Number(Last 3 digits only):"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								double chs4if;
								cin>>chs4if;
								
								if (chs4if==0)
								goto menu4;
								if (chs4if==9)
								goto main;
								else
								{
									recif:
								cout<<"Re-Enter Receiver Ufone Number(Last 3 digits only):"<<endl;
								int nums2if;
								cin>>nums2if;
								if(chs4if==nums2if)
								{
								cout<<"Enter Amount (Maximum 10000)"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								double amountsif;
								cin>>amountsif;
								
								if (amountsif==0)
								goto recif;
								if (amountsif==9)
								goto main;
								else
								{
								cout<<"To send Load to: "<<chs4if<<endl;
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int pinssif;
								cin>>pinssif;
								
								if(pinssif==pin)
								{
									cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
									cout<<amountsif<<" To " <<chs4if<<endl;	
									amin=amin-amountsif;
									cout<<"Remaining Balance is :"<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int rwest;
									cin>>rwest;
									if (rwest==9)
									goto main;
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rs2;
									cin>>rs2;
									if (rs2==9)
									goto main;
								}
					
								}	
								}
								
								else
								{
									cout<<"Number Does Not Match"<<endl;
									cout<<"0. Back     9.Main Menu"<<endl;
									int cos;
									cin>>cos;
									if(cos==0)
									goto nsr;
									if(cos==9)
									goto main;
								}
								}
								break;
					case 3:
						mr:
						cout<<"Enter Receiver Zong Number(Last 3 digits only):"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								double hs4i;
								cin>>hs4i;
								
								if (hs4i==0)
								goto menu4;
								if (hs4i==9)
								goto main;
								else
								{
									eci:
								cout<<"Re-Enter Receiver Zong Number(Last 3 digits only):"<<endl;
								int ums2i;
								cin>>ums2i;
								if(hs4i==ums2i)
								{
								cout<<"Enter Amount (Maximum 10000)"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								double mountsi;
								cin>>mountsi;
								
								if (mountsi==0)
								goto eci;
								if (mountsi==9)
								goto main;
								else
								{
								cout<<"To send Load to: "<<hs4i<<endl;
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int inssi;
								cin>>inssi;
								
								if(inssi==pin)
								{
									cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
									cout<<mountsi<<" To " <<hs4i<<endl;	
									amin=amin-mountsi;
									cout<<"Remaining Balance is :"<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int wrwest;
									cin>>wrwest;
									if (wrwest==9)
									goto main;
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int s2i;
									cin>>s2i;
									if (s2i==9)
									goto main;
								}
					
								}	
								}
								
								else
								{
									cout<<"Number Does Not Match"<<endl;
									cout<<"0. Back     9.Main Menu"<<endl;
									int hosi;
									cin>>hosi;
									if(hosi==0)
									goto mr;
									if(hosi==9)
									goto main;
								}
								}
								break;
					case 2:
						nur:
						cout<<"Enter Receiver Telenor Number(Last 3 digits only):"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								double chs4i;
								cin>>chs4i;
								
								if (chs4i==0)
								goto menu4;
								if (chs4i==9)
								goto main;
								else
								{
									reci:
								cout<<"Re-Enter Receiver Telenor Number(Last 3 digits only):"<<endl;
								int nums2i;
								cin>>nums2i;
								if(chs4i==nums2i)
								{
								cout<<"Enter Amount (Maximum 10000)"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								double amountsi;
								cin>>amountsi;
								
								if (amountsi==0)
								goto reci;
								if (amountsi==9)
								goto main;
								else
								{
								cout<<"To send Load to: "<<chs4i<<endl;
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int pinssi;
								cin>>pinssi;
								
								if(pinssi==pin)
								{
									cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
									cout<<amountsi<<" To " <<chs4i<<endl;
									amin=amin-amountsi;
									cout<<"Remaining Balance is :"<<amin<<endl;
									cout<<endl;	
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int rwwest;
									cin>>rwwest;
									if (rwwest==9)
									goto main;
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rs2i;
									cin>>rs2i;
									if (rs2i==9)
									goto main;
								}
					
								}	
								}
								
								else
								{
									cout<<"Number Does Not Match"<<endl;
									cout<<"0. Back     9.Main Menu"<<endl;
									int chosi;
									cin>>chosi;
									if(chosi==0)
									goto nur;
									if(chosi==9)
									goto main;
								}
								}
								break;
					case 1:
						sd:
						cout<<"Enter Receiver Jazz Number(Last 3 digits only):"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								double chs4;
								cin>>chs4;
								
								if (chs4==0)
								goto menu4;
								if (chs4==9)
								goto main;
								else
								{
									rec:
								cout<<"Re-Enter Receiver Jazz Number(Last 3 digits only):"<<endl;
								int nums2;
								cin>>nums2;
								if(chs4==nums2)
								{
								cout<<"Enter Amount (Maximum 10000)"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								double amounts;
								cin>>amounts;
								
								if (amounts==0)
								goto rec;
								if (amounts==9)
								goto main;
								else
								{
								cout<<"To send Load to: "<<chs4<<endl;
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int pinss;
								cin>>pinss;
								
								if(pinss==pin)
								{
									cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
									cout<<amounts<<" To " <<chs4<<endl;	
									amin=amin-amounts;
									cout<<"Remaining Balance is :"<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int rweest;
									cin>>rweest;
									if (rweest==9)
									goto main;	
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int rs2;
									cin>>rs2;
									if (rs2==9)
									goto main;
								}
					
								}	
								}
								
								else
								{
									cout<<"Number Does Not Match"<<endl;
									cout<<"0. Back     9.Main Menu"<<endl;
									int chos;
									cin>>chos;
									if(chos==0)
									goto sd;
									if(chos==9)
									goto main;
								}
								}
								break;
						
				}
			case 2:
			elec:
				cout<<"1.Electricity    2.Gas    3.Water    0.Back     9.Main Menu"<<endl;
				int ele;
				cin>>ele;
				if (ele==0)
				goto main;
				if (ele==9)
				goto main;
				else
				switch(ele)
				{
				case 3:
					cout<<"1.KWSB   2. LWASA   3. RWASA"<<endl;
					cout<<"0.Back   9.Main Menu"<<endl;
					int kww;
					cin>>kww;
					if(kww==0)
					goto elec;
					if (kww==9)
					goto main;
					else
					{
					cout<<"Please Enter the (Last 3 digits only) of Consumer Number"<<endl;
					int conw;
					cin>>conw;
					cout<<"Your Water bill is 1005 Rupees"<<endl;
					cout<<"Your Account is ready to Pay"<<endl;
					cout<<"Please Enter 4 digits MPIN"<<endl;
								int pinqw352;
								cin>>pinqw352;
								
								if(pinqw352==pin)
								{
								cout<<"Congratulation! Your have successfully Pay the Bill "<<endl;
								amin=amin-1005;
								cout<<"Remaining Balance is :"<<amin<<endl;
								cout<<endl;
								cout<<"Enter 9 to Restart the Programe"<<endl;
									int zrwest;
									cin>>zrwest;
									if (zrwest==9)
									goto main;
					            }
								
			                	else
				            	{
					        	cout<<"Dear User, MPIN is not correct"<<endl;
					           	cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
					         	cout<<"Enter 9 for Restart Programe"<<endl;
									int raw4;
									cin>>raw4;
									if (raw4==9)
									goto main;
								}
					}
	
					break;
				case 2:
				gas:
					cout<<"1. SSGC    2.SNGPL"<<endl;
					cout<<"0.Back     9.Main Menu"<<endl;
					int gaas;
					cin>>gaas;
					if(gaas==0)
					goto elec;
					if(gaas==9)
					goto main;
					else
					{
						cout<<"Enter (Last 3 digits only) Gass Customer Number"<<endl;
						int didi;
						cin>>didi;
						cout<<"Your Gas Bill is 980"<<endl;
						cout<<"Your account is Ready to Pay"<<endl;
					cout<<"Please Enter 4 digits MPIN"<<endl;
								int pinq352;
								cin>>pinq352;
								
								if(pinq352==pin)
								{
								cout<<"Congratulation! Your have successfully Pay the Bill "<<endl;
								amin=amin-980;
								cout<<"Remaining Balance is :"<<amin<<endl;
								cout<<endl;
								cout<<"Enter 9 to Restart the Programe"<<endl;
									int crwest;
									cin>>crwest;
									if (crwest==9)
									goto main;
					            }
								
			                	else
				            	{
					        	cout<<"Dear User, MPIN is not correct"<<endl;
					           	cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
					         	cout<<"Enter 9 for Restart Programe"<<endl;
									int ra4;
									cin>>ra4;
									if (ra4==9)
									goto main;
								}
				}
					
					break;
				
				
				case 1:
						meep:
						cout<<"1.MEPCO     2.KESC"<<endl;
						cout<<"0.Back      9.Main Menu"<<endl;
						int mep;
						cin>>mep;
						if (mep==0)
						goto elec;
						if (mep==9)
						goto main;
						else
						{
						cout<<"Enter (Last 3 digits only) Refference Code"<<endl;
						cout<<"0.Back     9.Main Menu"<<endl;
						double reff;
						cin>>reff;
						if (reff==0)
						goto meep;
						if (reff==9)
						goto main;
						else
						{
						cout<<"Your Bill is 189 Ruppees"<<endl;
						cout<<"Please Enter 4 digits MPIN"<<endl;
								int pin352;
								cin>>pin352;
								
								if(pin352==pin)
								{

								cout<<"Congratulation! Your have successfully Pay the Bill "<<endl;
								amin=amin-189;
								cout<<"Remaining Balance is :"<<amin<<endl;
								cout<<endl;
								cout<<"Enter 9 to Restart the Programe"<<endl;
									int drwest;
									cin>>drwest;
									if (drwest==9)
									goto main;
					            }
								
			                	else
				            	{
					        	cout<<"Dear User, MPIN is not correct"<<endl;
					           	cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
					         	cout<<"Enter 9 for Restart Programe"<<endl;
									int r4;
									cin>>r4;
									if (r4==9)
									goto main;
								}
									
						}	
						}
						break;
					
			}
						
		case 1:
		back1:
		cout<<"1.To Mobile Account    2. To CNIC    3. To Bank    0.Back    9. Main Menu"<<endl;
		int ch2;
		cin>>ch2;
		switch (ch2)
			{
			case 0:
				goto main;
				break;
			case 9:
				goto main;
				break;
		
			case 1:
					menu3:
					cout<<"1.To JazzCash   2.To Easypaise   3.Upaisa    0.Back    9.Main Menu"<<endl;
					int ch3;
					cin>>ch3;
					switch(ch3)
						{
						case 0:
							goto back1;
						case 9:
							goto main;
						case 1:
							numr:
								cout<<"Enter Receiver JazzCash account Number (Last 3 digits only):"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								double ch4;
								cin>>ch4;
								
								if (ch4==0)
								goto menu3;
								if (ch4==9)
								goto main;
								else
								{
								cout<<"Re-Enter Receiver JazzCash account Number(Last 3 digits only):"<<endl;
								int num2;
								cin>>num2;
								if(ch4==num2)
								{
								cout<<"Enter Amount (Maximum 10000)"<<endl;
								cout<<"0.Back     9.Main Menu"<<endl;
								double amount;
								cin>>amount;
								
								if (amount==0)
								goto numr;
								if (amount==9)
								goto main;
								else
								{
								cout<<"To send Money to: "<<ch4<<endl;
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int pinz;
								cin>>pinz;
								
								if(pinz==pin)
								{
									cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
									cout<<amount<<" To " <<ch4<<endl;
									amin=amin-amount;
									cout<<"Remaining Balance is :"<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int rwfest;
									cin>>rwfest;
									if (rwfest==9)
									goto main;	
									
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int r2;
									cin>>r2;
									if (r2==9)
									goto main;
								}
					
								}	
								}
								
								else
								{
									cout<<"Number Does Not Match"<<endl;
									cout<<"0. Back     9.Main Menu"<<endl;
									int cho;
									cin>>cho;
									if(cho==0)
									goto numr;
									if(cho==9)
									goto main;
								}
								}
								break;
									
							case 2:
								nmr:
								cout<<"Enter Receiver EasyPaise account Number(Last 3 digits only):"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								double ch5;
								cin>>ch5;
								
								if (ch5==0)
								goto menu3;
								if (ch5==9)
								goto main;
								else
								{
								cout<<"Re-Enter Receiver EasyPaise account Number(Last 3 digits only):"<<endl;
								int nm2;
								cin>>nm2;
								if(ch5==nm2)
								{
								cout<<"Enter Amount (Maximum 10000)"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								double amont;
								cin>>amont;
								
								if (amont==0)
								goto nmr;
								if (amont==9)
								goto main;
								else
								{
								cout<<"To send Money to: "<<ch5<<endl;
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int pn;
								cin>>pn;
								
								if(pn==pin)
								{
									cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
									cout<<amont<<" To " <<ch5<<endl;
									amin=amin-amont;
									cout<<"Remaining Balance is :"<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int rwenst;
									cin>>rwenst;
									if (rwenst==9)
									goto main;	
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int r1;
									cin>>r1;
									if (r1==9)
									goto main;
								}
					
								}	
								}
								
								else
								{
									cout<<"Number Does Not Match"<<endl;
									cout<<"0. Back     9.Main Menu"<<endl;
									int choi;
									cin>>choi;
									if(choi==0)
									goto nmr;
									if(choi==9)
									goto main;
								}
								}
								break;
							case 3:
								nr:
								cout<<"Enter Receiver Upaisa account Number(Last 3 digits only):"<<endl;
								cout<<"0.Back    9.Main Menu"<<endl;
								double ch6;
								cin>>ch6;
								
								if (ch6==0)
								goto menu3;
								if (ch6==9)
								goto main;
								else
								{
								cout<<"Re-Enter Receiver Upasia account Number(Last 3 digits only):"<<endl;
								int n2;
								cin>>n2;
								if(ch6==n2)
								{
								cout<<"Enter Amount (Maximum 10000)"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								double amnt;
								cin>>amnt;
								
								if (amnt==0)
								goto nr;
								if (amnt==9)
								goto main;
								else
								{
								cout<<"To send Money to: "<<ch6<<endl;
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int p;
								cin>>p;
								
								if(p==pin)
								{
									cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
									cout<<amnt<<" To " <<ch6<<endl;
									amin=amin-amnt;
									cout<<"Remaining Balance is :"<<amin<<endl;
									cout<<endl;
									cout<<"Enter 9 to Restart the Programe"<<endl;
									int rwesmt;
									cin>>rwesmt;
									if (rwesmt==9)
									goto main;	
								}
								
								else
								{
									cout<<"Dear User, MPIN is not correct"<<endl;
									cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
									cout<<"Enter 9 for Restart Programe"<<endl;
									int r;
									cin>>r;
									if (r==9)
									goto main;
									
								}
					
								}	
								}
								
								else
								{
									cout<<"Number Does Not Match"<<endl;
									cout<<"0. Back     9.Main Menu"<<endl;
									int choi6;
									cin>>choi6;
									if(choi6==0)
									goto nr;
									if(choi6==9)
									goto main;
								}
								}
								break;
							}
							break;
			case 2:
				cnic1:
				cout<<"Enter Receive CNIC (Last 3 digits only)"<<endl;
				cout<<"0.Back    9.Main Menu"<<endl;
				int ch8;
				cin>>ch8;
				if(ch8==0)
				goto back1;
				if(ch8==9)
				goto main;
				else
				{
				cout<<"Re Enter Receive CNIC (Last 3 digits only)"<<endl;
				long double cnic;
				cin>>cnic;


				if(cnic!=ch8)
				{
				cout<<"CNIC do not Match"<<endl;
				goto cnic1;	
				}
				mobil:
				cout<<"Enter Receive Mobile Number (Last 3 digits only)"<<endl;
				cout<<"0.Back     9.Main Menu"<<endl;
				long double mobi;
				cin>>mobi;
			
				if (mobi==0)
				goto cnic1;
				if (mobi==9)
				goto main;
				else
				{
				cout<<"Enter Amount (Maximum 10000)"<<endl;
				cout<<"0.Back      10.Main Menu"<<endl;
				int amount3;
				cin>>amount3;
				
				if (amount3==0)
				goto mobil;
				if (mobi==9)
				goto main;
				cout<<"To send Money to: "<<mobi<<endl;
				cout<<"Please Enter 4 digits MPIN"<<endl;
				int pin3;
				cin>>pin3;
								
				if(pin3==pin)
					{
						cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
						cout<<amount3<<" To " <<cnic<<endl;
						amin=amin-amount3;
						cout<<"Remaining Balance is :"<<amin<<endl;
						cout<<endl;
						cout<<"Enter 9 to Restart the Programe"<<endl;
									int rwvest;
									cin>>rwvest;
									if (rwvest==9)
									goto main;	
					}
								
				else
					{
						cout<<"Dear User, MPIN is not correct"<<endl;
						cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
						cout<<"Enter 9 for Restart Programe"<<endl;
									int r3;
									cin>>r3;
									if (r3==9)
									goto main;
					}
								
						
				}
					
				}
				break;
			case 3:
				bank:
					cout<<"1.Select Bank     0.Back     9.Main Menu"<<endl;
					int ban;
					cin>>ban;
					if (ban==0)
					goto back1;
					if (ban==9)
					goto main;
					else
					{
						dh:
						cout<<"Choose the Bank"<<endl;
						cout<<"1.HBL       2.MCB         3.UBL          4.Meezan"<<endl;
						cout<<"5.Allied    6.Alhabib     7.StanChart    8.Alfalah"<<endl;
						cout<<"0. Back     9.Main Menu"<<endl;
						int bankc;
						cin>>bankc;
						if(bankc==0)
						goto bank;
						if(bankc==9)
						goto main;
						else 
						{
						acd:
								cout<<"Enter (Last 3 digits only) of Bank Account Number"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								double acc;
								cin>>acc;
								if (acc==0)
								goto dh;
								if (acc==9)
								goto main;
								else
								{
								amon:
								cout<<"Enter Amount in Rs (Max=10000)"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								int ano;
								cin>>ano;
								if (ano==0)
								goto acd;
								if (ano==9)
								goto main;
								else
								{
								mob:
								cout<<"Enter Receiver Mobile Number (Last 3 digits only)"<<endl;
								cout<<"0.Back      9.Main Menu"<<endl;
								double mn;
								cin>>mn;
								if (mn==0)
								goto amon;
								if (mn==9)
								goto main;
								else
								{
								cout<<"Enter Purpose of Payment"<<endl;
								cout<<"1.Faimly support            2.Educational Payments"<<endl;
								cout<<"3.Utality Bill Payments     4. Medical Payments"<<endl;
								cout<<"5.Transport Payments        6.Salary disbursements"<<endl;
								cout<<"0.Back                      9.Main Menu"<<endl;
								int pur5; 
								cin>>pur5;
								if(pur5==0)
								goto mob;
								if (pur5==9)
								goto main;
								else
								{
								cout<<"Please Enter 4 digits MPIN"<<endl;
								int pin35;
								cin>>pin35;
								
								if(pin35==pin)
								{
								cout<<"Congratulation! Your have successfully send Rs.: "<<endl;
								cout<<ano<<" To " <<acc<<endl;
								amin=amin-ano;
								cout<<"Remaining Balance is :"<<amin<<endl;
								cout<<endl;
								cout<<"Enter 9 to Restart the Programe"<<endl;
									int rwegst;
									cin>>rwegst;
									if (rwegst==9)
									goto main;
					            }
								
			                	else
				            	{
					        	cout<<"Dear User, MPIN is not correct"<<endl;
					           	cout<<"If you do not Remember, Please Call on 03058982799 for help"<<endl;
					         	cout<<"Enter 9 for Restart Programe"<<endl;
									int r4;
									cin>>r4;
									if (r4==9)
									goto main;
									
								}	
								}
								
								
								}	
								}	
								}	
						}
						
								
								
								
								
								
								
								
						
						}
				break;	
					}
					break;
						
		
			}
	}
		}
int passck(char[])
{
	int flag;
	int n=1;
	rep:
	char password [22]="asadhiraj";
	char password1 [22];
	cout<<"Please Enter the password"<<endl;
	cin>>password1;
	if(strcmp(password,password1)==0)
	{
	cout<<"Password is correct!"<<endl;
	flag=1;
	}
	else
	{
	cout<<"Password is incorrect!"<<endl;
	n++;
	if (n<=3)
	{
	goto rep;	
	}
	}
	return flag;
}		
		
	
				
				
			
	
						
			



			
	

