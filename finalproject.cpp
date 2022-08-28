#include <iostream>
#include <fstream>
#include <ctime>
#include <list>
using namespace std;

class WelfareOrganization
{

protected:
       string IdenAns, identity;

public:
       static int totalDonation;
       static int totalDonors;
       string Name;
       static int Cash;
       int Contact, NIC, decCash;
       int money;

       WelfareOrganization()
       {
              totalDonation = 100000;
              totalDonors = 0;
       }
       static getH()
       {
              WelfareOrganization::totalDonors;
              return totalDonors;
       };
       static getD()
       {
              WelfareOrganization::totalDonation;
              return totalDonation;
       };

       virtual void setInfo()
       {
              cout << "Enter your Name : " << endl;
              cin >> Name;
              cout << "Enter your NIC : " << endl;
              cin >> NIC;
              cout << "Enter your Cash : " << endl;
              cin >> Cash;

              cout << "Enter your Contact : " << endl;
              cin >> Contact;
              totalDonation += Cash;
              totalDonors += 1;
       }

       virtual void showInfo()
       {
              cout << "Donor Name is : " << Name << endl;
              cout << "Donor NIC is : " << NIC << endl;
              cout << "Donor Cash is : " << Cash << endl;
              // cout << "Donor Goods is" << Goods << endl;
              cout << "Donor Contact is : " << Contact << endl;
       }

       virtual void showHistory()
       {
              for (int i = 0; i < 1; i++)
              {
                     cout << " Donor number :" << totalDonors << endl;
                     WelfareOrganization ::showInfo();
              }
       }
};

class Donor : public WelfareOrganization
{
public:
       Donor()
       {
              identity = "yes";
       }

       void setInfo()
       {
              WelfareOrganization::setInfo();
              // totalDonation += Cash;
              // totalDonors++;
       }
       void showInfo()
       {

              cout << " Donor number : " << totalDonors << endl;
              WelfareOrganization ::showInfo();
       }
};

class OverseaasDonor : public Donor
{
public:
       void donate()
       {
              cout << "Do you want to hide Identity ? yes or no ?" << endl;
              cin >> IdenAns;
              if (IdenAns == identity)
              {
                     cout << "Enter your Cash :" << endl;
                     cin >> Cash;
                     totalDonation += Cash;
                     totalDonors++;
              }
              else
              {
                     return Donor::setInfo();
              }
       }
};
int WelfareOrganization::Cash = 0;
int WelfareOrganization::totalDonors = 0;
int WelfareOrganization::totalDonation = 100000;

class pakistaniDonor : public Donor
{
public:
       void donate()
       {
              cout << "Do you want to hide Identity ? yes or no ?" << endl;
              cin >> IdenAns;
              if (IdenAns == identity)
              {
                     cout << "Enter your Cash : " << endl;
                     cin >> Cash;
                     totalDonation += Cash;
                     totalDonors += 1;
              }
              else
              {
                     return WelfareOrganization::setInfo();
              }
       }
};

class MoneyAllowence : public WelfareOrganization
{
protected:
       string letter;
       int person, decCash;

public:
       MoneyAllowence()
       {
              identity = "yes";
       }

       virtual void setInfo()
       {
              cout << "Enter your Name :" << endl;
              cin >> Name;
              cout << "Enter your NIC :" << endl;
              cin >> NIC;
              cout << "Enter your Contact :" << endl;
              cin >> Contact;
       }

       virtual void showInfo()
       {      
              cout << "Donor Name is :" << Name << endl;
              cout << "Donor NIC is :" << NIC << endl;
              cout << "Donor Contact is :" << Contact << endl;
       }

       virtual void confirmation()
       {
              cout << "Do you have any authentic  letter ?" << endl;
              cin >> IdenAns;
              if (IdenAns == identity)
              {
                     setInfo();
                     cout << "For how many people you want money ?" << endl;
                     cin >> person;
                     decCash = 5000 * person;
                     cout << "money has been transfered :" << decCash << endl;
                     totalDonation -= decCash;
              }
              else
              {
                     cout << "We are really sorry , we cant give you money without letter " << endl;
              }
       }

       void showConfirmation()
       {
              showInfo();
              cout << decCash << " has been transfered" << endl;
       }
};

class deprived_people : public MoneyAllowence
{
public:
       void dep_Money()
       {
              cout << "Do you want to hide Identity ? yes or no ?" << endl;
              cin >> IdenAns;
              if (IdenAns == identity)
              {
                     cout << "For how many people you want money ?" << endl;
                     cin >> person;
                     decCash = 5000 * person;
                     cout << "money has been transfered :" << decCash << endl;
                     totalDonation -= decCash;
              }
              else
              {
                     setInfo();
                     cout << "For how many people you want money ?" << endl;
                     cin >> person;
                     decCash = 5000 * person;
                     cout << "money has been transfered :" << decCash << endl;
                     totalDonation -= decCash;
              }
       }
};
class Mosque : public MoneyAllowence
{
public:
       void confirmationletter()
       {
              MoneyAllowence::confirmation();
       }
       void showConfirmation()
       {
              showInfo();
              cout << decCash << " has been transfered" << endl;
       }
};
class Orphanage : public MoneyAllowence
{
public:
       void confirmationletter()
       {
              MoneyAllowence::confirmation();
       }
       void showConfirmation()
       {
              showInfo();
              cout << decCash << " has been transfered" << endl;
       }
};

class Account : public Donor
{
public:
       virtual void HISTORY()
       {
              cout << "Total amount donated : " << WelfareOrganization::getD() << endl;
              cout << "Total number of Donors :" << WelfareOrganization::getH() << endl;
       }
};

class Money : public Account
{
public:
       void HISTORY()
       {
              cout << "We Have " << WelfareOrganization::getD() << "RS//- in our account." << endl;
       }
};

int main()
{
       string path;
       int number, num, category;
       while (true)
       {
              cout << "select catergory" << endl;
              cout << "1 -- To donate " << endl;
              cout << "2 -- Money ALlowence " << endl;
              cout << "3 -- Accounts " << endl;
              cout << "4 -- Exit " << endl;
              cin >> number;
              system("cls");

              if (number == 1)
              {
                     while (true)
                     {
                     
                            cout << "Are you an overseas Pakistani ?\n If yes please press 1 \n If no please press 2 \n If you want to exit press 0" << endl;
                            cin >> num;
                            if (num == 1)
                            {
                                   OverseaasDonor OD;
                                   OD.donate();
                                   ofstream outfile("TEST.txt");
                                   outfile.write(reinterpret_cast<char *>(&OD), sizeof(OD));
                                   outfile.close();

                                   cout << "Thanks for donating and serving the humanity \n God Bless You !" << endl;
                            }
                            else if (num == 2)
                            {
                                   pakistaniDonor PD;
                                   PD.donate();
                                   ofstream file7("TEST.txt");
                                   file7.write(reinterpret_cast<char *>(&PD), sizeof(PD));
                                   file7.close();
                                   cout << "Thanks for donating and serving the humanity \n God Bless You !" << endl;
                            }
                            else if (num > 2)
                            {
                                   cout << "Invalid Input!"<<endl;
                            }
                            else if (num == 0)
                            {
                                   break;
                            }
                     
                     }
              }

              else if (number == 2)
              {
                     
                     
                            cout << "For which category you want donation ?" << endl;
                            cout << "1 -- Deprived People" << endl;
                            cout << "2 -- Mosque" << endl;
                            cout << "3 -- Orphanage" << endl;
                            cout << "4 -- Exit " << endl;
                            cin >> num;
                            system("cls");
                            if (num == 1)
                            {      
                                   while (true){
                                          deprived_people dp;
                                          ofstream file6("TEST.txt");
                                          file6.write(reinterpret_cast<char *>(&dp), sizeof(dp));
                                          file6.close();
                                          cout << "From which category you want money ?" << endl;
                                          cout << "1 --> not from Zakat/Fitrah " << endl;
                                          cout << "2 --> from Zakat " << endl;
                                          cout << "0 --> Exit" << endl;
                                          cin >> category;
                                          system("cls");
                                          if (category==1)
                                          {
                                                 dp.dep_Money();
                                                 
                                          }
                                          else if (category==2)
                                          {
                                                 dp.dep_Money();
                                          }
                                          
                                          else if(category>3) {                                  
                                                 cout << "Invalid Input!" << endl;
                                          }
                                          else if(category==0){
                                                 break;
                                          }
                                   }
                            }
                     

                            else if (num == 2)
                            {      while (true){
                                          Mosque m;
                                          ofstream file5("TEST.txt");
                                          file5.write(reinterpret_cast<char *>(&m), sizeof(m));
                                          file5.close();
                                          cout << "From which category you want money ?" << endl;
                                          cout << "1 --> not from Zakat/Fitrah " << endl;
                                          cout << "2 --> from Zakat " << endl;
                                          cout << "0 --> Exit" << endl;
                                          cin >> category;
                                          system("cls");
                                          if (category==1){
                                                 m.confirmationletter();

                                                 m.showConfirmation();
                                          }
                                          else if(category==2){
                                                 m.confirmationletter();
                                          }

                                          else if(category>3){
                                                 cout << "Invalid Input!" << endl;
                                                
                                          }
                                          else if(category==0){
                                                 break;
                                          }
                                   }       
                            }

                            else if (num == 3)
                            {      
                                   while (true)
                                   {
                                          Orphanage o;
                                          ofstream file4("TEST.txt");
                                          file4.write(reinterpret_cast<char *>(&o), sizeof(o));
                                          file4.close();
                                          cout << "From which category you want money ?" << endl;
                                          cout << "1 --> not from Zakat/Fitrah " << endl;
                                          cout << "2 --> from Zakat " << endl;
                                          cout << "0 --> Exit" << endl;
                                          cin >> category;
                                          system("cls");
                                          
                                          if (category==1){
                                                 o.confirmationletter();
                                                 o.showConfirmation();
                                          }
                                          else if(category==2){
                                                 o.confirmationletter();
                                          
                                          }
                            
                                          else if (category>3){
                                                 cout<<"Invalid input!"<<endl;
                                          }
                                          else if(category==0){
                                                 break;
                                          }
                                   }
                            }
                     
                     
              }
              else if (number == 3)
              {
                     while (true)
                     {
                            cout << "1-- To check total number of donors and total donation " << endl;
                            cout << "2--To check balance ammount " << endl;
                            cout << "0 --> Exit" << endl;
                            cin >> num;

                            if (num == 1)
                            {
                                   Account a;
                                   ofstream outfile("TEST.txt");
                                   outfile.write(reinterpret_cast<char *>(&a), sizeof(a));
                                   outfile.close();
                                   a.HISTORY();
                            }
                            else if (num == 2)
                            {
                                   Money M;
                                   ofstream outfile("TEST.txt");
                                   outfile.write(reinterpret_cast<char *>(&M), sizeof(M));
                                   outfile.close();
                                   M.HISTORY();
                            }
                            else if(num >3){
                                   cout<<"Invalid Input!"<<endl;
                            }
                            else if(num==0){
                                   break;
                            }
                     }       
              }
              else if(number>4 || number<1){
                     cout<<"Invalid Input!"<<endl;
              }
              else if (number == 4)
              {
                     break;
              }
       }

       time_t tmNow = time(0);
       char *dt = ctime(&tmNow);
       cout << "Current Date/Time : " << dt;
       cout << endl;
       return 0;
}
