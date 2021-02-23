#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
int main() {
    int userNum;
    int outCountDivs = 0;
    int outSumDivs = 0;

    cout<<"Please enter a number greater or equal to 2"<<endl;
    cin>>userNum;
    cout<<"Perfect numbers between 2 and "<<userNum<<" are :"<<endl;
    for(int i = 2; i <= userNum; i++){
        if(isPerfect(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl<<endl;

    for(int j = 2; j <= userNum; j++){
        outCountDivs = 0;
        outSumDivs = 0;
        analyzeDividors(j, outCountDivs, outSumDivs);

        int sum = outSumDivs;

        outCountDivs = 0;
        outSumDivs = 0;
        analyzeDividors(sum, outCountDivs, outSumDivs);

        int sum2 = outSumDivs;

        if(j < sum && sum <= userNum && sum2 == j){
            cout<<j<<" and "<<sum<<" are amicable numbers"<<endl;
        }
    }

    return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {
    int countDivs;
    int count;
    int sumDivs;
    sumDivs = 0;
    for (count = 1; count <= sqrt(num) - 1; count++) {
        if (num % count == 0) {
            sumDivs += count;
            countDivs++;
        }
    }
    for (count = sqrt(num); count <= num - 1; count++) {
        if (num % count == 0) {
            sumDivs += count;
            countDivs++;
        }
    }
    outSumDivs = sumDivs;
    outCountDivs = countDivs;
}

bool isPerfect(int num){
    int sum = 0;
    int count = 0;
    analyzeDividors(num, count, sum);

    if(num == sum){
        return true;
    }
    else{
        return false;
    }
}




