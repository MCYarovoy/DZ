#include "stdafx.h"

#include "iostream"

#include "conio.h"

#include "locale.h"

 

using namespace std;

 

const int Vmax=100,

Emax=Vmax*(Vmax-1)/2; 
int terminal[Emax], weight[Emax], point[Emax];

int head[Vmax], last[Vmax];

int n, m, v, u, w, k=0, i;

char r;

void Add(int v, int u, int w) 

{

k=k+1;

terminal[k]=u; weight[k]=w;


if (head[v]==0) head[v]=k;


if (last[v]!=0) point[last[v]]=k;

last[v]=k;

}



void main()

{

setlocale(LC_ALL,"Rus");

cout<<"Êîë. âåðøèí >> "; cin>>n;

cout<<"Êîë. ðåáåð >> "; cin>>m;

cout<<"Ââîäèòå ðåáðà è èõ âåñ (v, u, w):\n";

for (i=0; i<m; i++)

{

cin>>v>>u>>w;

cout<<"Ðåáðî îðèåíò.? (y/n) >> "; cin>>r;

if (r=='y') Add(v, u, w);

else

{

Add(v, u, w);

Add(u, v, w);

}

cout<<"..."<<endl;

}

m=m*2;


cout<<"Ñïèñîê ðåáåð ãðàôà:\n";

for (i=0; i<m; i++)

{

k=head[i];

while (k>0)

{

cout<<"("<<i<<"->"<<terminal[k]<<")$="<<weight[k]<<endl;

k=point[k];

}

}

system("pause>>void");

}

int main()

{

    int n, m, x, y, a[80][80];

    setlocale(LC_ALL, "rus");

    cout << "Ââåäèòå êîëè÷åñòâî âåðøèí: ";

    cin >> n;

    cout << "Ââåäèòå êîëè÷åñòâî ð¸áåð: ";

    cin>> m;

    for(int i=1;i<=n;i++)

        for(int j=1;j<=n;j++)

        {

            a[i][j]=0;

        }

        cout << endl;

    cout << "Ââåäèòå ð¸áðà: " << endl;

    for(int i=1;i<=m;i++)

    {

        cin >> x >> y;

        a[x][y]=1;

        a[y][x]=1;

    }

    cout << endl;

    cout << "Ìàòðèöà ñìåæíîñòè: " << endl;

    for(int i=1;i<=n;i++)

    {

        for(int j=1;j<=n;j++)

        {

            cout << a[i][j] << " ";

        }

        cout << endl;

    }

    _getch();

    return 0;

}

int M, N; 

bool **adjacencyMatrix = new bool*[M];

for (int row = 0; row < M; row++)

{

    adjacencyMatrix[row] = new bool[M];

    for (int column = 0; column < M; column++)

        adjacencyMatrix[row][column] = false;

}

 



for (int column = 0; column < N; column++)

{


    int from = -1, to = -1;

    

    for (int row = 0; row < M && (from == -1 || to == -1); row++)

    {

        if (incidenceMatrix[row][column] == 1)

            from = row;

        else if (incidenceMatrix[row][column] == -1)

            to = row;

    }

  

    adjacencyMatrix[from][to] = true;

}
