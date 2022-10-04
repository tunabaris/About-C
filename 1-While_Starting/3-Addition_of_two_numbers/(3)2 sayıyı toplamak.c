 #include <stdio.h>
 int main( )
 {
 int tamsayi1,tamsayi2,toplam; /*bildirim*/

 printf ( "ilk tamsayiyi giriniz\n" ); /*mesaj yazdırma*/
 scanf ( "%d",&tamsayi1); /*ilk tam sayının okunması*/
 printf ( "ikinci tamsayiyi giriniz\n" ); /* mesaj yazdırma*/
 scanf ( "%d",&tamsayi2); /*ikinci tamsayının okunması*/
 toplam = tamsayi1+tamsayi2; /*toplamın atanması*/
 printf ( "Toplam %d dir\n",toplam ); /*toplamın yazdırılması*/

}
