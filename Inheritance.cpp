#include<iostream>
using namespace std;
class Father{
	public:
		int tpf,fchoice;

	int fp;
	private:
	 void fpassproperty() {
        cout << "pass property (1 for yes, 0 for no) ?";
        cin >> fchoice;
    }
	public:
	void getdatafather(){
		cout<<"enter father property:"<<endl;
		cin>>fp;
		cout<<"enter total property:"<<endl;
		cin>>tpf;
		fpassproperty();

	}
	bool isPropertyPassedf() {
        return fchoice == 1;
    }

    int getPropertyf() {
        return tpf;
    } 
	
	public:
	void displayf(){
		cout<<"Father property: "<<fp<<endl;
		cout<<"Total property:"<<tpf;
	}
	
};
class Son: public Father{
	public:
		int tps;
	private:
		void spassproperty() {
        cout << "pass property (1 for yes, 0 for no) ?";
        cin >> fchoice;
    }
    public:
	int sp,schoice;
	void getdatason(){
		cout<<"enter son property:"<<endl;
		cin>>sp;
	    if (isPropertyPassedf()) {
            tps = sp + getPropertyf();
        } else {
            tps = sp;
        }
        spassproperty();
        
	}
	bool isPropertyPasseds() {
        return fchoice == 1;
    }

    int getProperty() {
        return tps;
    } 
	
	public:
	void displays(){
		cout<<"Son property: "<<sp<<endl;
		cout<<"Total property:"<<tps;
	}

	
};
class Grandson:public Son{
	public:
		int tpg,gchoice;
	private:
	int gp;
	public:
	void getdatagrandson(){
		cout<<"enter Grandson property:"<<endl;
		cin>>gp;
        if (isPropertyPasseds()) {
            tpg = gp + getProperty();
        } else {
            tpg = gp;
        }
	  }
	  public:
	  void displayg(){
	  	cout<<"Grandson property: "<<gp<<endl;
		cout<<"Total property:"<<tpg;
	  }
	
};

int main(){
	Grandson g;
	Father f;
	Son s;
	f.getdatafather();
    s.getdatason();
    g.getdatagrandson();
	
	
	cout<<"****DATA****"<<endl;
	f.displayf();
	s.displays();
	g.displayg();
}
