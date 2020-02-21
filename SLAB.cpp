#include <iostream>
using namespace std;


int computeNet(int n){
    int tax_amount=0;
    
 
    if(n<=250000){
        tax_amount=0;
    }
    if (n>250000&&n<=500000){
        tax_amount=0;
        tax_amount += (n-250000)*0.05;

    }
    if(n>=500001&&n<=750000){
        tax_amount=0;
        tax_amount += 250000*0.05;
        tax_amount += (n - 500000)*0.1;
    }
    if(n>=750001&& n<=1000000){
        tax_amount=0;
        tax_amount += 250000*0.05;
        tax_amount += 250000*0.1;
        tax_amount+= (n-750000)*0.15;
    }
    if(n>=1000001 && n<=1250000){
        tax_amount=0;
        tax_amount += 250000*0.05;
        tax_amount += 250000*0.1;
        tax_amount+= 250000*0.15;
        tax_amount+= (n-1000000)*0.2;
    }
    if(n>=1250001 && n<=1500000){
        tax_amount=0;
        tax_amount += 250000*0.05;
        tax_amount += 250000*0.1;
        tax_amount+= 250000*0.15;
        tax_amount+= 250000*0.2;
        tax_amount+= (n-1250000)*0.25;
    }
    if(n>=1500001){
        tax_amount=0;
        tax_amount += 250000*0.05;
        tax_amount += 250000*0.1;
        tax_amount += 250000*0.15;
        tax_amount += 250000*0.2;
        tax_amount += 250000*0.25;
        tax_amount += (n-1500000)*0.3;
    }
    
    return tax_amount;
    
}
int main() {
	// your code goes here
	int t,n;
	
	cin>>t;
	while(t--){
	    cin>>n;
	    int tax_amount = computeNet(n);
	    cout<<n-tax_amount<<endl;
	}
	return 0;
}
