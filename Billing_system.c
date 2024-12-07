#include <stdio.h>

int main(){
    char name[100];
    long long phone_number;
    int customer_id;

    int tomato;
    int potato;
    int onion;
    int carrot;
    int garlic;
    
    int apple;
    int banana;
    int mango;
    int grapes;
    int watermelon;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int cola;
    int string;
    int malt;

    int total;
    int vegetables_total;
    int fruits_total;
    int groceries_total;
    int beverages_total;

    printf("----------------------\n");
    printf("BILLING SYSTEM\n");
    printf("----------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    scanf("%s", name);
    printf("\nCustomer Number : ");
    scanf("%lld", &phone_number);
    printf("\nCustomer Id : ");
    scanf("%d", &customer_id);

    printf("--------------------------------------------\n");

    printf("VEGETABLES\n\n");

    printf("Tomato ( RS 70/kg ) : ");
    scanf("%d", &tomato);
    printf("\nPotato ( RS 100/kg ) : ");
    scanf("%d", &potato);
    printf("\nOnion ( RS 110/kg ) : ");
    scanf("%d", &onion);
    printf("\nCarrot ( RS 80/kg ) : ");
    scanf("%d", &carrot);
    printf("\nGarlic ( RS 150/Quarter kg ) : ");
    scanf("%d", &garlic);
    printf("--------------------------------------------\n");

    printf("FRUITS\n\n");

    printf("Apple ( RS 180/kg ) : ");
    scanf("%d", &apple);
    printf("\nBanana ( RS 120/dozen ) : ");
    scanf("%d", &banana);
    printf("\nMango ( RS 130/kg ) : ");
    scanf("%d", &mango);
    printf("\nGrapes ( RS 150/kg ) : ");
    scanf("%d", &grapes);
    printf("\nWatermelon ( RS 90/kg ) : ");
    scanf("%d", &watermelon);
    printf("--------------------------------------------\n");

    printf("GROCERIES\n\n");

    printf("Sugar ( RS 120/kg ) : ");
    scanf("%d", &sugar);
    printf("\nTea ( RS 100/quarter kg ) : ");
    scanf("%d", &tea);
    printf("\nCoffee ( RS 200/half kg ) : ");
    scanf("%d", &coffee);
    printf("\nRice ( RS 200/kg ) : ");
    scanf("%d", &rice);
    printf("\nWheat ( RS 180/kg ) : ");
    scanf("%d", &wheat);
    printf("--------------------------------------------\n");

    printf("BEVERAGES\n\n");

    printf("Pepsi ( RS 60 ) : ");
    scanf("%d", &pepsi);
    printf("\nSprite ( RS 60 ) : ");
    scanf("%d", &sprite);
    printf("\nCola ( RS 60 ) : ");
    scanf("%d", &cola);
    printf("\nString ( RS 80 ) : ");
    scanf("%d", &string);
    printf("\nMalt ( RS 70 ) : ");
    scanf("%d", &malt);
    printf("--------------------------------------------\n");

    int tom;
    int pot;
    int oni;
    int car;
    int gar;

    tom = 70 * tomato;
    pot = 100 * potato;
    oni = 110 * onion;
    car = 80 * carrot;
    gar = 150 * garlic;
    vegetables_total = tom + pot + oni + car + gar;

    printf("Tomato : ");
    printf("%d RS\n", tom);
    printf("Potato : ");
    printf("%d RS\n", pot);
    printf("Onion : ");
    printf("%d RS\n", oni);
    printf("Carrot : ");
    printf("%d RS\n", car);
    printf("Garlic : ");
    printf("%d RS\n", gar);
    printf("Total Vegetables Price : ");
    printf("%d RS\n", vegetables_total);
    printf("--------------------------------------------\n");

    int app;
    int ban;
    int man;
    int grap;
    int wat;

    app = 180 * apple;    
    ban = 100 * banana;    
    man = 100 * mango;    
    grap = 100 * grapes;    
    wat = 100 * watermelon;
    fruits_total = app + ban + man + grap + wat;    

    printf("Apple : ");
    printf("%d RS\n", app);
    printf("Banana : ");
    printf("%d RS\n", ban);
    printf("Mango : ");
    printf("%d RS\n", man);
    printf("Grapes : ");
    printf("%d RS\n", grap);
    printf("Watermelon : ");
    printf("%d RS\n", wat);
    printf("Total Fruits Price : ");
    printf("%d RS\n", fruits_total);
    printf("--------------------------------------------\n");

    int sug;
    int te;
    int cof;
    int ric;
    int whe;

    sug = 120 * sugar;
    te = 100 * tea;
    cof = 200 * coffee;
    ric = 200 * rice;
    whe = 180 * wheat;
    groceries_total = sug + te + cof + ric + whe;

    printf("Sugar : ");
    printf("%d RS\n", sug);
    printf("Tea : ");
    printf("%d RS\n", te);
    printf("Coffee : ");
    printf("%d RS\n", cof);
    printf("Rice : ");
    printf("%d RS\n", ric);
    printf("Wheat : ");
    printf("%d RS\n", whe);
    printf("Total Groceries Price : ");
    printf("%d RS\n", groceries_total);
    printf("--------------------------------------------\n");

    int pep;
    int spr;
    int col;
    int str;
    int mal;

    pep = 60 * pepsi;
    spr = 60 * sprite;
    col = 60 * cola;
    str = 80 * string;
    mal = 70 * malt;
    beverages_total = pep + spr + col + str + mal;

    printf("Pepsi : ");
    printf("%d RS\n", pep);
    printf("Sprite : ");
    printf("%d RS\n", spr);
    printf("Cola : ");
    printf("%d RS\n", col);
    printf("String : ");
    printf("%d RS\n", str);
    printf("Malt : ");
    printf("%d RS\n", mal);
    printf("Total Beverages Price : ");
    printf("%d RS\n", beverages_total);
    printf("--------------------------------------------\n");

    total = vegetables_total + fruits_total + groceries_total + beverages_total;

    printf("Total Amount : ");
    printf("%d RS\n", total);
    
    printf("--------------------------------------------\n\n");
    
    printf("-----------------------------------------------------------------------\n");

    printf("Super Market\n\n");

    printf("Customer Name : ");
    printf("%s\n", name);
    printf("Customer Number : ");
    printf("%lld\n", phone_number);
    printf("Customer Id : ");
    printf("%d", customer_id);

    printf("\nProduct Name \t\t Quantity \t\t Price\n\n");
    printf("Tomato       \t\t    %d   \t\t   %d\n", tomato,tom);
    printf("Potato       \t\t    %d   \t\t   %d\n", potato,pot);
    printf("Onion        \t\t    %d   \t\t   %d\n", onion,oni);
    printf("Carrot       \t\t    %d   \t\t   %d\n", carrot,car);
    printf("Garlic       \t\t    %d   \t\t   %d\n", garlic,gar);
    printf("Apple        \t\t    %d   \t\t   %d\n", apple,app);
    printf("Banana       \t\t    %d   \t\t   %d\n", banana,ban);
    printf("Mango        \t\t    %d   \t\t   %d\n", mango,man);
    printf("Grapes       \t\t    %d   \t\t   %d\n", grapes,grap);
    printf("Watermelon   \t\t    %d   \t\t   %d\n", watermelon,wat);
    printf("Sugar        \t\t    %d   \t\t   %d\n", sugar,sug);
    printf("Tea          \t\t    %d   \t\t   %d\n", tea,te);
    printf("Coffee       \t\t    %d   \t\t   %d\n", coffee,cof);
    printf("Rice         \t\t    %d   \t\t   %d\n", rice,ric);
    printf("Wheat        \t\t    %d   \t\t   %d\n", wheat,whe);
    printf("Pepsi        \t\t    %d   \t\t   %d\n", pepsi,pep);
    printf("Sprite       \t\t    %d   \t\t   %d\n", sprite,spr);
    printf("Cola         \t\t    %d   \t\t   %d\n", cola,col);
    printf("String       \t\t    %d   \t\t   %d\n", string,str);
    printf("Malt         \t\t    %d   \t\t   %d\n", malt,mal);

    printf("\nVegetables Total Price : %d\n\n", vegetables_total);

    printf("Fruits Total Price : %d\n\n", fruits_total);

    printf("Groceries Total Price : %d\n\n", groceries_total);
    
    printf("Beverages Total Price : %d\n\n", beverages_total);

    printf("Total Price : %d\n\n", total);

    printf("Thanks for shopping.");

    printf("-----------------------------------------------------------------------\n");

    return 0;
}