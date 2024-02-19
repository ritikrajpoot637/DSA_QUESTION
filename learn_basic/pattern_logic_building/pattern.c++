#include<bits/stdc++.h>
using namespace std;

void p1(int n){
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            cout<<"*";
        }
        cout<<"\n";

    }
}
void p2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;i>=j;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void p3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;i>=j;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}
void p4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;i>=j;j++){
        cout<<i;
        }
        cout<<"\n";
    }
}
void p5(int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void p6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
}
void p7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }

        cout<<"\n";
    }
}
void p8(int n){
      for(int i=n-1;i>=0;i--){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }

        for(int j=2*i+1;j>0;j--){
            cout<<"*";
        }

        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        cout<<"\n";
      }
}

void p9(int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<=i;j++){
                if(j%2==0){cout<<1;}
                else{cout<<0;}
            }

            cout<<"\n";
        }
        else{
            for(int j=0;j<=i;j++){
                if(j%2==0){cout<<0;}
                else{cout<<1;}

            }
            cout<<"\n";
        }
    }
}
void p10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<i+1-j;
        }

        cout<<"\n";
    }
}
void p11(int n){
    int x=1;
    for(int i=0;i<n;i++){
     for(int j=0;j<=i;j++){
        cout<<x;
        x++;
     }
     cout<<"\n";
    }
}
void p12(int n){
    for(int i=0;i<n;i++){
        char a='A';
        for(int j=0;j<=i;j++){
           cout<<a;
           a++;
        }
        cout<<"\n";
    }
}
void p13(int n){
    for(int i=0;i<n;i++){
        char a='A';
        for(int j=0;j<n-i;j++){
            cout<<a;
            a++;
        }
        cout<<"\n";
    }
}
void p14(int n){
    char x='a';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<x;
        }
        x++;
        cout<<"\n";
    }
}
void p15(int n){
    for(int i=0;i<n;i++){
        char a='A';
        a=a+n-i-1;
        for(int j=0;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<"\n";
    }
}
void p16(int n){
    for(int i=0;i<n;i++){
        char a='A';
        for(int j=0;j<n-i-1;j++){
           cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){

            cout<<a;
            if(j<=(2*i+1)/2){a++;}
            else{a--;}

        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        cout<<"\n";
    }
}
void p17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";

        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void p18(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }


    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+2;j++){
            cout<<" ";

        }
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }   
}
void p19(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2-j);
            int bottom=2*n-2-i;
            
            cout<<n-min(min(top,bottom),min(right,left));
        }
        cout<<"\n";
    }
}

int main(){
    p1(5);
    cout<<"\n";
    p2(5);
    p3(5);
    p4(5);
    p5(5);
    p6(5);
    p7(5);
    p8(5);
    p2(5);
    p5(6);
    p9(5);
    p10(5);
    p11(5);
    p12(5);
    p13(5);
    p14(5);
    p15(5);
    cout<<"\n";
    p16(5);
    p17(6);
    p18(5);
    p19(3);

}