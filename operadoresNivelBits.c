/*________________________________________________________________ */
/* Autor Maria Emilia Palomec Reyes                                */
/* E-mail : emilia0599@hotmail.com         						                  */
/* Fecha de Creacion :  27/05/2018                                 */
/* Fecha de Actualizacion : 28/05/2018                             */
/* Descripcion: Operadores nivel bits                              */
/* 				                    		                                      */
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
printf("%d\n",numero);

int ca=5;
int cb=4;
ca=ca>>cb;
printf("%d\n",ca);


int cc=85;
int cd=53;
cc=cc>>cd;
printf("%d\n",cc);

int ce=89;
int cf=83;
ce=ce>>cf;
printf("%d\n",ce);

int cg=47;
int ch=25;
cg=cg>>ch;
printf("%d\n",cg);

int ci=72;
int cj=258;
ci=ci>>cj;
printf("%d\n",ci);

int ck=28;
int cl=15;
ck=ck>>cl;
printf("%d\n",ck);

int cz=55;
int cm=59;
cz=cz>>cm;
printf("%d\n",cz);

int cn=98;
int co=35;
cn=cn>>co;
printf("%d\n",cc);

int cp=17;
int cq=53;
cp=cp>>cq;
printf("%d\n",cp);


printf("\n\n\n");
printf("Desplazamiento a la izquierda\n");

int num=7;
int desplaz=3;
num=num<<desplaz;
printf("%d\n",num);

int da=5;
int de=3;
da=da<<de;
printf("%d\n",da);

int dc=29;
int dd=32;
dc=dc<<dd;
printf("%d\n",dc);

int df=23;
int dg=896;
df=df<<dg;
printf("%d\n",df);

int dh=47;
int dj=48;
dh=dh<<dj;
printf("%d\n",dh);

int ei=7;
int ek=3;
ei=ei<<ek;
printf("%d\n",ei);


int ea=72;
int eb=38;
ea=ea<<eb;
printf("%d\n",ea);


int ez=17;
int ey=13;
ez=ez<<ey;
printf("%d\n",ez);


int ej=8;
int ed=333;
ej=ej<<ed;
printf("%d\n",ej);


int edl=7;
int el=3;
edl=edl<<el;
printf("%d\n",edl);

printf("\n\n\n");
printf("Complemento\n");
int ma=11;
int oa=~ma;
printf("%d\n",oa);

int ga=15;
int gb=~ga;
printf("%d\n",gb);

int gc=89;
int gd=~gc;
printf("%d\n",gd);

int ge=178;
int gf=~ge;
printf("%d\n",gf);

int gh=41;
int gi=~gh;
printf("%d\n",gi);

int gaj=82;
int gak=~gaj;
printf("%d\n",gak);

int gl=74;
int gm=~gl;
printf("%d\n",gm);

int gn=74;
int go=~gn;
printf("%d\n",go);

int gol=74;
int gpl=~gol;
printf("%d\n",gpl);

int gql=74;
int grl=~gql;
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
