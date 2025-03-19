#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int daysUntilExpiration = (rand()%11);

    cout <<  daysUntilExpiration <<endl;
    if(daysUntilExpiration >5 || daysUntilExpiration <=10){
        cout <<" Your subscription will expire soon. Renew now! \n";
    }
    else if(daysUntilExpiration > 1||daysUntilExpiration <=5  ){
          cout <<" Your subscription expires in value of "<< daysUntilExpiration <<" Renew now and save 10%! \n";
    }
    else if(daysUntilExpiration ==1){
      cout <<" Your subscription expires within a day! Renew now and save 20%! \n" ;
    }
    else if(daysUntilExpiration ==0){
        cout <<" Your subscription has expired.\n";
    }
    else{
        cout <<"You have an active subscription \n";
    }
    return 0;
}