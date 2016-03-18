/* %%%%%%%%%%%%%%%% *** %%%%%%%%%%%%%%%% 
Author: Venkatesh N. Murthy
To find a square root of a number
%%%%%%%%%%%%%%%% *** %%%%%%%%%%%%%%%%  */
#include<iostream>
//#include<math.h>
using namespace std;

double sqrt(double elem)
{
if(elem<0)
return -1;
if(elem==0||elem==1)
return elem;
double precision=0.000001;
double start=0;
double end=elem;
double mid,midsqr;
if(elem<1)
end=1;
while((end-start)>precision)
{
mid=(start+end)/2;
midsqr=mid*mid;
if(midsqr==elem)
	return mid; // It's a perfect square
else if(midsqr<elem)
	start=mid;
else
end=mid;

}

return (start+end)/2;
}


int main ()
{


cout<<"sqrt of 4 is "<<sqrt(4)<<endl;
cout<<"sqrt of 5 is "<<sqrt(5)<<endl;
cout<<"sqrt of 50 is "<<sqrt(50)<<endl;
return 0;
}

