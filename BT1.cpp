#include <iostream>
#include <ctime>

using namespace std;

void play(int *P1, int *P2)
{
    if(*P1>*P2){
        int temp=rand()%6+1;
        *P2+=temp;
        cout << "Xuc xac nguoi choi 1: " << temp << " 	Tong nguoi 1: " << *P2 << endl;
    }
    else if(*P2>=*P1){
        int temp=rand()%6+1;
        *P1+=temp;
        cout << "Xuc xac nguoi choi 1: " << temp << " 	Tong nguoi 2: " << *P1 << endl;
    }
}

int main()
{
    srand(time(0));
    int P1=0, P2=0;
    while(P1<100&&P2<100) play(&P1,&P2);
    if(P1<P2) cout << "Player2 win!";
    else cout << "Player1 win!";
}
