#include <iostream>
#include <vector>


using namespace std;

int main(){

    int array[3];

   for(int i =0; i < 3; i++) {
    cin>>array[i];

} 

sort(array , array + 3);

for (int i = 0; i< 3; ++i){
    cout<<array[i]<< "," ;
}

return 0 ;

}
