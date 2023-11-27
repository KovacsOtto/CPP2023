#include <iostream>
#include "Szemely.h"
#include "Ceg.h"

using namespace std;

int main() {
    Ceg ceg("Microsoft");
    Alkalmazott *a1=new Alkalmazott("John","Doe",2000,"");
    Alkalmazott *a2=new Alkalmazott("Jane","Doe",2001,"");
    Alkalmazott *a3=new Alkalmazott("Jack","Doe",2002,"");
    Alkalmazott *a4=new Alkalmazott("Jill","Doe",2003,"");
    Alkalmazott *a5=new Alkalmazott("Jim","Doe",2004,"");
    Alkalmazott *a6=new Alkalmazott("Joe","Doe",2005,"");
    Alkalmazott *a7=new Alkalmazott("Jenny","Doe",2006,"");
    Alkalmazott *a8=new Alkalmazott("Jenny","Doe",2007,"");
    Alkalmazott *a9=new Alkalmazott("Jenny","Doe",2008,"");
    Alkalmazott *a10=new Alkalmazott("Jenny","Doe",2009,"");

    ceg.ujSzemelyHozzaad(a1);
    ceg.ujSzemelyHozzaad(a2);
    ceg.ujSzemelyHozzaad(a3);
    ceg.ujSzemelyHozzaad(a4);
    ceg.ujSzemelyHozzaad(a5);
    ceg.ujSzemelyHozzaad(a6);
    ceg.ujSzemelyHozzaad(a7);
    ceg.ujSzemelyHozzaad(a8);
    ceg.ujSzemelyHozzaad(a9);
    ceg.ujSzemelyHozzaad(a10);
    ceg.alkalmazottakListazasa();
    return 0;
}