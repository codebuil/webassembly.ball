int xxx=10;
int yyy=10;
int yyy1=10;
int xxx1=10;
int www=600;
int hhh=400;
void setxxx(int x){
    xxx1=x;
}
void setyyy(int y){
    yyy1=y;
}
void setwww(int w){
    www=w;
}
void sethhh(int h){
    hhh=h;
}
int gety(){
    return yyy;
}
int getx(){
    xxx=xxx+xxx1;
    yyy=yyy+yyy1;
    if(yyy>hhh-20){
        yyy1=-yyy1;
        yyy=yyy+yyy1;
    }
    if(xxx>www-20){
        xxx1=-xxx1;
        xxx=xxx+xxx1;
    }
    if(yyy<20){
        
        yyy1=-yyy1;
        yyy=yyy+yyy1;
    }
    if(xxx<20){
       
        xxx1=-xxx1;
         xxx=xxx+xxx1;
    }
    
    return xxx;
}