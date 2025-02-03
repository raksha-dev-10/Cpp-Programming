#include<iostream>
using namespace std;

bool fun(int num, int *temp){
    
    if(num>=0 and num<=9){
        int lastdigitoftemp = (*temp)%10;
        (*temp) /=10;
        return (num ==lastdigitoftemp);
    }
    bool ans = (fun(num/10,temp) and (num%10) ==((*temp)%10));
    (*temp) /=10;
    return ans;

}

int main(){

int i = 12341;
int a= i;
int *temp=&a;

cout<<fun(i,temp);

    return 0;
}