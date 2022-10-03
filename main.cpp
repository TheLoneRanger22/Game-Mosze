#include <iostream>
using namespace std;
#define A "a"
#define B "b"

int main() {
  string answer,a,b;
  
  cout<<endl<< "     *** FOREST LAKE ***"<<endl<<endl;
  cout<<"Üdvözöllek a játékban. A Forest Lake egy szöveges szerepjáték,"<<endl<<"melyben a döntéseid határozzák meg a történet menetét. "<<endl<<"Egyes döntések a sikerhez vezethetnek, míg mások porrá zúzhatják" <<endl<< "elért eredményeidet. Légy megfontolt!"<<endl<<endl;
  cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  "<<endl;
  cout<<endl<<endl;
  cout<<"Kezdhetjük?"<<endl;
    cin>>answer;
    if(answer=="igen"){
      cout<<endl<<endl<<"Október vége felé jár. A barátaiddal együtt készültök az éves"<<endl<<"kirándulásra, melyet a hegyekben szoktatok tartani. A megszokott táborhelyet a nyár végén becsukták, ezért a Forest Lake-i faház"<<endl<<"lesz az idei úticélotok. A többiek egy nappal korábban indulnak, mivel neked még el kell intézned pár fontos ügyet."<<endl<<"Érzed, hogy az idei túra más lesz, mint a többi... "<<endl<<endl<<endl<<"A: Elkéred a szüleid lepukkant családi kocsiját, bár a benzin"<<endl<<"drága lesz..."<<endl<<endl<<"B: Mivel kevés a pénzed, ezért busszal utazol, hogy spórolj."<<endl<<"- - - - - - - -"<<endl<<endl;
      cin>>answer;
      if(answer==A){
        cout<<"Bevágod a táskád az anyósülésre, startolod a motrot"<<endl<<"és már indulsz is az erdei úton a barátaid felé. Gyönyörködsz az őszi erdő szépségében, miközben száguldasz a fák között."<<endl<<"Kis idő elteltével figyelmes leszel a furcsa kattogó hangra, mely a motorháztető alól szűrődik ki."<<endl<<endl<<"A: Továbbhajtasz, mivel már így is túl sokat késel."<<endl<<endl<<"B: Megállsz, hogy megnézd mi lehet a probléma."<<endl<<"- - - - - - - -"<<endl<<endl;
      }else if(answer==B){
        cout<<"Felszállsz a buszra és felmutatod a bérleted a sofőrnek. A"<<endl<<"negyven körüli, pocakos hapsi rápillant a jegyre, majd ingerült"<<endl<<"hangon az értésedre adja, hogy érvénytelen a bérleted. Dühösen"<<endl<<"rád szól, hogy azonnal szállj le a járatról."<<endl<<endl<<"A: Kedvesen megkéred őt, hogy ellenőrizze le mégegyszer, valami"<<endl<<"félreértés történhetett."<<endl<<endl<<"B: Eldurran az agyad és kiabálni kezdesz a sofőrrel, hogy veled"<<endl<<"ilyen hangon nem lehet beszélni."<<endl<<"- - - - - - - -"<<endl<<endl;
      } 
    } else if(answer=="nem") cout<<endl<<"Rendben. Gyere vissza később."<<endl;
  else cout<<endl<<"Kérlek próbáld újra."<<endl;
   
}