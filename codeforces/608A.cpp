#include<bits/stdc++.h>

using namespace std;

long cost(long a, long b, long c, long d, long e, long f){
    long sum = 0;
    if(f > e){
        if(b > 0 and c > 0 and d > 0){
            long mini = min(b, min(c, d));
            f = f*mini;
            b = b-mini;
            c = c-mini;
            d = d-mini;
            sum += f;
        }else{
            f = 0;
            sum += f;
        }

        if(a > 0 and d > 0){
                long mini = min(a, d);
                e = e*mini;
                a = a-mini;
                d = a-mini;
                sum += e;
                //cout << sum << endl;
        }
        else{
                e = 0;
                sum += e;
        }

    }

    else{
        if(a > 0 and d > 0){
            long mini = min(a, d);
            e = e*mini;
            a = a-mini;
            d = a-mini;
            sum += e;
        }
        else{
            e = 0;
            sum += e;
        }

        if(b > 0 and c > 0 and d > 0){
                long mini = min(b, min(c, d));
                f = f*mini;
                b = b-mini;
                c = c-mini;
                d = d-mini;
                sum += f;
                //cout << sum << endl;
            }
            else{
                f = 0;
                sum += f;
            }
    }

    return sum;
}


int main(){
    long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >>e >> f;

    cout << cost(a, b, c, d, e, f) << endl;
    

}