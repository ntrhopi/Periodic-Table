//contains system for displaying details of elemnts
char str[24][11];
int ini_fname()
{
    ifstream fin("datname.txt",ios::in);
    if(fin.fail())
    {
	return 1;
    }
    for(int i=0;i<24;i++)
    {
	fin.getline(str[i],12,'*');
    }
    fin.close();
    return 0;
}

class element
{
   public:
      char name[50];
      char d_date[50];
      char d_by[500];
      char origin[500];
      char mass[15];
      char group[25];
      char period[25];
      void show() ;
};

void element::show()
{
    {
	for(int i=0;i<80;i++)
	   cout<<char(479);
    }
    cout<<"\t"<<"NAME : "<<name<<endl;
    cout<<"\t"<<"DISCOVERED IN : "<<d_date<<endl;
    cout<<"\t"<<"DISCOVERED BY : "<<d_by<<endl;
    cout<<"\t"<<"ORINGIN OF NAME : "<<origin<<endl;
    cout<<"\t"<<"MASS : "<<mass<<endl;
    cout<<"\t"<<"GROUP : "<<group<<endl;
    cout<<"\t"<<"PERIOD : "<<period<<endl;
    {
	for(int i=0;i<80;i++)
	    cout<<char(479);
    }
    getch();
}

class File
{
    public:
	element	rvar[5];
	void show();
};

void File::show()
{
    for(int i=0;i<5;i++)
    {
	rvar[i].show();
	getch();
    }
}

int atom()
{
    cleardevice();
    setbkcolor(CYAN);
    if(!ini_fname())
    {
	int n,m,r;
	cout<<"\n ENTER ATOMIC NUMBER OF THE ELEMENT : ";
	cin>>n;
	cout<<endl;
	m=(n-1)/5;
	if(n%5==0)
	   r=4;
	else
	   r=(n%5)-1;
	File f;
	ifstream fin(str[m],ios::in|ios::binary);
	if(fin.fail())
	{
	    cout<<"\n\n\t\t\t FAILED !! INVALID INPUT !! EXITING !!";
	    delay(800);
	    getch();
	    return 1;
	}
	cout<<" DETAILED INFORMATION OF THE DESIRED ELEMENT IS : \n\n";
	fin.read((char*)&f,sizeof(File));
	f.rvar[r].show();
	fin.close();
     }
     else
     {
	cerr<<"error";
	return 1;
     }
     return 0;
}
