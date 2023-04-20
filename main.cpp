#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;

    //quantity
    int Qrooms = 0, Qpasta=0, Qburger=0, Qnoodles=0,Qshake=0,Qchicken =0;
    //food items sold
    int Srooms=0, Spasta=0,Sburger=0, Snoodles=0, Sshake=0,Schicken=0;
    //total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger : ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake : ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken roll: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) BUrger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) Chicken";
    cout<<"\n 7) Information regarding sales and collection";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please enter your choice !";
    cin>>choice;


    switch (choice)
    {
    case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms= Srooms+quant;
            Total_rooms = Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<" rooms have been alloted to you!";

        }
        else
        {
            cout<<"\n\t Only"<<Qrooms-Srooms<<" rooms remaining in the Hotel";

        }
        break;

    case 2:
        cout<<"\n\n Enter the pasta quantity: ";
        cin>>quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta= Spasta+quant;
            Total_pasta = Total_pasta+quant*250;
            cout<<"\n\n\t\t"<<quant<<" Pasta have been ordered to you!";

        }
        else
        {
            cout<<"\n\t Only"<<Qpasta-Spasta<<" pasta remaining in the Hotel";

        }
        break;

         case 3:
        cout<<"\n\n Enter the number of burger you want: ";
        cin>>quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger= Sburger+quant;
            Total_burger = Total_burger+quant*120;
            cout<<"\n\n\t\t"<<quant<<" burgers have been alloted to you!";

        }
        else
        {
            cout<<"\n\t Only"<<Qburger-Sburger<<" burgers remaining in the Hotel";

        }
        break;

         case 4:
        cout<<"\n\n Enter the number of noodles you want: ";
        cin>>quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles= Snoodles+quant;
            Total_noodles = Total_noodles+quant*250;
            cout<<"\n\n\t\t"<<quant<<" noodles have been alloted to you!";

        }
        else
        {
            cout<<"\n\t Only"<<Qnoodles-Snoodles<<" noodles remaining in the Hotel";

        }
        break;

         case 5:
        cout<<"\n\n Enter the number of shakes you want: ";
        cin>>quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake= Sshake+quant;
            Total_shake = Total_shake+quant*120;
            cout<<"\n\n\t\t"<<quant<<" shake have been alloted to you!";

        }
        else
        {
            cout<<"\n\t Only"<<Qshake-Sshake<<" shake remaining in the Hotel";

        }
        break;

         case 6:
        cout<<"\n\n Enter the number of chicken rolls you want: ";
        cin>>quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken= Schicken+quant;
            Total_chicken = Total_chicken+quant*150;
            cout<<"\n\n\t\t"<<quant<<" chicken rolls have been alloted to you!";

        }
        else
        {
            cout<<"\n\t Only"<<Qchicken-Schicken<<" chicken rolls remaining in the Hotel";

        }
        break;

        case 7:
         cout<<"\n\tDetails of sales and collection";
         cout<<"\n\n Number of rooms we had : "<<Qrooms;
         cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
         cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
         cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;


         cout<<"\n\n Number of pastas we had : "<<Qpasta;
         cout<<"\n\n Number of pasta we gave for rent "<<Spasta;
         cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
         cout<<"\n\n Total pasta collection for the day : "<<Total_pasta;

         cout<<"\n\n Number of burger we had : "<<Qburger;
         cout<<"\n\n Number of burger we gave for rent "<<Sburger;
         cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
         cout<<"\n\n Total burger collection for the day : "<<Total_burger;

         cout<<"\n\n Number of noodles we had : "<<Qnoodles;
         cout<<"\n\n Number of noodles we gave for rent "<<Snoodles;
         cout<<"\n\n Remaining nodles : "<<Qnoodles-Snoodles;
         cout<<"\n\n Total noodles collection for the day : "<<Total_noodles;

         cout<<"\n\n Number of chicken roolls we had : "<<Qchicken;
         cout<<"\n\n Number of chicken rolls we gave for rent "<<Schicken;
         cout<<"\n\n Remaining chicken rolls : "<<Qchicken-Schicken;
         cout<<"\n\n Total chicken rolls collection for the day : "<<Total_chicken;

        case 8:
            exit(0);

        default:
            cout<<"\n Please select the numbers mentioned above";

    }
    goto m;

    return 0;
}
