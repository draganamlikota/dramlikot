using namespace std;

struct paci{
	int a, b, c, d, e;
	char prez_ime[35];
	char spol;
	int dan, mjesec, godina;
};
struct qu {
	paci pacijent;
	qu *next;
};
struct que {
	struct qu *front, *rear;
};

typedef struct que queue;
typedef struct qu *element;

paci FrontQ(queue *Q) {
	if (Q->front==Q->rear) {
        cout<<"Red je prazan!"<<endl;
     }
     else
         return Q->front->next->pacijent;
}

void EnqueueQ( paci x, queue *Q) {
	element novi=new qu;	
    	novi->pacijent=x;
    	novi->next=NULL;		
    	Q->rear->next=novi;		
     Q->rear=novi;			
}

void DequeueQ(queue *Q) {
	element e;
	if (Q->front==Q->rear) {
        cout<<"Red je prazan."<<endl;
     }
	else {
	     e=Q->front;			
          Q->front=Q->front->next; 
          delete e;				
     }						
}

void InitQ(queue *Q) {		
	element glava=new qu;	
    	Q->front=glava;		
    	Q->rear=glava;			
    	glava->next=NULL;	
}		

bool IsEmptyQ(queue *Q){
     if (Q->front==Q->rear)
         return true;
     else
	   return false;
}
