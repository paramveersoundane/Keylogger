#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int main(){
time_t now;
struct tm nowlocal;
nowlocal=*localtime(&now);
cout<<"Date: " <<nowlocal.tm_mday<<" "<<nowlocal.tm_mon + 1<<" "<< nowlocal.tm_year + 1900<<endl;
cout<<"Time: " <<nowlocal.tm_hour<<" "<<nowlocal.tm_min + 1<<" "<< nowlocal.tm_sec<<endl;
 printf ("Current local time and date: %s", asctime(&nowlocal));
return 0;
}
