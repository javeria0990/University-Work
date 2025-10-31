 
 #include<iostream>
 using namespace std;
 
 int main()
 {
     float area,radius,length,width,base,height;
     int shape;
     cout<<"which shape area do you want to find area? "<< endl;
     cout<<"1.Rectangle"<< endl;
     cout<<"2.Circle"<< endl;
     cout<<"3.Triangle"<< endl;
     cin>>shape;
     switch(shape){
     case 1:
     cout<<"enter length and width of rectangle:"<< endl;
     cin>>length>>width;
     area=length*width;
     cout<<"the area of rectangle is="<<area<< endl;
     break;
     case 2:
     cout<<"enter radius of circle"<< endl;
     cin>>area;
     area=3.14*radius*radius;
     
     cout<<"area of circle is="<<area<< endl;
     break;
     case 3:
     cout<<"enter base and height of triangle"<< endl;
     cin>>base>>height;
     area=0.5*base*height;
     cout<<"area of triangle is="<< area;
     break;
     default:
     cout<<"invalid output";
     break;
     
 }
 }
