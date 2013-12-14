using namespace std;
struct paci{
	int a, b, c, d, e;
	char prez_ime[35];
	char spol;
	int dan, mjesec, godina;
};
typedef int element;
struct qu {
	paci elementi[100];
	element front, rear;
};

typedef struct qu queue;

int AddOne(int n) {
	return((n+1)%100); 
}

paci FrontQ(queue *Q) {
	if (AddOne(Q->rear)==Q->front) {
		cout<<"Red je prazan!"<<endl;
	}
	else
		return Q->elementi[Q->front]; 
}

void EnqueueQ(paci x, queue *Q) {
	if (AddOne(AddOne(Q->rear))==Q->front) {
		cout<<"Red je popunjen"<<endl;
	}
	else {
		Q->rear = AddOne(Q->rear); 
		Q->elementi[Q->rear]= x;   
	}
}
bool IsEmptyQ(queue *Q) {
	if (AddOne(Q->rear)==Q->front)
		return true;
	else
		return false;
}

void DequeueQ(queue *Q) { 
	if (AddOne(Q->rear)==Q->front) {
		cout<<"Red je prazan."<<endl;
	}
	else
		Q->front = AddOne(Q->front);
}

void InitQ(queue *Q) {
	Q->rear = 99;	  
	Q->front = 0;    
}
