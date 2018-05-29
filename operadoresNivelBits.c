/*_________________________________________________________________*/
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@hotmail.com         						             */
/* Fecha de Creacion :  25/05/2018                                 */
/* Fecha de Actualizacion : 29/05/2018                             */
/* Descripcion: OPeradores NIvel bits                               */
/* 				                    		                                 */
/*_________________________________________________________________*/



#include <stdio.h>
 int main(void)

   /*OR*/

{
  printf("Compuerta OR\n");

 int x=10;
 int y=1;
 int z=x|y;
printf("%d\n",z);



 int a=2;
 int b=3;
 int c=a|b;
printf("%d\n",c);


int d=1;
int e=0;
int f=d|e;
printf("%d\n",f);


int g=2;
int h=5;
int i=g|h;
printf("%d\n",i);

int j=12;
int k=0;
int l=j|k;
printf("%d\n",l);

int m=11;
int n=9;
int o=m|n;
printf("%d\n",o);

int p=8;
int q=7;
int r=p|q;
printf("%d\n",r);


int s=4;
int t=3;
int u=s|t;
printf("%d\n",u);

int v=1;
int w=4;
int ac=v|w;
printf("%d\n",ac);

int ad=4;
int ae=10;
int ab=ad|ae;
printf("%d\n",ab);


printf("\n\n\n");

printf("Compuerta AND\n");
printf("\n");
/*AND*/

int af=15;
int aj=1;
int ah=af&aj;
printf("%d\n",ah);



int ai=3;
int ak=3;
int al=ai&ak;
printf("%d\n",al);


int aml=1;
int anl=0;
int aol=aml&anl;
printf("%d\n",aol);

int bapl=1;
int bbpl=10;
int bapll=bapl&bbpl;
printf("%d\n",bapll);

int bd=11;
int be=15;
int bf=bd&be;
printf("%d\n",bf);

int bg=21;
int bh=45;
int bi=bg&bh;
printf("%d\n",bi);

int bj=8;
int bk=9;
int bl=bj&bk;
printf("%d\n",bl);

int bm=7;
int bn=5;
int bo=bm&bn;
printf("%d\n",bo);

int bp=3;
int bq=4;
int br=bp&bq;
printf("%d\n",br);

int bs=1;
int bt=25;
int bu=bs&bt;
printf("%d\n",bu);




printf("\n\n\n");
printf("Desplazamiento a la Derecha\n");


int numero=7;
int desplazamiento=3;
numero=numero>>desplazamiento;
printf("7 >> 3 =");
printf("%d\n",numero);

int ca=5;
int cb=4;
ca=ca>>cb;
printf("5 >> 4 =");
printf("%d\n",ca);


int cc=2;
int cd=3;
cc=cc>>cd;
printf("2 >> 3 =");
printf("%d\n",cc);

int ce=9;
int cf=3;
ce=ce>>cf;
printf("9 >> 3 =");
printf("%d\n",ce);

int cg=6;
int ch=2;
cg=cg>>ch;
printf("6 >> 2 =");
printf("%d\n",cg);

int ci=22;
int cj=1;
ci=ci>>cj;
printf("22 >> 1 =");
printf("%d\n",ci);

int ck=8;
int cl=5;
ck=ck>>cl;
printf("8 >> 5 =");
printf("%d\n",ck);

int cz=5;
int cm=1;
cz=cz>>cm;
printf("5 >> 1 =");
printf("%d\n",cz);

int cn=9;
int co=5;
cn=cn>>co;
printf("9 >> 5 =");
printf("%d\n",cc);

int cp=1;
int cq=2;
cp=cp>>cq;
printf("1 >> 2 =");
printf("%d\n",cp);


printf("\n\n\n");
printf("Desplazamiento a la izquierda\n");

int num=7;
int desplaz=3;
num=num<<desplaz;
printf("7 << 3 =");
printf("%d\n",num);

int da=5;
int de=3;
da=da<<de;
printf("5 << 3 =");
printf("%d\n",da);

int dc=2;
int dd=3;
dc=dc<<dd;
printf("2 << 3 =");
printf("%d\n",dc);

int df=2;
int dg=8;
df=df<<dg;
printf("2 << 8 =");
printf("%d\n",df);

int dh=4;
int dj=4;
dh=dh<<dj;
printf("4 << 4 =");
printf("%d\n",dh);

int ei=7;
int ek=3;
ei=ei<<ek;
printf("7 << 3 =");
printf("%d\n",ei);


int ea=1;
int eb=2;
ea=ea<<eb;
printf("1 << 2 =");
printf("%d\n",ea);


int ez=7;
int ey=2;
ez=ez<<ey;
printf("7 << 2 =");
printf("%d\n",ez);


int ej=7;
int ed=1;
ej=ej<<ed;
printf("7 << 1 =");
printf("%d\n",ej);


int edl=7;
int el=3;
edl=edl<<el;
printf("7 << 3 =");
printf("%d\n",edl);

printf("\n\n\n");
printf("Complemento");
int ma=11;
int oa=~ma;
printf("Complemento de 11=\n");
printf("%d\n",oa);

int ga=15;
int gb=~ga;
printf("Complemento de 15=\n");
printf("%d\n",gb);

int gc=89;
int gd=~gc;
printf("Complemento de 89=\n");
printf("%d\n",gd);

int ge=178;
int gf=~ge;
printf("Complemento de 178=\n");
printf("%d\n",gf);

int gh=41;
int gi=~gh;
printf("Complemento de 41=\n");
printf("%d\n",gi);

int gaj=82;
int gak=~gaj;
printf("Complemento de 82=\n");
printf("%d\n",gak);

int gl=74;
int gm=~gl;
printf("Complemento de 74=\n");
printf("%d\n",gm);

int gn=54;
int go=~gn;
printf("Complemento de 54=\n");
printf("%d\n",go);

int gol=71;
int gpl=~gol;
printf("Complemento de 71=\n");
printf("%d\n",gpl);

int gql=21;
int grl=~gql;
printf("Complemento de 21=\n");
printf("%d\n",grl);


printf("\n\n\n");
printf("O exclusiva\n");

 int xa=5;
 int yy=8;
int res=xa^yy;
printf("%d\n",res);

int ha=51;
int hb=81;
int hc=ha^hb;
printf("%d\n",hc);

int hd=4;
int he=1;
int hf=hd^he;
printf("%d\n",hf);

int hg=9;
int hh=10;
int hi=hg^hh;
printf("%d\n",hi);

int hk=4;
int hl=1;
int hm=hk^hl;
printf("%d\n",hm);

int hn=9;
int ho=70;
int hp=hn^ho;
printf("%d\n",hp);

int hr=9;
int hs=70;
int ht=hr^hs;
printf("%d\n",ht);

int hu=5;
int hv=6;
int hw=hu^hv;
printf("%d\n",hw);

int hx=5;
int hy=6;
int hz=hx^hy;
printf("%d\n",hz);

int iu=45;
int iv=66;
int iw=iu^iv;
printf("%d\n",iw);








//10 de cada uno xOR, ~, >>, <<, OR, AND

return 0;
}
