#include<iostream>
using namespace std;

int main(){
	int N,M,P,Q,count=0;
	cin>>N;
	int L = N*2;
	int B[L];
	while(0<N){
		int A[2];
		cin>>P>>Q>>M;
		A[0] = P;
		A[1] = Q;
		for(int i=0; i<M; i++){
			if(A[0]<=A[1]){
				A[1] = A[1]/2;
			}else{
				A[0] = A[0]/2;
			}
		}N--;
		B[count] = A[0];
		B[count+1] = A[1];
		count+=2;
	}
	for(int i=0; i<L; i+=2){
		if(B[i]>=B[i+1]){
			cout<<B[i]<<" "<<B[i+1]<<endl;	
		}else{
			cout<<B[i+1]<<" "<<B[i]<<endl;	
		}
	}
	return 0;
}
