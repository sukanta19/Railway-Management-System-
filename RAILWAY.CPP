/* Project Title      :   RAILWAY MANAGEMENT SYSTEM - 2018
   Environment Used   :   Turbo C++ Version 3.0
   Authors            :   JYOTIRMOY KUNDU
*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>



class Train
      {

	  char tr_no[6];
	  char tr_name[20];
	  char tr_start[20];
	  char tr_ddate[11];
	  char tr_dtime[6];
	  char tr_destination[20];
	  char tr_adate[11];
	  char tr_atime[6];
	  int  tr_seats;
	  int  tr_fare;

	  public:
		 Train(Train &obj)
		 {

		   strcpy(tr_no,obj.tr_no);
		   strcpy(tr_name,obj.tr_name);
		   strcpy(tr_start,obj.tr_start);
		   strcpy(tr_ddate,obj.tr_ddate);
		   strcpy(tr_dtime,obj.tr_dtime);
		   strcpy(tr_destination,obj.tr_destination);
		   strcpy(tr_adate,obj.tr_destination);
		   strcpy(tr_atime,obj.tr_atime);
		   tr_seats=obj.tr_seats;
		   tr_fare=obj.tr_fare;
		 }
		 Train()
		 {

		 }
		 void getTrainDetails();
		 void displayTrainDetails();
		 void writeTrainDetails();
		 void ListAllTrainDetails();
		 void TrainSearch();
		 void TrainModification();
		 void TrainDeletion();
		 void ticket_Seat_updation(char *st,int num);
		 char * getTrainNumber()
		 {
		   return tr_no;
		 }
		 int getTrainSeats()
		 {
		  return tr_seats;
		 }
		 void seatUpdation(int stno)
		 {
		   tr_seats-=stno;

		 }


      };

//--------------------------------------------------------------------------

class ticket
      {

	char bk_ticket_no[6];
	char bk_trno[6];
	char bk_name[20];
	char bk_add[20];
	char bk_phno[12];
	char bk_sex;
	int age;
	public:
	       void get_ticket();
	       void ticket_Booking();
	       int  ticket_availabilty(char *tno,int n);
	       void ticket_cancel();
	       void list_ticket();
	       void displayTicket();
	       void ticketSearch();
	       char * get_ticket_no()
	       {
		 return bk_ticket_no;
	       }
	       char * getBook_trno()
	       {
		 return bk_trno;
	       }

      };

//---------------------------------------------------------------------------

void prog_loading();
void pass_word();
void help();


void main()
{
   prog_loading();
   pass_word();
   //remove("Train.dat");           //command for deletion of file Train.dat
   //remove("ticket.dat");          //command for deletion of file ticket.dat
   Train obj;
   ticket tobj;
   int opt;

   int r,c;
   int Rcur,Ccur;
   int t=75;
   do
   {
	r=2;c=12;
	clrscr();
	gotoxy(c,r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);delay(t);
	cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);delay(t);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶韶韶韶    MAIN MENU    韶韶韶韶韶韶韶韶韶�  �";gotoxy(c,++r);delay(t);
	cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);delay(t);
	cout<<"�  Add New Train........................................1  �";gotoxy(c,++r);delay(t);
	cout<<"�  Search Train.........................................2  �";gotoxy(c,++r);delay(t);
	cout<<"�  List of All Trains...................................3  �";gotoxy(c,++r);delay(t);
	cout<<"�  Train Modification...................................4  �";gotoxy(c,++r);delay(t);
	cout<<"�  Train Deletion.......................................5  �";gotoxy(c,++r);delay(t);
	cout<<"�  Ticket Booking.......................................6  �";gotoxy(c,++r);delay(t);
	cout<<"�  Ticket View..........................................7  �";gotoxy(c,++r);delay(t);
	cout<<"�  List All Tickets.....................................8  �";gotoxy(c,++r);delay(t);
	cout<<"�  Ticket Cancelation...................................9  �";gotoxy(c,++r);delay(t);
	cout<<"�  Help................................................10  �";gotoxy(c,++r);delay(t);
	cout<<"�  Exit.................................................0  �";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶� �";gotoxy(c,++r);delay(t);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);delay(t);
	Rcur=r;
	Ccur=c+30;
	cout<<"�  Your Option Please[0-10] :                              �";gotoxy(c,++r);delay(t);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);delay(t);
	gotoxy(Ccur,Rcur);
	cin>>opt;

      switch(opt)
      {

	case 1:
		obj.writeTrainDetails();
		break;
	case 2:
		clrscr();
		obj.TrainSearch();
		break;
	case 3:
		clrscr();
		obj.ListAllTrainDetails();
		break;
	case 4:
		clrscr();
		obj.TrainModification();
		break;
	case 5:
		clrscr();
		obj.TrainDeletion();
		break;
	case 6:
		clrscr();
		tobj.ticket_Booking();
		break;

	case 7:
		clrscr();
		tobj.ticketSearch();
		break;
	case 8:
		clrscr();
		tobj.list_ticket();
		break;
	case 9:
		clrscr();
		tobj.ticket_cancel();
		break;
	case 10:
		clrscr();
		help();
		break;
	case 0:
		exit(0);

	default:

	cout<<"\a";
	gotoxy(c,++r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
	cout<<"�            Invalid Option..!! Press Any Key..            �";gotoxy(c,++r);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";

      }//end of switch
     getch();
   }while(1);

 }//end of main

//===========================================================================

void Train::getTrainDetails()     //function for input of Train details
{

	int r=2,c=12,Rcur,Ccur,t=75;
	clrscr();
	gotoxy(c,r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);delay(t);
	cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);delay(t);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶�    �� Train Entry Form ��  韶韶韶韶韶韶�  �";gotoxy(c,++r);delay(t);
	cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);delay(t);
	Rcur=r;
	cout<<"�  Train Number        :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Train Name          :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Departure Places    :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Departure Date      :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Departure Time      :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Destination         :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Arrival Date        :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Arrival Time        :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Number of Seats     :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Train Fare          :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶  �";gotoxy(c,++r);delay(t);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);delay(t);
	Ccur=c+26;
	gotoxy(Ccur,Rcur);
	gets(tr_no);
	gotoxy(Ccur,++Rcur);
	gets(tr_name);
	gotoxy(Ccur,++Rcur);
	gets(tr_start);
	gotoxy(Ccur,++Rcur);
	gets(tr_ddate);
	gotoxy(Ccur,++Rcur);
	gets(tr_dtime);
	gotoxy(Ccur,++Rcur);
	gets(tr_destination);
	gotoxy(Ccur,++Rcur);
	gets(tr_adate);
	gotoxy(Ccur,++Rcur);
	gets(tr_atime);
	gotoxy(Ccur,++Rcur);
	cin>>tr_seats;
	gotoxy(Ccur,++Rcur);
	cin>>tr_fare;
}

//===========================================================================

void Train ::displayTrainDetails()       // function for display of Trains
{
	int r=2,c=12,Rcur,Ccur,t=75;
	clrscr();
	gotoxy(c,r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);delay(t);
	cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);delay(t);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶� 臼 �� Train Details �� 臼�  韶韶韶韶韶韶  �";gotoxy(c,++r);delay(t);
	cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);delay(t);
	Rcur=r;
	cout<<"�  Train Number        :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Train Name          :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Departure Places    :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Departure Date      :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Departure Time      :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Destination         :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Arrival Date        :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Arrival Time        :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Number of Seats     :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Train Fare          :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶  �";gotoxy(c,++r);delay(t);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);delay(t);
	Ccur=c+26;
	gotoxy(Ccur,Rcur);
	cout<<tr_no;
	gotoxy(Ccur,++Rcur);
	cout<<tr_name;
	gotoxy(Ccur,++Rcur);
	cout<<tr_start;
	gotoxy(Ccur,++Rcur);
	cout<<tr_ddate;
	gotoxy(Ccur,++Rcur);
	cout<<tr_dtime;
	gotoxy(Ccur,++Rcur);
	cout<<tr_destination;
	gotoxy(Ccur,++Rcur);
	cout<<tr_adate;
	gotoxy(Ccur,++Rcur);
	cout<<tr_atime;
	gotoxy(Ccur,++Rcur);
	cout<<tr_seats;
	gotoxy(Ccur,++Rcur);
	cout<<tr_fare;

}

//===========================================================================

void Train ::writeTrainDetails()     // function for writing Train details to file, Train.dat
{
  Train obj;
  char ch;
  int c=12,r=18,Ccur,Rcur;
  fstream fp;
  fp.open("Train.dat",ios::binary|ios::in);

  if(fp)
  {
     fp.close();
     fp.open("Train.dat",ios::binary|ios::app);

  }
  else
  {
    fp.close();
    fp.open("Train.dat",ios::binary|ios::out);
  }

  do
  {
    obj.getTrainDetails();
    fp.write((char *)&obj,sizeof(obj));

    cout<<"\a";
    c=12;r=19;
    gotoxy(c,++r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    cout<<"�              One Record Successfully Added...            �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";

    gotoxy(c,++r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    Rcur=r;
    cout<<"�          Do You Want To Add Another? [Y/N] :             �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";

    Ccur=c+48;
    fflush(stdin);
    gotoxy(Ccur,Rcur);
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
      continue;
    }
    else
    {
      fp.close();
      break;
    }
  }while(1);
}

//===========================================================================

void Train ::ListAllTrainDetails()         // funtion for viewing all Trains
{
  int cn=12,rn=10,CNcur,RNcur;
  Train obj;
  char ch;
  fstream fp;
  fp.open("Train.dat",ios::binary|ios::in);

  if(!fp)
  {
    fp.close();

    cout<<"\a";
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    return;
  }

  while(fp)
  {
    int c=12,r=20,Ccur,Rcur;

    fp.read((char *)&obj,sizeof(obj));
    if(fp.eof())
    break;
    obj.displayTrainDetails();

    gotoxy(c,++r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    Rcur=r;
    cout<<"�     Press Any Key To View Next [X To Stop] :             �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";

    Ccur=c+47;

    fflush(stdin);
    gotoxy(Ccur,Rcur);
    ch=getche();
    if(ch=='x' || ch=='X')
    {
      fp.close();
      break;
    }
  }
}

//==========================================================================

void Train::TrainSearch()       //function for searching a particular Train by using Train no.
{
  int cn=12,rn=7,CNcur,RNcur;
  Train obj;
  char ch;
  char trno[6];
  int flag;
  fstream fp;
  fp.open("Train.dat",ios::binary|ios::in);

  if(!fp)
  {
    fp.close();

    cout<<"\a";
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    return;
  }

    gotoxy(cn,++rn);

    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(cn,++rn);
    cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(cn,++rn);
    cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�       Enter The Train Number To Search :                 �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+43;
    gotoxy(CNcur,RNcur);


  gets(trno);
  flag=0;
  while(fp)
  {

    fp.read((char *)&obj,sizeof(obj));
    if(fp.eof())
    break;
    if(strcmpi(obj.getTrainNumber(),trno)==0)
    {
     obj.displayTrainDetails();
     flag=1;
     fp.close();
     break;
    }
  }
    if(flag==0)
    {


    cout<<"\a";
    rn=rn+3;
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�        Train Number Not Found..!! Press Any Key...       �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+51;
    gotoxy(CNcur,RNcur);
    }
}

//============================================================================

void Train::TrainModification()           // funtion for Train modification
{
  int cn=12,rn=7,CNcur,RNcur;
  Train obj;
  char ch;
  char trno[6];
  int flag;
  fstream fp,fptmp;
  fp.open("Train.dat",ios::binary|ios::in);

  if(!fp)
  {
    fp.close();

    cout<<"\a";
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    return;
  }

    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(cn,++rn);
    cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(cn,++rn);
    cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�      Enter The Train Number To Modify :                  �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+42;
    gotoxy(CNcur,RNcur);

  gets(trno);
  flag=0;
  while(fp)
  {
    fp.read((char *)&obj,sizeof(obj));
    if(fp.eof())
    break;
    if(strcmpi(obj.getTrainNumber(),trno)==0)
    {
     flag=1;
     fp.close();
     break;
    }
  }

    if(flag==0)
    {

    cout<<"\a";
    rn=rn+3;
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�        Train Number Not Found..!! Press Any Key...       �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+51;
    gotoxy(CNcur,RNcur);
    return;
    }

    clrscr();

    gotoxy(cn,rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    cout<<"�           Press Any Key To View Current Record           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    getch();
    obj.displayTrainDetails();

    getch();
    clrscr();


  fp.close();
  fptmp.open("tmpTrain.dat",ios::binary|ios::out);
  fp.open("Train.dat",ios::binary|ios::in);

  while(fp)
  {

    fp.read((char *)&obj,sizeof(obj));
    if(fp.eof())
    break;

    if(strcmpi(obj.getTrainNumber(),trno)!=0)
    {
     fptmp.write((char *)&obj,sizeof(obj));
    }
  }

  fp.close();
  fptmp.close();
  remove("Train.dat");
  rename("tmpTrain.dat","Train.dat");
  fp.open("Train.dat",ios::binary|ios::app);
  obj.getTrainDetails();
  fp.write((char *)&obj,sizeof(obj));

  fp.close();
    cout<<"\a";
    cn=12;
    rn=20;
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�              Record Successfully Modified!               �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+44;
    gotoxy(CNcur,RNcur);

}

//============================================================================

void Train::TrainDeletion()          // funtion for deletion of a Train record
{
  int cn=12,rn=8,CNcur,RNcur,c,r;
  Train obj;
  char ch;
  char trno[6];
  int flag;
  fstream fp,fptmp;
  fp.open("Train.dat",ios::binary|ios::in);

  if(!fp)
  {
    fp.close();


    cout<<"\a";
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    return;
  }



    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(cn,++rn);
    cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(cn,++rn);
    cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�       Enter Train Number To Delete :                     �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+40;
    gotoxy(CNcur,RNcur);

  gets(trno);
  flag=0;
  while(fp)
  {
    fp.read((char *)&obj,sizeof(obj));
    if(fp.eof())
    break;
    if(strcmpi(obj.getTrainNumber(),trno)==0)
    {
     flag=1;
     fp.close();
     break;
    }
  }

    if(flag==0)
    {


    cout<<"\a";
    rn=rn+3;
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�        Train Number Not Found..!! Press Any Key...       �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+51;
    gotoxy(CNcur,RNcur);
    return;
    }


    clrscr();

    gotoxy(cn,rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    cout<<"�         The Current Record  Is (Press Any Key) :         �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";

    getch();
    clrscr();

    obj.displayTrainDetails();


    cn=12;rn=21;
    gotoxy(cn,rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�             Confirm? Press [Y/N] :                       �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+39;
    gotoxy(CNcur,RNcur);
    cin>>ch;
    if(ch!='y' && ch!='Y')
    {
      return;
    }

    clrscr();


  fp.close();
  fptmp.open("tmpTrain.dat",ios::binary|ios::out);
  fp.open("Train.dat",ios::binary|ios::in);

  while(fp)
  {

    fp.read((char *)&obj,sizeof(obj));
    if(fp.eof())
    break;

    if(strcmpi(obj.getTrainNumber(),trno)!=0)
    {
     fptmp.write((char *)&obj,sizeof(obj));
    }
  }

  fp.close();
  fptmp.close();


  remove("Train.dat");
  rename("tmpTrain.dat","Train.dat");
  fp.open("Train.dat",ios::binary|ios::app);

  fp.close();

    c=12;r=7;

    cout<<"\a\a\a";
    clrscr();
    gotoxy(c,++r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);
    cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);
    cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);
    RNcur=r;
    cout<<"�              Record Successfully Deleted!!               �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=c+44;
    gotoxy(CNcur,RNcur);
}

void Train::ticket_Seat_updation(char *trno,int num)
{
  Train obj,tmpobj2;
  char ch;
  int flag;
  fstream fp,fptmp;
  fp.open("Train.dat",ios::binary|ios::in);

  if(!fp)
  {
    int cn=12,rn=10,CNcur,RNcur;

    fp.close();

    cout<<"\a";
    gotoxy(cn,rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    return;
  }


  fp.close();
  fptmp.open("tmpTrain.dat",ios::binary|ios::out);
  fp.open("Train.dat",ios::binary|ios::in);

  while(fp)
  {

    fp.read((char *)&obj,sizeof(obj));
    if(fp.eof())
    break;

    if(strcmpi(obj.getTrainNumber(),trno)!=0)
    {
     fptmp.write((char *)&obj,sizeof(obj));
    }
    else
    {
       tmpobj2=obj;
    }
  }

  Train tmpobj(tmpobj2);

  fp.close();
  fptmp.close();
  remove("Train.dat");
  rename("tmpTrain.dat","Train.dat");
  fp.open("Train.dat",ios::binary|ios::app);
  tmpobj.seatUpdation(num);
  fp.write((char *)&tmpobj,sizeof(tmpobj));
  fp.close();
}

//===========================================================================
//===========================================================================
//===========================================================================

void ticket::get_ticket()                   // funtion for entry of tickets
{


	int r=2,c=12,Rcur,Ccur,t=75;
	clrscr();
	gotoxy(c,r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);delay(t);
	cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);delay(t);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶�    �� Ticket Booking ��    韶韶韶韶韶韶�  �";gotoxy(c,++r);delay(t);
	cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);delay(t);
	Rcur=r;
	cout<<"�  Ticket Number       :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Train Number        :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Passenger Name      :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Address             :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Sex                 :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Age                 :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Ph no.              :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶  �";gotoxy(c,++r);delay(t);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);delay(t);
	Ccur=c+25;
	gotoxy(Ccur,Rcur);
	gets(bk_ticket_no);
	gotoxy(Ccur,++Rcur);
	gets(bk_trno);
	gotoxy(Ccur,++Rcur);
	gets(bk_name);
	gotoxy(Ccur,++Rcur);
	gets(bk_add);
	gotoxy(Ccur,++Rcur);
	cin>>bk_sex;
	gotoxy(Ccur,++Rcur);
	cin>>age;
	gotoxy(Ccur,++Rcur);
	gets(bk_phno);
	gotoxy(Ccur,++Rcur);

}

//===========================================================================
void ticket::displayTicket()               // funtion for ticket display
{



	int r=2,c=12,Rcur,Ccur,t=75;
	clrscr();
	gotoxy(c,r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);delay(t);
	cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);delay(t);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶�    �� Ticket Booking ��    韶韶韶韶韶韶�  �";gotoxy(c,++r);delay(t);
	cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);delay(t);
	Rcur=r;
	cout<<"�  Ticket Number       :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Train Number        :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Passenger Name      :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Address             :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Sex                 :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Age                 :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  Ph no.              :                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶  �";gotoxy(c,++r);delay(t);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);delay(t);
	Ccur=c+25;
	gotoxy(Ccur,Rcur);
	cout<<bk_ticket_no;
	gotoxy(Ccur,++Rcur);
	cout<<bk_trno;
	gotoxy(Ccur,++Rcur);
	cout<<bk_name;
	gotoxy(Ccur,++Rcur);
	cout<<bk_add;
	gotoxy(Ccur,++Rcur);
	cout<<bk_sex;
	gotoxy(Ccur,++Rcur);
	cout<<age;
	gotoxy(Ccur,++Rcur);
	cout<<bk_phno;
	gotoxy(Ccur,++Rcur);

	getch();
}



int ticket::ticket_availabilty(char *tno,int n)
{
  int cn=12,rn=10,RNcur,CNcur;
  Train obj;
  char ch;
  char trno[6];
  int flag;
  fstream fp;
  fp.open("Train.dat",ios::binary|ios::in);

  if(!fp)
  {
    fp.close();

    cout<<"\a";
    clrscr();
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    getch();
    return 0;
  }

  flag=0;
  while(fp)
  {

    fp.read((char *)&obj,sizeof(obj));
    if(fp.eof())
    break;
    if(strcmpi(obj.getTrainNumber(),tno)==0 && obj.getTrainSeats()>=n)
    {

     flag=1;
     fp.close();
     break;
    }
  }

  return flag;
}

//==========================================================================

void ticket ::ticket_Booking()       // funtion for pre ticket booking avaibility check
{                                    // and writing ticket details data into file, ticket.dat
   int c=12,r=5,Ccur,Rcur;

   Train obj;
   ticket tobj;
   char tno[6];
   int i,num;


    clrscr();
    gotoxy(c,++r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);
    cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);
    cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);
    Rcur=r;
    cout<<"�  Enter Train Number :                                    �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);
    Ccur=c+24;
    gotoxy(Ccur,Rcur);
    gets(tno);
    gotoxy(c,++r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    Rcur=r;
    cout<<"� Number Of Tickets To Be Booked :                         �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    Ccur=c+36;
    gotoxy(Ccur,Rcur);
    cin>>num;

     if(tobj.ticket_availabilty(tno,num)==0)
     {

    cout<<"\a";
    c=12,r=19;
    gotoxy(c,r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    Rcur=r;
    cout<<"�          Either Ticket Or Train Unavailable..!!          �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    Ccur=c+50;
    gotoxy(Ccur,Rcur);
      return;
     }

  fstream fp;
  fp.open("ticket.dat",ios::binary|ios::in);
  if(fp)
  {
     fp.close();
     fp.open("ticket.dat",ios::binary|ios::app);

  }
  else
  {
    fp.close();
    fp.open("ticket.dat",ios::binary|ios::out);
  }


  for(i=1;i<=num;i++)
  {
    tobj.get_ticket();
    fp.write((char *)&tobj,sizeof(tobj));
  }
  fp.close();

    c=12,r=20;
    gotoxy(c,r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    Rcur=r;
    cout<<"�                                                          �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    Ccur=c+50;
    gotoxy(19,--r);
    cout<<num<<" Ticket(s) is/are Booked Successfully!!";
    gotoxy(Ccur,Rcur);
  obj.ticket_Seat_updation(tno,num);
}
//============================================================================

void ticket::ticket_cancel()             // funtion for ticket cancellation
{
   int c=12,r=7;
   int Rcur,Ccur;
   int RNcur,CNcur;
   Train obj;
   ticket tobj;
   char tcno[6],trno[6];
   int i,tc,num=0;
   fstream fptmp;

	clrscr();

	gotoxy(c,r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
	cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);
	cout<<"�  韶韶韶韶韶韶�  �� Ticket Cancellation ��  韶韶韶韶韶韶  �";gotoxy(c,++r);
	cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);
	Rcur=r;
	cout<<"�  Enter Ticket Number         :                           �";gotoxy(c,++r);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);
	Ccur=c+34;
	gotoxy(Ccur,Rcur);
	gets(tcno);


  fstream fp;
  fp.open("ticket.dat",ios::binary|ios::in);
  if(!fp)
  {
    fp.close();


    cout<<"\a";
    clrscr();
    int cn=12,rn=10;
    int RNcur,CNcur;
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    return;
  }

  tc=0;
  while(fp)
  {
    fp.read((char *)&tobj,sizeof(tobj));
    if(fp.eof())
    break;
    if(strcmpi(tobj.get_ticket_no(),tcno)==0)
    {
	strcpy(trno,tobj.getBook_trno());
	tc++;
    }
  }

  fp.close();


  if(tc>=1)
  {

  fptmp.open("tmpticket.dat",ios::binary|ios::out);
  fp.open("ticket.dat",ios::binary|ios::in);

  while(fp)
  {

    fp.read((char *)&tobj,sizeof(tobj));
    if(fp.eof())
    break;

    if(strcmpi(tobj.get_ticket_no(),tcno)!=0)
    {
     fptmp.write((char *)&tobj,sizeof(tobj));
    }
  }

   fp.close();
   fptmp.close();
   remove("ticket.dat");
   rename("tmpticket.dat","ticket.dat");
   num=-tc;
   obj.ticket_Seat_updation(trno,num);

    r++;
    cout<<"\a\a";
    r++;
    gotoxy(c,++r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);
    cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);
    RNcur=r;
    cout<<"�             Ticket Successfully Cancelled!!              �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=c+45;
    gotoxy(CNcur,RNcur);

  }
}

//=========================================================================
void ticket::list_ticket()            // funtion to view all booked tickets
{

   ticket tobj;

  clrscr();

  fstream fp;
  fp.open("ticket.dat",ios::binary|ios::in);
  if(!fp)
  {
    fp.close();
    cout<<"\a";
    int cn=12,rn=10;
    int RNcur,CNcur;
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    return;
  }

  while(fp)
  {
    fp.read((char *)&tobj,sizeof(tobj));
    if(fp.eof())
    break;
    tobj.displayTicket();
  }
  fp.close();
}


//========================================================

void ticket::ticketSearch()
{
  int c=12,r=7;
  ticket tobj;
  char ch;
  char tcno[6];
  int flag;
  fstream fp;
  fp.open("ticket.dat",ios::binary|ios::in);

  if(!fp)
  {
    fp.close();

    cout<<"\a";
    clrscr();
    int cn=12,rn=10;
    int RNcur,CNcur;
    gotoxy(cn,++rn);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(cn,++rn);
    RNcur=rn;
    cout<<"�           No Records Found..!! Press Any Key..           �";gotoxy(cn,++rn);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=cn+48;
    gotoxy(CNcur,RNcur);
    return;
  }


       int Ccur,Rcur;

       clrscr();

	gotoxy(c,r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
	cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);
	cout<<"�  韶韶韶韶韶韶�     �� Ticket Viewing ��    韶韶韶韶韶韶  �";gotoxy(c,++r);
	cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);
	Rcur=r;
	cout<<"�  Enter Ticket Number         :                           �";gotoxy(c,++r);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);
	Ccur=c+34;
	gotoxy(Ccur,Rcur);
	gets(tcno);

  flag=0;
  while(fp)
  {

    fp.read((char *)&tobj,sizeof(tobj));
    if(fp.eof())
    break;
    if(strcmpi(tobj.get_ticket_no(),tcno)==0)
    {
     tobj.displayTicket();
     flag=1;
     fp.close();
     break;
    }
  }

    if(flag==0)
    {
    int RNcur,CNcur;

    cout<<"\a\a";
    r=r+3;
    gotoxy(c,++r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);
    RNcur=r;
    cout<<"�                  Ticket Does Not Exist!!                 �";gotoxy(c,++r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";
    CNcur=c+42;
    gotoxy(CNcur,RNcur);
    }
}

//===========================================================================

void help()
{
	int r=6,c=12,t=75;
	clrscr();
	gotoxy(c,r);
	cout<<"浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様融";gotoxy(c,++r);delay(t);
	cout<<"� 旭旭旭�     RAILWAY MANAGEMENT SYSTEM  2018      旭旭旭� �";gotoxy(c,++r);delay(t);
	cout<<"麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶�  旭�       HELP       旭�  韶韶韶韶韶韶�  �";gotoxy(c,++r);delay(t);
	cout<<"�  樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛樛  �";gotoxy(c,++r);delay(t);
	cout<<"�  NAME            : JYOTIRMOY KUNDU                       �";gotoxy(c,++r);delay(t);
	cout<<"�  SCHOOL          : APEEJAY SCHOOL (PARK STREET-KOLKATA)  �";gotoxy(c,++r);delay(t);
	cout<<"�  YEAR            : 2018-2019                             �";gotoxy(c,++r);delay(t);
	cout<<"�  CLASS           : XII                                   �";gotoxy(c,++r);delay(t);
	cout<<"�  SECTION         : B2                                    �";gotoxy(c,++r);delay(t);
	cout<<"�  ADDRESS         : SALT LAKE CITY,SEC-II                 �";gotoxy(c,++r);delay(t);
	cout<<"�  MOBILE No.      : 7980915865                            �";gotoxy(c,++r);delay(t);
	cout<<"�  EMAIL Id        : kundujyotirmoy12@gmail.com            �";gotoxy(c,++r);delay(t);
	cout<<"�  韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶韶  �";gotoxy(c,++r);delay(t);
	cout<<"藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕";gotoxy(c,++r);delay(t);
}




//========================================================

void prog_loading()
{
  int r=12,i,j;
  int c=25;
  for(i=1;i<=4;i++)
  {
     clrscr();
     gotoxy(c,r);
     cout<<"Please Wait";
     c=c+12;
     for(j=1;j<=20;j++)
     {
      gotoxy(c,r);
      cout<<"�";
      delay(50);
      c++;
     }
     c=25;
  }
}

//============================================================

void pass_word()
{
 char pw[]="ADMIN";
 char tmp[10];
 char ch;
 int r,c,i=0,rcursor;
 do
 {
 clrscr();
 i=0;
    r=10;
    c=16;
    gotoxy(c,r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様�";
    r++;gotoxy(c,r);
    cout<<"魂�      RAILWAY MANAGEMENT SYSTEM  2018    臆�";
    r++;gotoxy(c,r);
    cout<<"麺様様様様様様様様様様様様様様様様様様様様様様�";
    r++;gotoxy(c,r);
    cout<<"�   Login  Password  :                        �";
    r++;gotoxy(c,r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様�";
    gotoxy(c+24,r-1);
 do
 {
  ch=getch();

  if(ch==13)
     break;
  else
    {
      cout<<"*";
     tmp[i++]=ch;
    }
 }while(1);

   tmp[i]='\0';
   if(strcmp(tmp,pw)==0)
     {
     r+=8;
    gotoxy(c,r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様�";
    r++;gotoxy(c,r);
    cout<<"魂�          Password Accepted..!!          臆�";
    r++;gotoxy(c,r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様�";
    gotoxy(50,r-1);
      break;
     }
      else
      {
     r+=8;
    gotoxy(c,8);
    cout<<"\a\a";
    gotoxy(c,r);
    cout<<"浜様様様様様様様様様様様様様様様様様様様様様様�";
    r++;gotoxy(c,r);
    cout<<"魂�    Access Violation!!['X' to Exit]      臆�";
    rcursor=r;
    r++;gotoxy(c,r);
    cout<<"藩様様様様様様様様様様様様様様様様様様様様様様�";
    gotoxy(c+40,rcursor);

       ch=getche();
       if(ch=='X'|| ch=='x')
	  exit(0);
      }

    }while(1);

     getch();
}