#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0;
    int a[110],b[110],c[110],d[110];
    int tmpX, tmpY;
    int redNum = 0;
    int blueNum = 0;
    cin >> n;
    for(int i=0; i< n; i++){
        cin >> a[i] >> b[i];
    }
    
    for(int i=0; i< n; i++){
        cin >> c[i] >> d[i];
    }

    for(int i=0; i< n-1 ; i++){
        for(int j=n-1; j> i ; j--){
            if(a[j-1] >= a[j]){
                // if(b[j-1] > b[j]){
                    tmpX = a[j-1];
                    a[j-1] = a[j];
                    a[j] = tmpX;
                    tmpY = b[j-1];
                    b[j-1] = b[j];
                    b[j] = tmpY;
                // }
            }
        }
    }
    
    for(int i=0; i< n-1 ; i++){
        for(int j=n-1; j> i ; j--){
            // if(c[j-1] >= c[j]){
                if(d[j-1] > d[j]){
                    tmpX = c[j-1];
                    c[j-1] = c[j];
                    c[j] = tmpX;
                    tmpY = d[j-1];
                    d[j-1] = d[j];
                    d[j] = tmpY;
                }
            // }
        }
    }
    std::vector<int> redX(a,a+n);
    std::vector<int> redY(b,b+n);
    std::vector<int> blueX(c,c+n);
    std::vector<int> blueY(d,d+n);
    
    for(int i=0; i< n -redNum; i++){
        for(int j=0; j< n -blueNum; j++){
            cout << i << "*"<< j <<  " "<<redX[i] << "：" << redY[i]<<" "<<blueX[j] << "：" << blueY[j]<<endl;
            if(redX[i] < blueX[j] && redY[i] < blueY[j]){
                cout << "RED:"<<redX[i] << "：" << redY[i]<< " ";
                cout << "Blue:"<<blueX[j] << "：" << blueY[j]<<endl;
                count++;
                redX.erase(redX.begin() + i);
                redY.erase(redY.begin() + i);
                blueX.erase(blueX.begin() + j);
                blueY.erase(blueY.begin() + j);
                i--;
                cout << redX[0] << "：" << redY[0]<<endl;
                redNum++;
                blueNum++;
                break;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}