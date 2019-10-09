#include<stdio.h>
#include<math.h>
int main() {
    int yatin,sahil,store;
    int cases;
    scanf("%d",&cases);
    int i,j;
    for(i=0;i<cases;i++)
    {
        yatin=0;sahil=0;store=0;
        int n;
        scanf("%d",&n);
        int box[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&box[j]);
            if(box[j]%7==0) yatin+=box[j];
            else if(box[j]%5==0) sahil+=box[j];
            else store+=box[j];
        }
// if store has value greater than their difference and after adding store to thier difference if we get an even value surely we can distribute it among two of them..

            if(((yatin-sahil)+store)%2==0&&(abs(yatin-sahil)<=store)) printf("true\n");
            else printf("false\n");

    }
}
