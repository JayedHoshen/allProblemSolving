#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, avg, n;

    cin >> a >> b >> c >> d;

    avg = (2*a+3*b+4*c+1*d) / 10.0;
    printf("Media: %.1lf\n", avg);

    if(avg >= 7.0) cout << "Aluno aprovado.\n";
    if(avg < 5.0) cout << "Aluno reprovado.\n";
    if(avg >= 5.0 && avg < 7.0) {
        cout << "Aluno em exame.\n";
        cin >> n;
        printf("Nota do exame: %.1lf\n", n); 
        if((avg+n) / 2.0 >= 5.0) cout << "Aluno aprovado.\n";
        else cout << "Aluno reprovado.\n";
        printf("Media final: %.1lf\n", (avg + n)/2.0);
    }

    return 0;
}