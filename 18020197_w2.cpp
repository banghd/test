//Đỗ Minh Bằng
//Mã sv: 18020197
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int generateRandomNumber();
int getPlayerGuess();
void printAnswer(int	number,	int	randomNumber);
int checkanswer(int number,int randomnumber);
int calculatescore(int n);
int main()
{               srand(time(NULL));
				int	randomNumber	=	generateRandomNumber();
				int numberofguess = 1;
				int	number;
				do	{
								number	=	getPlayerGuess();
								printAnswer(number,	randomNumber);
                                numberofguess += checkanswer(number,randomNumber);
				}	while	(number	!=	randomNumber);
				cout << "so lan doan : " << numberofguess << endl;
				cout << "your score are " << calculatescore(numberofguess);
				return 0;
}
int generateRandomNumber(){
    int	randomNumber	=	rand()	%	100	+	1;
    return randomNumber;
};
int getPlayerGuess(){
    int playernumber;
    cin >> playernumber;
    return playernumber;
};
void printAnswer(int	number,	int	randomNumber){
    if (number==randomNumber) cout << "Congratulation ! You win\n";
    else if(number<randomNumber) cout << "Your number is too small\n";
    else cout << "your number is too big\n";
};
int checkanswer(int number,int randomnumber){
    if (number==randomnumber) return 0;
    else return 1;

}
int calculatescore(int n){
    int score  =10000;
    if(n==1) return 10000;
    for(int i =0 ;i<=n-2;i++){
        score = score - 2*(100-i);
    }
    return score;
}
